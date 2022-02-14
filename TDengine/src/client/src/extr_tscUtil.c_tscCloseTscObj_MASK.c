
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int code; } ;
struct TYPE_10__ {TYPE_1__ res; } ;
struct TYPE_9__ {int mutex; int pTimer; TYPE_3__* pSql; int * signature; } ;
typedef TYPE_2__ STscObj ;
typedef TYPE_3__ SSqlObj ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,TYPE_2__*) ;

void FUNC_5(STscObj* VAR_1) {
  VAR_1->signature = ((void*)0);
  SSqlObj* VAR_2 = VAR_1->pSql;
  VAR_0 = VAR_2->res.code;

  FUNC_1(&(VAR_1->pTimer));
  FUNC_3(VAR_2);

  FUNC_0(&VAR_1->mutex);
  FUNC_4("%p DB connection is closed", VAR_1);
  FUNC_2(VAR_1);
}

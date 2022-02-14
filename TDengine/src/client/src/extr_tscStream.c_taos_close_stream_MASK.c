
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* signature; } ;
struct TYPE_9__ {int * pSql; int pTimer; } ;
typedef int TAOS_STREAM ;
typedef TYPE_1__ SSqlStream ;
typedef TYPE_2__ SSqlObj ;


 scalar_t__ FUNC_0 (int **,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (char*,TYPE_2__*,TYPE_1__*) ;

void FUNC_6(TAOS_STREAM *VAR_0) {
  SSqlStream *VAR_1 = (SSqlStream *)VAR_0;

  SSqlObj *VAR_2 = (SSqlObj *)FUNC_0(&VAR_1->pSql, 0);
  if (VAR_2 == ((void*)0)) {
    return;
  }





  if (VAR_2->signature == VAR_2) {
    FUNC_4(VAR_1, VAR_2);

    FUNC_1(&(VAR_1->pTimer));
    FUNC_3(VAR_2);
    VAR_1->pSql = ((void*)0);

    FUNC_5("%p stream:%p is closed", VAR_2, VAR_1);
    FUNC_2(VAR_1);
  }
}

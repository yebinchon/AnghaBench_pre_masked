
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int queryMutex; struct TYPE_11__* localBuffer; } ;
struct TYPE_9__ {scalar_t__ code; } ;
struct TYPE_10__ {TYPE_1__ res; } ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SRetrieveSupport ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(SRetrieveSupport *VAR_1, SSqlObj *VAR_2) {
  FUNC_4("%p start to free subquery result", VAR_2);

  if (VAR_2->res.code == VAR_0) {
    FUNC_2(VAR_2);
  }

  FUNC_3(VAR_1->localBuffer);

  FUNC_1(&VAR_1->queryMutex);
  FUNC_0(&VAR_1->queryMutex);

  FUNC_3(VAR_1);
}

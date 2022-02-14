
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pHb; struct TYPE_4__* signature; } ;
typedef int TAOS ;
typedef TYPE_1__ STscObj ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(TAOS *VAR_0) {
  STscObj *VAR_1 = (STscObj *)VAR_0;

  if (VAR_1 == ((void*)0)) return;
  if (VAR_1->signature != VAR_1) return;

  if (VAR_1->pHb != ((void*)0)) {
    FUNC_1(VAR_1);
  } else {
    FUNC_0(VAR_1);
  }
}

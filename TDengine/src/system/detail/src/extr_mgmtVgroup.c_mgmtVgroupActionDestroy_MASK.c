
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* meterList; int * idPool; } ;
typedef TYPE_1__ SVgObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;

void *FUNC_2(void *VAR_0, char *VAR_1, int VAR_2, int *VAR_3) {
  SVgObj *VAR_4 = (SVgObj *)VAR_0;
  if (VAR_4->idPool) {
    FUNC_0(VAR_4->idPool);
    VAR_4->idPool = ((void*)0);
  }
  if (VAR_4->meterList) FUNC_1(VAR_4->meterList);
  FUNC_1(VAR_0);
  return ((void*)0);
}

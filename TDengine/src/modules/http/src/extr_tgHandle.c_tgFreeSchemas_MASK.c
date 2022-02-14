
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int * schemas; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_2() {
  if (VAR_0.schemas != ((void*)0)) {
    for (int VAR_1 = 0; VAR_1 < VAR_0.size; ++VAR_1) {
      FUNC_1(&VAR_0.schemas[VAR_1]);
    }
    FUNC_0(VAR_0.schemas);
    VAR_0.size = 0;
  }
}

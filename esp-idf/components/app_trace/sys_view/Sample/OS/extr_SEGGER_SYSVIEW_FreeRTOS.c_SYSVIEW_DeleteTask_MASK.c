
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_2__ {scalar_t__ xHandle; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_1(U32 VAR_2) {
  unsigned VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    if (VAR_1[VAR_3].xHandle == VAR_2) {
      break;
    }
  }
  if (VAR_3 == VAR_0) {
    FUNC_0("SYSTEMVIEW: Could not find task information. Cannot delete task.");
    return;
  }

  VAR_1[VAR_3].xHandle = 0;
}

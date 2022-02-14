
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmrHw_ID_t ;
struct TYPE_2__ {scalar_t__ InterruptStatus; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

tmrHw_ID_t FUNC_0(void
) {
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2].InterruptStatus) {
   return VAR_2;
  }
 }

 return 0xFFFFFFFF;
}

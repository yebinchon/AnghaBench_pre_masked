
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmrHw_INTERRUPT_STATUS_e ;
typedef size_t tmrHw_ID_t ;
struct TYPE_2__ {scalar_t__ InterruptStatus; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

tmrHw_INTERRUPT_STATUS_e FUNC_0(tmrHw_ID_t VAR_3
) {
 if (VAR_0[VAR_3].InterruptStatus) {
  return VAR_1;
 } else {
  return VAR_2;
 }
}

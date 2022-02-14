
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prev_state; } ;
struct qlcnic_hardware_context {TYPE_1__ idc; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;

int FUNC_2(struct qlcnic_adapter *VAR_4)
{
 struct qlcnic_hardware_context *VAR_5 = VAR_4->ahw;

 if (VAR_5->idc.prev_state != VAR_3) {
  FUNC_1(VAR_4);

  if ((VAR_5->idc.prev_state == VAR_2) ||
      (VAR_5->idc.prev_state == VAR_1)) {
   if (FUNC_0(VAR_4))
    return -VAR_0;
  }
 }

 return 0;
}

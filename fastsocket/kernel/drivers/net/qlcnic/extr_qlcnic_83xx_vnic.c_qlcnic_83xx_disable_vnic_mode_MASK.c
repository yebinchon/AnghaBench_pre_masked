
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vnic_state; } ;
struct qlcnic_hardware_context {TYPE_1__ idc; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_hardware_context*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

int FUNC_3(struct qlcnic_adapter *VAR_3, int VAR_4)
{
 struct qlcnic_hardware_context *VAR_5 = VAR_3->ahw;

 if (VAR_4) {
  if (FUNC_1(VAR_3))
   return -VAR_0;
 }

 FUNC_0(VAR_3->ahw, VAR_2, VAR_1);
 VAR_5->idc.vnic_state = VAR_1;

 if (VAR_4)
  FUNC_2(VAR_3);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int state_entry; } ;
struct qlcnic_hardware_context {TYPE_2__ idc; } ;
struct qlcnic_adapter {TYPE_1__* nic_ops; int state; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_3__ {int init_driver; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct qlcnic_adapter *VAR_6)
{
 u32 VAR_7;
 struct qlcnic_hardware_context *VAR_8 = VAR_6->ahw;

 FUNC_1(VAR_6);
 VAR_7 = FUNC_0(VAR_8, VAR_2);

 if (FUNC_2(VAR_3, &VAR_6->state))
  VAR_7 = VAR_1;

 if (VAR_7 == VAR_1) {
  VAR_6->nic_ops->init_driver = VAR_5;
  VAR_8->idc.state_entry = VAR_4;
 } else {
  return -VAR_0;
 }

 return 0;
}

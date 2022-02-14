
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_nic_template {int init_driver; } ;
struct TYPE_4__ {int vnic_wait_limit; int vnic_state; void* state_entry; } ;
struct qlcnic_hardware_context {int op_mode; int capabilities; TYPE_2__ idc; int pci_func; } ;
struct qlcnic_adapter {int flags; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; struct qlcnic_nic_template* nic_ops; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,char*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct qlcnic_adapter*) ;

int FUNC_4(struct qlcnic_adapter *VAR_12)
{
 u32 VAR_13, VAR_14;
 struct qlcnic_hardware_context *VAR_15 = VAR_12->ahw;
 struct qlcnic_nic_template *VAR_16 = VAR_12->nic_ops;

 FUNC_3(VAR_12);
 VAR_13 = FUNC_0(VAR_12->ahw, VAR_6);

 if (VAR_13 == VAR_5)
  VAR_14 = 130;
 else
  VAR_14 = FUNC_1(VAR_13,
        VAR_15->pci_func);
 switch (VAR_14) {
 case 129:
  VAR_15->op_mode = 129;
  VAR_15->idc.state_entry = VAR_7;
  VAR_16->init_driver = VAR_10;
  break;
 case 128:
  VAR_15->op_mode = 128;
  VAR_15->idc.state_entry = VAR_8;
  VAR_16->init_driver = VAR_11;
  break;
 case 130:
  VAR_15->op_mode = 130;
  VAR_15->idc.state_entry = VAR_7;
  VAR_16->init_driver = VAR_9;
  break;
 default:
  FUNC_2(&VAR_12->pdev->dev, "Invalid Virtual NIC opmode\n");
  return -VAR_1;
 }

 if (VAR_15->capabilities & VAR_0)
  VAR_12->flags |= VAR_4;
 else
  VAR_12->flags &= ~VAR_4;

 VAR_15->idc.vnic_state = VAR_2;
 VAR_15->idc.vnic_wait_limit = VAR_3;

 return 0;
}

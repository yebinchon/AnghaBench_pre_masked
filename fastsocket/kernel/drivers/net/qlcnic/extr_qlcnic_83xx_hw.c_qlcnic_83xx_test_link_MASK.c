
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_hardware_context {int module_type; int supported_type; int link_speed; scalar_t__ pci_base0; int pci_func; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; } ;
struct qlcnic_adapter {TYPE_1__* pdev; int portnum; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_3__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_6 (struct qlcnic_cmd_args*) ;
 int FUNC_7 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (scalar_t__) ;

int FUNC_10(struct qlcnic_adapter *VAR_8)
{
 u8 VAR_9;
 int VAR_10;
 u32 VAR_11 = 0, VAR_12;
 struct qlcnic_cmd_args VAR_13;
 struct qlcnic_hardware_context *VAR_14 = VAR_8->ahw;

 if (FUNC_8(VAR_8))
  VAR_9 = VAR_8->portnum;
 else
  VAR_9 = VAR_14->pci_func;

 VAR_12 = FUNC_9(VAR_14->pci_base0 + FUNC_1(VAR_9));
 if (!FUNC_3(VAR_12, VAR_9)) {
  FUNC_4(&VAR_8->pdev->dev, "link state down\n");
  return VAR_11;
 }
 FUNC_5(&VAR_13, VAR_8, VAR_3);
 VAR_10 = FUNC_7(VAR_8, &VAR_13);
 if (VAR_10) {
  FUNC_4(&VAR_8->pdev->dev,
    "Get Link Status Command failed: 0x%x\n", VAR_10);
  goto out;
 } else {
  VAR_11 = VAR_13.rsp.arg[1];
  switch (FUNC_0(VAR_11)) {
  case 129:
   VAR_14->link_speed = VAR_4;
   break;
  case 131:
   VAR_14->link_speed = VAR_5;
   break;
  case 128:
   VAR_14->link_speed = VAR_6;
   break;
  case 130:
   VAR_14->link_speed = VAR_7;
   break;
  default:
   VAR_14->link_speed = 0;
   break;
  }
  VAR_11 = VAR_13.rsp.arg[3];
  if (FUNC_2(VAR_11)) {
   switch (VAR_14->module_type) {
   case 135:
   case 136:
   case 138:
   case 137:
    VAR_14->supported_type = VAR_0;
    break;
   case 133:
   case 132:
   case 134:
    VAR_14->supported_type = VAR_2;
    break;
   default:
    VAR_14->supported_type = VAR_1;
   }
  }
  if (VAR_11 & 1)
   VAR_10 = 1;
 }
out:
 FUNC_6(&VAR_13);
 return VAR_11;
}

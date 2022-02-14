
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_hardware_context {int dummy; } ;
struct TYPE_4__ {int* arg; int num; } ;
struct TYPE_3__ {scalar_t__* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;





 int VAR_5 ;

 int VAR_6 ;
 void* FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*,int ,scalar_t__) ;
 int FUNC_4 (int *,char*,...) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_7 (struct qlcnic_hardware_context*) ;
 scalar_t__ FUNC_8 (struct qlcnic_adapter*) ;

int FUNC_9(struct qlcnic_adapter *VAR_7,
     struct qlcnic_cmd_args *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 struct pci_dev *VAR_12 = VAR_7->pdev;
 struct qlcnic_hardware_context *VAR_13 = VAR_7->ahw;

 VAR_11 = FUNC_7(VAR_13);


 if (FUNC_5(VAR_7)) {
  VAR_8->rsp.arg[0] = 128;
  return VAR_8->rsp.arg[0];
 }

 FUNC_3(VAR_7, VAR_6, VAR_11);
 for (VAR_9 = 1; VAR_9 < VAR_1; VAR_9++)
  FUNC_3(VAR_7, FUNC_0(VAR_9), VAR_8->req.arg[VAR_9]);
 FUNC_3(VAR_7, VAR_0,
  FUNC_1(VAR_8->req.arg[0]));
 VAR_10 = FUNC_8(VAR_7);

 if (VAR_10 == VAR_4) {
  FUNC_4(&VAR_12->dev, "card response timeout.\n");
  VAR_8->rsp.arg[0] = 128;
 } else if (VAR_10 == VAR_2) {
  VAR_8->rsp.arg[0] = FUNC_2(VAR_7, FUNC_0(1));
  switch (VAR_8->rsp.arg[0]) {
  case 132:
   FUNC_4(&VAR_12->dev, "CDRP invalid args 0x%x\n",
    VAR_8->rsp.arg[0]);
   break;
  case 129:
  case 131:
   FUNC_4(&VAR_12->dev,
    "CDRP command not supported: 0x%x.\n",
    VAR_8->rsp.arg[0]);
   break;
  case 130:
   FUNC_4(&VAR_12->dev,
    "CDRP requested action not permitted: 0x%x.\n",
    VAR_8->rsp.arg[0]);
   break;
  case 133:
   FUNC_4(&VAR_12->dev,
    "CDRP invalid or unknown cmd received: 0x%x.\n",
    VAR_8->rsp.arg[0]);
   break;
  case 128:
   FUNC_4(&VAR_12->dev, "CDRP command timeout: 0x%x.\n",
    VAR_8->rsp.arg[0]);
   break;
  default:
   FUNC_4(&VAR_12->dev, "CDRP command failed: 0x%x.\n",
    VAR_8->rsp.arg[0]);
   break;
  }
 } else if (VAR_10 == VAR_3)
  VAR_8->rsp.arg[0] = VAR_5;

 for (VAR_9 = 1; VAR_9 < VAR_8->rsp.num; VAR_9++)
  VAR_8->rsp.arg[VAR_9] = FUNC_2(VAR_7, FUNC_0(VAR_9));


 FUNC_6(VAR_7);
 return VAR_8->rsp.arg[0];
}

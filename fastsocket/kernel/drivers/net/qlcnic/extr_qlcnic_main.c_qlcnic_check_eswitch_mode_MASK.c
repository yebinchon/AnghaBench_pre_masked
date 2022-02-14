
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {int flags; TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int fw_hal_version; scalar_t__ op_mode; int pci_func; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_6(struct qlcnic_adapter *VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9)
  return VAR_9;

 if (VAR_6->flags & VAR_0)
  return 0;

 VAR_7 = FUNC_1(VAR_6, VAR_1);
 VAR_8 = FUNC_0(VAR_7, VAR_6->ahw->pci_func);

 if (VAR_7 == VAR_5)
  VAR_8 = VAR_3;
 else
  VAR_8 = FUNC_0(VAR_7, VAR_6->ahw->pci_func);

 if (VAR_6->flags & VAR_2) {
  if (VAR_8 == VAR_3) {
   VAR_6->ahw->op_mode = VAR_3;
   VAR_9 = FUNC_3(VAR_6);
   if (VAR_9)
    return VAR_9;

   FUNC_5(VAR_6);
   FUNC_2(&VAR_6->pdev->dev,
    "HAL Version: %d, Management function\n",
     VAR_6->ahw->fw_hal_version);
  } else if (VAR_8 == VAR_4) {
   VAR_6->ahw->op_mode = VAR_4;
   FUNC_2(&VAR_6->pdev->dev,
    "HAL Version: %d, Privileged function\n",
     VAR_6->ahw->fw_hal_version);
  }
 }

 VAR_6->flags |= VAR_0;

 return VAR_9;
}

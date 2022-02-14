
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int* arg; } ;
struct TYPE_6__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_5__* ahw; TYPE_2__* pdev; } ;
struct TYPE_10__ {int num_msix; int pci_func; TYPE_4__* intr_tbl; } ;
struct TYPE_9__ {int type; int id; int enabled; int src; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_5 (struct qlcnic_cmd_args*) ;
 int FUNC_6 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_7 (struct qlcnic_adapter*) ;

int FUNC_8(struct qlcnic_adapter *VAR_5, bool VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 u8 VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 struct qlcnic_cmd_args VAR_14;

 VAR_10 = VAR_5->ahw->num_msix - 1;
 FUNC_4(&VAR_14, VAR_5, VAR_1);
 VAR_14.req.arg[1] = VAR_10;

 if (FUNC_7(VAR_5))
  VAR_14.req.arg[1] |= (VAR_5->ahw->pci_func << 8) | VAR_0;

 for (VAR_7 = 0, VAR_8 = 2; VAR_7 < VAR_10; VAR_7++) {
  VAR_13 = VAR_6 ? VAR_2 : VAR_3;
  VAR_11 = VAR_13 | (VAR_5->ahw->intr_tbl[VAR_7].type << 4);
  if (VAR_5->ahw->intr_tbl[VAR_7].type == VAR_4)
   VAR_11 |= (VAR_5->ahw->intr_tbl[VAR_7].id << 16);
  VAR_14.req.arg[VAR_8++] = VAR_11;
 }
 VAR_9 = FUNC_6(VAR_5, &VAR_14);
 if (VAR_9) {
  FUNC_2(&VAR_5->pdev->dev,
   "Failed to configure interrupts 0x%x\n", VAR_9);
  goto out;
 }

 VAR_10 = VAR_14.rsp.arg[1];
 for (VAR_7 = 0, VAR_8 = 2; VAR_7 < VAR_10; VAR_7++, VAR_8 += 2) {
  VAR_11 = VAR_14.rsp.arg[VAR_8];
  if (FUNC_0(VAR_11)) {
   FUNC_3(&VAR_5->pdev->dev,
     "Can't configure interrupt %d\n",
     VAR_5->ahw->intr_tbl[VAR_7].id);
   continue;
  }
  if (VAR_6) {
   VAR_5->ahw->intr_tbl[VAR_7].id = FUNC_1(VAR_11);
   VAR_5->ahw->intr_tbl[VAR_7].enabled = 1;
   VAR_12 = VAR_14.rsp.arg[VAR_8 + 1];
   VAR_5->ahw->intr_tbl[VAR_7].src = VAR_12;
  } else {
   VAR_5->ahw->intr_tbl[VAR_7].id = VAR_7;
   VAR_5->ahw->intr_tbl[VAR_7].enabled = 0;
   VAR_5->ahw->intr_tbl[VAR_7].src = 0;
  }
 }
out:
 FUNC_5(&VAR_14);
 return VAR_9;
}

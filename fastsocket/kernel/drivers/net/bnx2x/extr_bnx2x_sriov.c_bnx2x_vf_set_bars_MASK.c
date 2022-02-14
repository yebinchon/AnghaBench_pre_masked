
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct bnx2x_virtf {int abs_vfid; TYPE_2__* bars; } ;
struct bnx2x_sriov {int total; } ;
struct bnx2x {TYPE_1__* vfdb; struct pci_dev* pdev; } ;
struct TYPE_4__ {int size; scalar_t__ bar; } ;
struct TYPE_3__ {struct bnx2x_sriov sriov; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pci_dev*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_2, struct bnx2x_virtf *VAR_3)
{
 int VAR_4, VAR_5;
 struct pci_dev *VAR_6 = VAR_2->pdev;
 struct bnx2x_sriov *VAR_7 = &VAR_2->vfdb->sriov;

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_1; VAR_4 += 2, VAR_5++) {
  u64 VAR_8 = FUNC_1(VAR_6, VAR_0 + VAR_4);
  u32 VAR_9 = FUNC_0(VAR_6, VAR_0 + VAR_4);

  VAR_9 /= VAR_7->total;
  VAR_3->bars[VAR_5].bar = VAR_8 + VAR_9 * VAR_3->abs_vfid;
  VAR_3->bars[VAR_5].size = VAR_9;
 }
}

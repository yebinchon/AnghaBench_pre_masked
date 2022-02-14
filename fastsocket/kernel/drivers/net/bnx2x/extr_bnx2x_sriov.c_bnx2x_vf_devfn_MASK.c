
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; } ;
struct bnx2x_sriov {int offset; int stride; } ;
struct bnx2x {TYPE_1__* vfdb; struct pci_dev* pdev; } ;
struct TYPE_2__ {struct bnx2x_sriov sriov; } ;



__attribute__((used)) static int FUNC_0(struct bnx2x *VAR_0, int VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;
 struct bnx2x_sriov *VAR_3 = &VAR_0->vfdb->sriov;

 return (VAR_2->devfn + VAR_3->offset + VAR_3->stride * VAR_1) & 0xff;
}

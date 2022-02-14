
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sparc64_msiq_ops {int (* msi_setup ) (struct pci_pbm_info*,int ,int,int) ;} ;
struct pci_pbm_info {unsigned int* msi_irq_table; int msi_first; int msi64_start; int msi32_start; struct sparc64_msiq_ops* msi_ops; } ;
struct TYPE_4__ {struct pci_pbm_info* host_controller; } ;
struct TYPE_5__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct msi_msg {int address_hi; int address_lo; int data; } ;
struct TYPE_6__ {scalar_t__ is_64; } ;
struct msi_desc {TYPE_3__ msi_attrib; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_pbm_info*) ;
 int FUNC_1 (struct pci_pbm_info*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pci_pbm_info*) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (unsigned int,int *,int ,char*) ;
 int FUNC_5 (unsigned int,struct msi_desc*) ;
 int FUNC_6 (struct pci_pbm_info*,int ,int,int) ;
 scalar_t__ FUNC_7 (int) ;
 unsigned int FUNC_8 (int ,int ) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int,struct msi_msg*) ;

__attribute__((used)) static int FUNC_11(unsigned int *VAR_3,
     struct pci_dev *VAR_4,
     struct msi_desc *VAR_5)
{
 struct pci_pbm_info *VAR_6 = VAR_4->dev.archdata.host_controller;
 const struct sparc64_msiq_ops *VAR_7 = VAR_6->msi_ops;
 struct msi_msg VAR_8;
 int VAR_9, VAR_10;
 u32 VAR_11;

 *VAR_3 = FUNC_8(0, 0);
 VAR_10 = -VAR_0;
 if (!*VAR_3)
  goto out_err;

 FUNC_4(*VAR_3, &VAR_2,
          VAR_1, "MSI");

 VAR_10 = FUNC_0(VAR_6);
 if (FUNC_7(VAR_10 < 0))
  goto out_virt_irq_free;

 VAR_9 = VAR_10;

 VAR_11 = FUNC_2(VAR_6);

 VAR_10 = VAR_7->msi_setup(VAR_6, VAR_11, VAR_9,
        (VAR_5->msi_attrib.is_64 ? 1 : 0));
 if (VAR_10)
  goto out_msi_free;

 VAR_6->msi_irq_table[VAR_9 - VAR_6->msi_first] = *VAR_3;

 if (VAR_5->msi_attrib.is_64) {
  VAR_8.address_hi = VAR_6->msi64_start >> 32;
  VAR_8.address_lo = VAR_6->msi64_start & 0xffffffff;
 } else {
  VAR_8.address_hi = 0;
  VAR_8.address_lo = VAR_6->msi32_start;
 }
 VAR_8.data = VAR_9;

 FUNC_5(*VAR_3, VAR_5);
 FUNC_10(*VAR_3, &VAR_8);

 return 0;

out_msi_free:
 FUNC_1(VAR_6, VAR_9);

out_virt_irq_free:
 FUNC_3(*VAR_3, ((void*)0));
 FUNC_9(*VAR_3);
 *VAR_3 = 0;

out_err:
 return VAR_10;
}

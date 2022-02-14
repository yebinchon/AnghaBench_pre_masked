
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int msi_enabled; int irq; int msi_list; } ;
struct TYPE_2__ {int pos; scalar_t__ maskbit; int is_64; int default_irq; scalar_t__ entry_nr; scalar_t__ is_msix; } ;
struct msi_desc {int irq; int list; int masked; int mask_pos; TYPE_1__ msi_attrib; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msi_desc* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct msi_desc*,unsigned int,unsigned int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (struct pci_dev*,int,int) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ,int *) ;
 int FUNC_14 (struct pci_dev*,int ,int *) ;
 int FUNC_15 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_2, int VAR_3)
{
 struct msi_desc *VAR_4;
 int VAR_5, VAR_6;
 u16 VAR_7;
 unsigned VAR_8;

 VAR_5 = FUNC_11(VAR_2, VAR_1);
 FUNC_10(VAR_2, VAR_5, 0);

 FUNC_14(VAR_2, FUNC_7(VAR_5), &VAR_7);

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->msi_attrib.is_msix = 0;
 VAR_4->msi_attrib.is_64 = FUNC_3(VAR_7);
 VAR_4->msi_attrib.entry_nr = 0;
 VAR_4->msi_attrib.maskbit = FUNC_4(VAR_7);
 VAR_4->msi_attrib.default_irq = VAR_2->irq;
 VAR_4->msi_attrib.pos = VAR_5;

 VAR_4->mask_pos = FUNC_9(VAR_5, VAR_4->msi_attrib.is_64);

 if (VAR_4->msi_attrib.maskbit)
  FUNC_13(VAR_2, VAR_4->mask_pos, &VAR_4->masked);
 VAR_8 = FUNC_6(VAR_7);
 FUNC_8(VAR_4, VAR_8, VAR_8);

 FUNC_5(&VAR_4->list, &VAR_2->msi_list);


 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_6) {
  FUNC_8(VAR_4, VAR_8, ~VAR_8);
  FUNC_2(VAR_2);
  return VAR_6;
 }

 VAR_6 = FUNC_15(VAR_2);
 if (VAR_6) {
  FUNC_8(VAR_4, VAR_8, ~VAR_8);
  FUNC_2(VAR_2);
  return VAR_6;
 }


 FUNC_12(VAR_2, 0);
 FUNC_10(VAR_2, VAR_5, 1);
 VAR_2->msi_enabled = 1;

 VAR_2->irq = VAR_4->irq;
 return 0;
}

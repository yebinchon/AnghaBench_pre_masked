
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qib_devdata {int msi_data; int msi_hi; int msi_lo; struct pci_dev* pcidev; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct qib_devdata*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct qib_devdata *VAR_4, int VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->pcidev;
 u16 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8)
  FUNC_3(VAR_4,
   "pci_enable_msi failed: %d, interrupts may not work\n",
   VAR_8);


 FUNC_1(VAR_6, VAR_5 + VAR_1,
         &VAR_4->msi_lo);
 FUNC_1(VAR_6, VAR_5 + VAR_0,
         &VAR_4->msi_hi);
 FUNC_2(VAR_6, VAR_5 + VAR_2, &VAR_7);

 FUNC_2(VAR_6, VAR_5 + ((VAR_7 & VAR_3)
        ? 12 : 8),
        &VAR_4->msi_data);
 return VAR_8;
}

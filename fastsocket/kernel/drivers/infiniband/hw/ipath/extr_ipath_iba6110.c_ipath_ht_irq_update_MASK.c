
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dummy; } ;
struct ipath_devdata {int ipath_intconfig; } ;
struct ht_irq_msg {int address_lo; scalar_t__ address_hi; } ;


 int FUNC_0 (struct ipath_devdata*) ;
 struct ipath_devdata* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0, int VAR_1,
    struct ht_irq_msg *VAR_2)
{
 struct ipath_devdata *VAR_3 = FUNC_1(VAR_0);
 u64 VAR_4 = VAR_3->ipath_intconfig;

 VAR_3->ipath_intconfig = VAR_2->address_lo;
 VAR_3->ipath_intconfig |= ((u64) VAR_2->address_hi) << 32;







 if (VAR_4)
  FUNC_0(VAR_3);
}

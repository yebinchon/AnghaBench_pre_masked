
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct whci_card {struct pci_dev* pci; } ;
struct pci_dev {scalar_t__ vendor; int device; int class; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,scalar_t__,int,int,unsigned int,unsigned long long,unsigned long long) ;

__attribute__((used)) static
u64 FUNC_2(struct whci_card *VAR_1, u64 VAR_2)
{
 u64 VAR_3 = VAR_2;
 struct pci_dev *VAR_4 = VAR_1->pci;
 if (VAR_4->vendor == VAR_0
     && (VAR_4->device == 0x0c3b || VAR_4->device == 0004)
     && VAR_4->class == 0x0d1010) {
  switch (FUNC_0(VAR_2)) {

  case 0x80:
   VAR_2 |= 0x40 << 8; break;


  case 0x02:
   VAR_2 &= ~0xffff;
   VAR_2 |= 0x2001;
   break;
  }
 }
 if (VAR_3 != VAR_2)
  FUNC_1(&VAR_4->dev,
    "PCI v%04x d%04x c%06x#%02x: "
    "corrected capdata from %016Lx to %016Lx\n",
    VAR_4->vendor, VAR_4->device, VAR_4->class,
    (unsigned)FUNC_0(VAR_2),
    (unsigned long long)VAR_3,
    (unsigned long long)VAR_2);
 return VAR_2;
}

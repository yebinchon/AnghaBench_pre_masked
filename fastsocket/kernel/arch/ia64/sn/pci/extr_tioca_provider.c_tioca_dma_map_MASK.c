
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pci_dev {unsigned long dma_mask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct pci_dev*,scalar_t__,size_t) ;

__attribute__((used)) static u64
FUNC_3(struct pci_dev *VAR_1, u64 VAR_2, size_t VAR_3, int VAR_4)
{
 u64 VAR_5;




 if (VAR_4 & VAR_0)
  return 0;







 if (VAR_1->dma_mask == ~0UL)
  VAR_5 = FUNC_1(VAR_2);
 else if (VAR_1->dma_mask == 0xffffffffffffUL)
  VAR_5 = FUNC_0(VAR_1, VAR_2);
 else
  VAR_5 = 0;



 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);

 return VAR_5;
}

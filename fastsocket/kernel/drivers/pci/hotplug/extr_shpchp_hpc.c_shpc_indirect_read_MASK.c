
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;
struct controller {struct pci_dev* pci_dev; scalar_t__ cap_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static inline int FUNC_2(struct controller *VAR_2, int VAR_3,
         u32 *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = VAR_2->cap_offset;
 struct pci_dev *VAR_7 = VAR_2->pci_dev;

 VAR_5 = FUNC_1(VAR_7, VAR_6 + VAR_1, VAR_3);
 if (VAR_5)
  return VAR_5;
 return FUNC_0(VAR_7, VAR_6 + VAR_0, VAR_4);
}

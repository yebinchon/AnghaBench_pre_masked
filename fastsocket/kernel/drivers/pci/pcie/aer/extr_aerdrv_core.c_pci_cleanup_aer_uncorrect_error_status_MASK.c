
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,scalar_t__) ;

int FUNC_3(struct pci_dev *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_4 + VAR_1, &VAR_5);
 if (VAR_5)
  FUNC_2(VAR_3, VAR_4 + VAR_1, VAR_5);

 return 0;
}

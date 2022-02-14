
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int) ;

int FUNC_5(struct pci_dev *VAR_4, int VAR_5, u32 *VAR_6)
{
 int VAR_7;

 *VAR_6 = 0;
 if (VAR_5 & 3)
  return -VAR_0;

 if (FUNC_4(VAR_4, VAR_5)) {
  VAR_7 = FUNC_3(VAR_4, FUNC_1(VAR_4) + VAR_5, VAR_6);





  if (VAR_7)
   *VAR_6 = 0;
  return VAR_7;
 }

 if (FUNC_0(VAR_4) && VAR_5 == VAR_1 &&
   FUNC_2(VAR_4) == VAR_3) {
  *VAR_6 = VAR_2;
 }

 return 0;
}

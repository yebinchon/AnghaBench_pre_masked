
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1)
{
 unsigned char VAR_2;

 FUNC_1(VAR_1, VAR_0 + 8, &VAR_2);
 if (VAR_2 & 0x20) {
  FUNC_0("In single channel mode.\n");
  return 1;
 } else {
  FUNC_0("In dual channel mode.\n");
  return 2;
 }
}

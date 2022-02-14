
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2)
{

 if ((VAR_2->device == VAR_0) ||
     (VAR_2->device == VAR_1)) {
  u8 VAR_3 = 0, VAR_4 = 0;

  FUNC_0(VAR_2, 0x49, &VAR_3);
  FUNC_1(VAR_2, 0x49, VAR_3 & ~0x30);

  FUNC_0(VAR_2, 0x4a, &VAR_4);
  FUNC_1(VAR_2, 0x4a, VAR_4 & ~0x01);

  FUNC_0(VAR_2, 0x4a, &VAR_4);
  FUNC_1(VAR_2, 0x4a, VAR_4 | 0x80);
 }

 return 0;
}

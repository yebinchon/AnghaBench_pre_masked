
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_5, VAR_6 + VAR_1, &VAR_7);
 VAR_7 &= ~(VAR_3 | VAR_2);
 FUNC_3(VAR_5, VAR_6 + VAR_1, VAR_7);

 return 0;
}

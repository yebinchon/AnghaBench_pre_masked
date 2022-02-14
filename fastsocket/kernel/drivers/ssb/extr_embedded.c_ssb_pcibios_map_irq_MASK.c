
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct pci_dev const*,int ,int ) ;

int FUNC_2(const struct pci_dev *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;




 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_5 >= 0)
  return VAR_5;







 return -VAR_0;
}

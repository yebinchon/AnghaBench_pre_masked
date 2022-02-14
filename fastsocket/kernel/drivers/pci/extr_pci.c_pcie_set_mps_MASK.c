
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*,int ,int ,int) ;
 int FUNC_3 (struct pci_dev*) ;

int FUNC_4(struct pci_dev *VAR_3, int VAR_4)
{
 u16 VAR_5;

 if (VAR_4 < 128 || VAR_4 > 4096 || !FUNC_1(VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4) - 8;
 if (VAR_5 > FUNC_3(VAR_3))
  return -VAR_0;
 VAR_5 <<= 5;

 return FUNC_2(VAR_3, VAR_1,
        VAR_2, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct pci_dev *VAR_4)
{
 u8 VAR_5;

 if (!VAR_3)
  return -VAR_0;



 FUNC_1(VAR_4, VAR_2, &VAR_5);
 if (VAR_5 >= VAR_3 &&
     (VAR_5 % VAR_3) == 0)
  return 0;


 FUNC_2(VAR_4, VAR_2, VAR_3);

 FUNC_1(VAR_4, VAR_2, &VAR_5);
 if (VAR_5 == VAR_3)
  return 0;

 FUNC_0(VAR_1, &VAR_4->dev, "cache line size of %d is not "
     "supported\n", VAR_3 << 2);

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct pci_dev *VAR_0, u64 VAR_1)
{
 int VAR_2 = FUNC_1(&VAR_0->dev, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_0(&VAR_0->dev, "using %dbit consistent DMA mask\n", FUNC_2(VAR_1));
 return 0;
}

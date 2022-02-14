
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_pci_chip {int pdev; } ;


 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct sdhci_pci_chip *VAR_0, int VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->pdev, 0xAE, &VAR_2);
 if (VAR_3)
  return VAR_3;





 if (VAR_1)
  VAR_2 |= 0x47;
 else
  VAR_2 &= ~0x47;

 VAR_3 = FUNC_1(VAR_0->pdev, 0xAE, VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}

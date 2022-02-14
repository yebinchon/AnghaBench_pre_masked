
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sdhci_pci_chip {TYPE_1__* pdev; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (TYPE_1__*,int ,int*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sdhci_pci_chip *VAR_7)
{
 int VAR_8;
 u8 VAR_9;

 switch (VAR_7->pdev->device) {
 case 131:
 case 130:
 case 129:
 case 128:

  VAR_8 = FUNC_0(VAR_7->pdev, VAR_5, &VAR_9);
  if (VAR_8)
   return VAR_8;
  VAR_9 &= 0x7f;
  FUNC_1(VAR_7->pdev, VAR_5, VAR_9);


  FUNC_1(VAR_7->pdev, VAR_6, 0x08);


  VAR_8 = FUNC_0(VAR_7->pdev, VAR_3, &VAR_9);
  if (VAR_8)
   return VAR_8;
  VAR_9 |= 0x20;
  FUNC_1(VAR_7->pdev, VAR_3, VAR_9);




  VAR_8 = FUNC_0(VAR_7->pdev, VAR_2, &VAR_9);
  if (VAR_8)
   return VAR_8;
  VAR_9 |= 0x01;
  FUNC_1(VAR_7->pdev, VAR_2, VAR_9);
  FUNC_1(VAR_7->pdev, VAR_2, 0x73);


  FUNC_1(VAR_7->pdev, VAR_0, 0x39);
  FUNC_1(VAR_7->pdev, VAR_1, 0x08);


  VAR_8 = FUNC_0(VAR_7->pdev, VAR_4, &VAR_9);
  if (VAR_8)
   return VAR_8;
  VAR_9 |= 0x08;
  FUNC_1(VAR_7->pdev, VAR_4, VAR_9);


  VAR_8 = FUNC_0(VAR_7->pdev, VAR_5, &VAR_9);
  if (VAR_8)
   return VAR_8;
  VAR_9 |= 0x80;
  FUNC_1(VAR_7->pdev, VAR_5, VAR_9);
 }

 return 0;
}

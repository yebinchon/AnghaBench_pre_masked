
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_7, int VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 u16 VAR_11;

 FUNC_2(VAR_7, VAR_1, &VAR_10);
 if (!(VAR_10 & VAR_2))
  return -VAR_0;

 if (VAR_8)
  return 0;


 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  if (VAR_9)
   FUNC_1((1 << (VAR_9 - 1)) * 100);

  FUNC_3(VAR_7, VAR_5, &VAR_11);
  if (!(VAR_11 & VAR_6))
   goto clear;
 }

 FUNC_0(&VAR_7->dev, "transaction is not cleared; "
   "proceeding with reset anyway\n");

clear:
 FUNC_4(VAR_7, VAR_3, VAR_4);

 FUNC_1(100);

 return 0;
}

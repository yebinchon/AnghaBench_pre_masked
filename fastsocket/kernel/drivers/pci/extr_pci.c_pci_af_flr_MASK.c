
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;
 u8 VAR_13;
 u8 VAR_14;

 VAR_12 = FUNC_2(VAR_9, VAR_8);
 if (!VAR_12)
  return -VAR_0;

 FUNC_3(VAR_9, VAR_12 + VAR_1, &VAR_13);
 if (!(VAR_13 & VAR_3) || !(VAR_13 & VAR_2))
  return -VAR_0;

 if (VAR_10)
  return 0;


 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  if (VAR_11)
   FUNC_1((1 << (VAR_11 - 1)) * 100);

  FUNC_3(VAR_9, VAR_12 + VAR_6, &VAR_14);
  if (!(VAR_14 & VAR_7))
   goto clear;
 }

 FUNC_0(&VAR_9->dev, "transaction is not cleared; "
   "proceeding with reset anyway\n");

clear:
 FUNC_4(VAR_9, VAR_12 + VAR_4, VAR_5);
 FUNC_1(100);

 return 0;
}

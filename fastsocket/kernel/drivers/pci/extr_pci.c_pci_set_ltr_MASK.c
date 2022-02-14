
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;

int FUNC_4(struct pci_dev *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 u16 VAR_16;

 if (!FUNC_2(VAR_9))
  return -VAR_2;

 VAR_14 = FUNC_0(&VAR_10);
 VAR_15 = FUNC_0(&VAR_11);

 if (VAR_10 > VAR_8 ||
     VAR_11 > VAR_8)
  return -VAR_0;

 if ((VAR_14 > (VAR_6 >> VAR_7)) ||
     (VAR_15 > (VAR_6 >> VAR_7)))
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_9, VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_16 = (VAR_14 << VAR_7) | VAR_10;
 VAR_13 = FUNC_3(VAR_9, VAR_12 + VAR_5, VAR_16);
 if (VAR_13 != 4)
  return -VAR_1;

 VAR_16 = (VAR_15 << VAR_7) | VAR_11;
 VAR_13 = FUNC_3(VAR_9, VAR_12 + VAR_4, VAR_16);
 if (VAR_13 != 4)
  return -VAR_1;

 return 0;
}

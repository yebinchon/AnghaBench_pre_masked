
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct amd8131_dev_info {struct pci_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct amd8131_dev_info *VAR_14)
{
 u32 VAR_15;
 struct pci_dev *VAR_16 = VAR_14->dev;


 FUNC_0(VAR_16, VAR_11, &VAR_15);
 if (VAR_15 & VAR_7)
  FUNC_1(VAR_16, VAR_11, VAR_15);


 FUNC_0(VAR_16, VAR_8, &VAR_15);
 if (VAR_15 & VAR_0)
  FUNC_1(VAR_16, VAR_8, VAR_15);


 FUNC_0(VAR_16, VAR_9, &VAR_15);
 if (VAR_15 & VAR_4)
  FUNC_1(VAR_16, VAR_9, VAR_15);


 FUNC_0(VAR_16, VAR_10, &VAR_15);
 if (VAR_15 & VAR_5)
  FUNC_1(VAR_16, VAR_10, VAR_15);







 FUNC_0(VAR_16, VAR_8, &VAR_15);
 VAR_15 |= VAR_2 | VAR_3 | VAR_1;
 FUNC_1(VAR_16, VAR_8, VAR_15);


 FUNC_0(VAR_16, VAR_12, &VAR_15);
 VAR_15 |= VAR_13;
 FUNC_1(VAR_16, VAR_12, VAR_15);


 FUNC_0(VAR_16, VAR_9, &VAR_15);
 VAR_15 |= VAR_6;
 FUNC_1(VAR_16, VAR_9, VAR_15);


 FUNC_0(VAR_16, VAR_10, &VAR_15);
 VAR_15 |= VAR_6;
 FUNC_1(VAR_16, VAR_10, VAR_15);
}

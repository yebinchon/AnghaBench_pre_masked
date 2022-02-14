
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct amd8111_pci_info {struct pci_dev* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct amd8111_pci_info *VAR_8)
{
 u32 VAR_9;
 struct pci_dev *VAR_10 = VAR_8->dev;

 if (VAR_7 == VAR_0) {

  FUNC_0(VAR_10, VAR_6, &VAR_9);
  VAR_9 &= ~VAR_3;
  FUNC_1(VAR_10, VAR_6, VAR_9);


  FUNC_0(VAR_10, VAR_4, &VAR_9);
  VAR_9 &= ~VAR_1;
  FUNC_1(VAR_10, VAR_4, VAR_9);


  FUNC_0(VAR_10, VAR_5, &VAR_9);
  VAR_9 &= ~VAR_2;
  FUNC_1(VAR_10, VAR_5, VAR_9);
 }
}

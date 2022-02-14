
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct AdapterControlBlock {int dev_id; int adapter_type; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct AdapterControlBlock *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->pdev;
 u16 VAR_6;
 FUNC_0(VAR_5, VAR_3, &VAR_6);
 VAR_4->dev_id = VAR_6;
 switch (VAR_6) {
 case 0x1880: {
  VAR_4->adapter_type = VAR_2;
  }
  break;
 case 0x1201: {
  VAR_4->adapter_type = VAR_1;
  }
  break;

 default: VAR_4->adapter_type = VAR_0;
 }
}

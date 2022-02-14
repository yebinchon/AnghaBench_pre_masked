
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int device; } ;
struct TYPE_3__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(ide_hwif_t *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_3->dev);
 u8 VAR_5 = 0, VAR_6 = VAR_3->channel ? 0x02 : 0x01;

 switch (VAR_4->device) {
 case 129:
 case 128:
   FUNC_0(VAR_4, VAR_2, &VAR_5);
  return (VAR_5 & VAR_6) ? VAR_1 : VAR_0;
 default:
  return VAR_0;
 }
}

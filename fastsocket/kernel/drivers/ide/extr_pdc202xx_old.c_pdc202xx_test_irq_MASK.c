
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(ide_hwif_t *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_2(VAR_0->dev);
 unsigned long VAR_2 = FUNC_1(VAR_1, 4);
 u8 VAR_3 = FUNC_0(VAR_2 + 0x1d);

 if (VAR_0->channel) {




  return ((VAR_3 & 0x50) == 0x40) ? 1 : 0;
 } else {




  return ((VAR_3 & 0x05) == 0x04) ? 1 : 0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(ide_drive_t *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_1(VAR_0->hwif->dev);
 u32 VAR_2 = 0;

 FUNC_0(VAR_1, 0x54, &VAR_2);

 return ((VAR_2 & 0x40000000) ? 0x70 : 0x40) + VAR_0->dn * 4;
}

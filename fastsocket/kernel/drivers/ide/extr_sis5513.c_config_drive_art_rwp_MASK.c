
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dn; scalar_t__ media; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_1->hwif;
 struct pci_dev *VAR_3 = FUNC_2(VAR_2->dev);
 u8 VAR_4 = 0;
 u8 VAR_5 = 0;

 FUNC_0(VAR_3, 0x4b, &VAR_4);

 VAR_5 = VAR_4 & ~(0x11 << VAR_1->dn);

 if (VAR_1->media == VAR_0)
  VAR_5 |= 0x11 << VAR_1->dn;

 if (VAR_4 != VAR_5)
  FUNC_1(VAR_3, 0x4b, VAR_5);
}

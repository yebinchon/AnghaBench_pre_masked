
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_7__ {int recovery; int assert; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_1, const u8 VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_1->hwif;
 struct pci_dev *VAR_4 = FUNC_1(VAR_3->dev);
 int VAR_5 = VAR_1->dn > 1 ? 1 : 0;


 FUNC_0(VAR_4, 0x62 + VAR_5,
  (VAR_0[VAR_2].recovery << 4) |
  (VAR_0[VAR_2].assert));





 FUNC_0(VAR_4, 0x64 + 4*VAR_5 + (VAR_1->dn&1),
  (VAR_0[VAR_2].recovery << 4) |
  (VAR_0[VAR_2].assert));

 FUNC_0(VAR_4, 0x66 + 4*VAR_5 + (VAR_1->dn&1),
  (VAR_0[VAR_2].recovery << 4) |
  (VAR_0[VAR_2].assert));
}

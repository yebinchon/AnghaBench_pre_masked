
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_8__ {int reg13; int reg0d; int reg0c; } ;


 int FUNC_0 (struct pci_dev*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,size_t,int ) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_1, const u8 VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_1->hwif;
 struct pci_dev *VAR_4 = FUNC_2(VAR_3->dev);
 u8 VAR_5 = (VAR_1->dn & 1) ? 0x08 : 0x00;

 if (FUNC_0(VAR_4) == 4) {
  FUNC_1(VAR_3, 0x0c + VAR_5, VAR_0[VAR_2].reg0c);
  FUNC_1(VAR_3, 0x0d + VAR_5, VAR_0[VAR_2].reg0d);
  FUNC_1(VAR_3, 0x13 + VAR_5, VAR_0[VAR_2].reg13);
 }
}

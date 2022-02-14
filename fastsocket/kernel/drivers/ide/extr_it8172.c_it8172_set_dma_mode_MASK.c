
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int,scalar_t__) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_2, const u8 VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_2->hwif;
 struct pci_dev *VAR_5 = FUNC_3(VAR_4->dev);
 int VAR_6 = 3 << (VAR_2->dn * 4);
 int VAR_7 = 1 << VAR_2->dn;
 int VAR_8 = 0;
 u8 VAR_9, VAR_10;

 FUNC_1(VAR_5, 0x48, &VAR_9);
 FUNC_1(VAR_5, 0x4a, &VAR_10);

 if (VAR_3 >= VAR_1) {
  u8 VAR_11 = VAR_3 - VAR_1;
  VAR_8 = VAR_11 << (VAR_2->dn * 4);

  FUNC_2(VAR_5, 0x48, VAR_9 | VAR_7);
  VAR_10 &= ~VAR_6;
  FUNC_2(VAR_5, 0x4a, VAR_10 | VAR_8);
 } else {
  const u8 VAR_12[] = { 0, 3, 4 };
  u8 VAR_13;

  FUNC_2(VAR_5, 0x48, VAR_9 & ~VAR_7);
  FUNC_2(VAR_5, 0x4a, VAR_10 & ~VAR_6);

  VAR_13 = VAR_12[VAR_3 - VAR_0];

  FUNC_0(VAR_2, VAR_13);
 }
}

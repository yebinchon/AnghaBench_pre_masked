
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_2, const u8 VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_2->hwif;
 struct pci_dev *VAR_5 = FUNC_3(VAR_4->dev);
 u8 VAR_6 = VAR_4->channel ? 0x42 : 0x40;
 int VAR_7 = 0, VAR_8 = 7 << (VAR_2->dn * 4);
 int VAR_9 = 0, VAR_10 = 1 << VAR_2->dn;
 u16 VAR_11, VAR_12, VAR_13, VAR_14;

 FUNC_0(VAR_5, VAR_6, &VAR_11);
 VAR_7 = (VAR_11 & 0x4000) ? 1 : 0;
 FUNC_0(VAR_5, 0x44, &VAR_12);
 FUNC_0(VAR_5, 0x48, &VAR_13);
 FUNC_0(VAR_5, 0x4a, &VAR_14);

 if (VAR_3 >= VAR_1) {
  VAR_9 = (VAR_3 - VAR_1) << (VAR_2->dn * 4);

  if (!(VAR_13 & VAR_10))
   FUNC_1(VAR_5, 0x48, VAR_13|VAR_10);
  if ((VAR_14 & VAR_8) != VAR_9) {
   FUNC_1(VAR_5, 0x4a, VAR_14 & ~VAR_8);
   FUNC_0(VAR_5, 0x4a, &VAR_14);
   FUNC_1(VAR_5, 0x4a, VAR_14|VAR_9);
  }
 } else {
  const u8 VAR_15[] = { 0, 3, 4 };
  u8 VAR_16;

  if (VAR_13 & VAR_10)
   FUNC_1(VAR_5, 0x48, VAR_13 & ~VAR_10);
  if (VAR_14 & VAR_8)
   FUNC_1(VAR_5, 0x4a, VAR_14 & ~VAR_8);

  if (VAR_3 >= VAR_0)
   VAR_16 = VAR_15[VAR_3 - VAR_0];
  else
   VAR_16 = 2;

  FUNC_2(VAR_2, VAR_16);
 }
}

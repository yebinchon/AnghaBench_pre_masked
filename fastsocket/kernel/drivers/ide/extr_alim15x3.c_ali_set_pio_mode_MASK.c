
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ide_timing {int setup; int active; int cycle; } ;
struct TYPE_4__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dn; scalar_t__ media; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ide_timing* FUNC_0 (int const) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(ide_drive_t *VAR_3, const u8 VAR_4)
{
 ide_hwif_t *VAR_5 = VAR_3->hwif;
 struct pci_dev *VAR_6 = FUNC_5(VAR_5->dev);
 struct ide_timing *VAR_7 = FUNC_0(VAR_0 + VAR_4);
 int VAR_8 = VAR_7->setup, VAR_9 = VAR_7->active, VAR_10 = VAR_7->cycle;
 u8 VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 int VAR_15 = VAR_2 ? VAR_2 : 33;
 int VAR_16 = VAR_5->channel ? 0x5c : 0x58;
 int VAR_17 = VAR_5->channel ? 0x55 : 0x54;
 u8 VAR_18 = 0, VAR_19 = VAR_3->dn & 1;

 if ((VAR_11 = (VAR_8 * VAR_15 + 999) / 1000) >= 8)
  VAR_11 = 0;
 if ((VAR_12 = (VAR_9 * VAR_15 + 999) / 1000) >= 8)
  VAR_12 = 0;

 if (!(VAR_13 = (VAR_10 * VAR_15 + 999) / 1000 - VAR_12 - VAR_11)) {
  VAR_13 = 1;
 } else {
  if (VAR_13 >= 16)
   VAR_13 = 0;
 }
 FUNC_2(VAR_14);




 FUNC_3(VAR_6, VAR_17, &VAR_18);
 if (VAR_3->media==VAR_1) {
  if (VAR_19) {
   FUNC_4(VAR_6, VAR_17, (VAR_18 & 0x0F) | 0x50);
  } else {
   FUNC_4(VAR_6, VAR_17, (VAR_18 & 0xF0) | 0x05);
  }
 } else {
  if (VAR_19) {
   FUNC_4(VAR_6, VAR_17, VAR_18 & 0x0F);
  } else {
   FUNC_4(VAR_6, VAR_17, VAR_18 & 0xF0);
  }
 }

 FUNC_4(VAR_6, VAR_16, VAR_11);
 FUNC_4(VAR_6, VAR_16 + VAR_19 + 2, (VAR_12 << 4) | VAR_13);
 FUNC_1(VAR_14);
}

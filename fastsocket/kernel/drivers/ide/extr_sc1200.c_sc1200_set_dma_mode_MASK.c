
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef unsigned int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (struct pci_dev*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct pci_dev*,unsigned int,unsigned int) ;
 unsigned short FUNC_2 () ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_2, const u8 VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_2->hwif;
 struct pci_dev *VAR_5 = FUNC_3(VAR_4->dev);
 unsigned int VAR_6, VAR_7;
 unsigned short VAR_8;
 unsigned int VAR_9 = VAR_4->channel ? 0x50 : 0x40;

 static const u32 VAR_10[3][3] = {
  { 0x00921250, 0x00911140, 0x00911030 },
  { 0x00932470, 0x00922260, 0x00922140 },
  { 0x009436a1, 0x00933481, 0x00923261 },
 };

 static const u32 VAR_11[3][3] = {
  { 0x00077771, 0x00012121, 0x00002020 },
  { 0x000bbbb2, 0x00024241, 0x00013131 },
  { 0x000ffff3, 0x00035352, 0x00015151 },
 };

 VAR_8 = FUNC_2();






 if (VAR_3 >= VAR_1)
  VAR_7 = VAR_10[VAR_8][VAR_3 - VAR_1];
 else
  VAR_7 = VAR_11[VAR_8][VAR_3 - VAR_0];

 if ((VAR_2->dn & 1) == 0) {
  FUNC_0(VAR_5, VAR_9 + 4, &VAR_6);
  VAR_7 |= VAR_6 & 0x80000000;
  FUNC_1(VAR_5, VAR_9 + 4, VAR_7);
 } else
  FUNC_1(VAR_5, VAR_9 + 12, VAR_7);
}

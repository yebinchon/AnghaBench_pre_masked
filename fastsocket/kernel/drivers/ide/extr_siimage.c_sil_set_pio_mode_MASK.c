
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_10__ {int host_flags; scalar_t__ channel; scalar_t__ hwif_data; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_11__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 unsigned long FUNC_3 (TYPE_2__*,int) ;
 unsigned long FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct pci_dev*,unsigned long) ;
 scalar_t__ FUNC_6 (struct pci_dev*,scalar_t__) ;
 int FUNC_7 (struct pci_dev*,int,unsigned long) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,scalar_t__) ;
 struct pci_dev* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(ide_drive_t *VAR_1, u8 VAR_2)
{
 static const u16 VAR_3[] = { 0x328a, 0x2283, 0x1281, 0x10c3, 0x10c1 };
 static const u16 VAR_4[] = { 0x328a, 0x2283, 0x1104, 0x10c3, 0x10c1 };

 ide_hwif_t *VAR_5 = VAR_1->hwif;
 struct pci_dev *VAR_6 = FUNC_9(VAR_5->dev);
 ide_drive_t *VAR_7 = FUNC_1(VAR_1);
 u32 VAR_8 = 0;
 u16 VAR_9 = 0;
 unsigned long VAR_10 = FUNC_3(VAR_1, 0x04);
 unsigned long VAR_11 = FUNC_4(VAR_5, 0x02);
 unsigned long VAR_12 = (unsigned long)VAR_5->hwif_data;
 u8 VAR_13 = VAR_2;
 u8 VAR_14 = (VAR_5->host_flags & VAR_0) ? 1 : 0;
 u8 VAR_15 = VAR_5->channel ? (VAR_14 ? 0xF4 : 0x84)
      : (VAR_14 ? 0xB4 : 0x80);
 u8 VAR_16 = 0;
 u8 VAR_17 = VAR_1->dn & 1;


 if (VAR_7) {
  u8 VAR_18 = FUNC_0(VAR_7, 255, 4);

  if (VAR_18 < VAR_13)
   VAR_13 = VAR_18;
 }


 VAR_9 = VAR_4[VAR_2];
 VAR_8 = VAR_3[VAR_13];

 FUNC_7(VAR_6, VAR_9, VAR_10);
 FUNC_7(VAR_6, VAR_8, VAR_11);


 VAR_9 = FUNC_5(VAR_6, VAR_11 - 2);
 VAR_9 &= ~0x200;

 VAR_16 = FUNC_6(VAR_6, VAR_12 + VAR_15);
 VAR_16 &= ~(VAR_17 ? 0x30 : 0x03);

 if (FUNC_2(VAR_1, VAR_2)) {
  VAR_9 |= 0x200;
  VAR_16 |= VAR_17 ? 0x10 : 0x01;
 }

 FUNC_7(VAR_6, VAR_9, VAR_11 - 2);
 FUNC_8(VAR_6, VAR_16, VAR_12 + VAR_15);
}

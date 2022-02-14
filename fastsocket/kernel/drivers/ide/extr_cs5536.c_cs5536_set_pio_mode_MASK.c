
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_11__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int const) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,void*) ;
 int FUNC_7 (int const,int ) ;
 struct pci_dev* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(ide_drive_t *VAR_7, const u8 VAR_8)
{
 static const u8 VAR_9[5] = {
  0x98, 0x55, 0x32, 0x21, 0x20,
 };

 static const u8 VAR_10[5] = {
  0x2, 0x1, 0x0, 0x0, 0x0,
 };

 static const u8 VAR_11[5] = {
  0x99, 0x92, 0x90, 0x22, 0x20,
 };

 struct pci_dev *VAR_12 = FUNC_8(VAR_7->hwif->dev);
 ide_drive_t *VAR_13 = FUNC_5(VAR_7);
 int VAR_14 = (VAR_7->dn & 1) ? VAR_4 : VAR_3;
 unsigned long VAR_15 = (unsigned long)FUNC_4(VAR_7);
 u32 VAR_16;
 u8 VAR_17 = VAR_8;

 if (VAR_13)
  VAR_17 = FUNC_7(VAR_8, FUNC_3(VAR_13, 255, 4));

 VAR_15 &= (VAR_6 << 8);
 VAR_15 |= VAR_9[VAR_8];
 FUNC_6(VAR_7, (void *)VAR_15);

 FUNC_0(VAR_7, VAR_9[VAR_8]);

 FUNC_1(VAR_12, VAR_0, &VAR_16);

 VAR_16 &= ~(VAR_5 << VAR_14);
 VAR_16 |= VAR_10[VAR_8] << VAR_14;

 VAR_16 &= ~(VAR_1 << VAR_2);
 VAR_16 |= VAR_11[VAR_17] << VAR_2;

 FUNC_2(VAR_12, VAR_0, VAR_16);
}

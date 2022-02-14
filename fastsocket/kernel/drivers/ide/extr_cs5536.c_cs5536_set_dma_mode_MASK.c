
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_7__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,void*) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ide_drive_t *VAR_7, const u8 VAR_8)
{
 static const u8 VAR_9[6] = {
  0xc2, 0xc1, 0xc0, 0xc4, 0xc5, 0xc6,
 };

 static const u8 VAR_10[3] = {
  0x67, 0x21, 0x20,
 };

 struct pci_dev *VAR_11 = FUNC_4(VAR_7->hwif->dev);
 int VAR_12 = (VAR_7->dn & 1) ? VAR_2 : VAR_1;
 unsigned long VAR_13 = (unsigned long)FUNC_2(VAR_7);
 u32 VAR_14;

 FUNC_0(VAR_11, VAR_0, &VAR_14);

 if (VAR_8 >= VAR_6) {
  VAR_14 &= ~(VAR_3 << VAR_12);
  VAR_14 |= VAR_9[VAR_8 - VAR_6] << VAR_12;
 } else {
  VAR_14 &= ~(VAR_4 << VAR_12);
  VAR_13 &= VAR_3;
  VAR_13 |= VAR_10[VAR_8 - VAR_5] << 8;
  FUNC_3(VAR_7, (void *)VAR_13);
 }

 FUNC_1(VAR_11, VAR_0, VAR_14);
}

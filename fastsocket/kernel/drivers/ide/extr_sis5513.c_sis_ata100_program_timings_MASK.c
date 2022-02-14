
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int dev; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_2, const u8 VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->hwif->dev);
 u8 VAR_5, VAR_6 = 0x40 + VAR_2->dn * 2;


 const u8 VAR_7[] = { 0x00, 0x67, 0x44, 0x33, 0x31 };
 const u8 VAR_8[] = { 0x08, 0x32, 0x31 };

 if (VAR_3 >= VAR_0) {
  u8 VAR_9 = 0;

  FUNC_0(VAR_4, VAR_6, &VAR_9);
  VAR_9 &= ~0x80;
  FUNC_1(VAR_4, VAR_6, VAR_9);

  VAR_5 = VAR_8[VAR_3 - VAR_0];
 } else
  VAR_5 = VAR_7[VAR_3 - VAR_1];

 FUNC_1(VAR_4, VAR_6 + 1, VAR_5);
}

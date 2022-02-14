
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_4, const u8 VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_2(VAR_4->hwif->dev);
 u16 VAR_7 = 0;
 u8 VAR_8 = 0x40 + VAR_4->dn * 2;

 const u16 VAR_9[] = { 0x000, 0x607, 0x404, 0x303, 0x301 };
 const u16 VAR_10[] = { 0x008, 0x302, 0x301 };

 FUNC_0(VAR_6, VAR_8, &VAR_7);


 VAR_7 &= ~0x070f;
 if (VAR_5 >= VAR_1) {
  if (VAR_3 > VAR_0)
   VAR_7 &= ~0x8000;
  VAR_7 |= VAR_10[VAR_5 - VAR_1];
 } else
  VAR_7 |= VAR_9[VAR_5 - VAR_2];

 FUNC_1(VAR_6, VAR_8, VAR_7);
}

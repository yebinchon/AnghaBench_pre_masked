
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {size_t dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int const,int const) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ide_drive_t *VAR_0, const u8 VAR_1)
{
 static const u8 VAR_2[] = { 0x5d, 0x47, 0x34, 0x22, 0x20 };
 static const u8 VAR_3[] = { 0x41, 0x40, 0x43, 0x42 };

 struct pci_dev *VAR_4 = FUNC_4(VAR_0->hwif->dev);

 FUNC_1(VAR_4, VAR_3[VAR_0->dn], VAR_2[VAR_1]);

 if (FUNC_3(VAR_4)) {
  u16 VAR_5 = 0;

  FUNC_0(VAR_4, 0x4a, &VAR_5);

  VAR_5 &= ~(0x0f << (4 * VAR_0->dn));
  VAR_5 |= (VAR_1 << (4 * VAR_0->dn));

  FUNC_2(VAR_4, 0x4a, VAR_5);
 }
}

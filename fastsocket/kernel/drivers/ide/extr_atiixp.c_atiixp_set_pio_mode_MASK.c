
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_7__ {int recover_width; int command_width; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 TYPE_3__* VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(ide_drive_t *VAR_4, const u8 VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_6(VAR_4->hwif->dev);
 unsigned long VAR_7;
 int VAR_8 = (VAR_4->dn ^ 1) * 8;
 u32 VAR_9;
 u16 VAR_10;

 FUNC_4(&VAR_2, VAR_7);

 FUNC_1(VAR_6, VAR_0, &VAR_10);
 VAR_10 &= ~(0x07 << (VAR_4->dn * 4));
 VAR_10 |= (VAR_5 << (VAR_4->dn * 4));
 FUNC_3(VAR_6, VAR_0, VAR_10);

 FUNC_0(VAR_6, VAR_1, &VAR_9);
 VAR_9 &= ~(0xff << VAR_8);
 VAR_9 |= (VAR_3[VAR_5].recover_width << VAR_8) |
   (VAR_3[VAR_5].command_width << (VAR_8 + 4));
 FUNC_2(VAR_6, VAR_1, VAR_9);

 FUNC_5(&VAR_2, VAR_7);
}

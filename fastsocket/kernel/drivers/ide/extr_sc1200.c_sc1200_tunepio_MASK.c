
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (struct pci_dev*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct pci_dev*,unsigned int,int ) ;
 scalar_t__ FUNC_2 () ;
 int ** VAR_0 ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_1, u8 VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_1->hwif;
 struct pci_dev *VAR_4 = FUNC_3(VAR_3->dev);
 unsigned int VAR_5 = VAR_3->channel ? 0x50 : 0x40, VAR_6 = 0;

 FUNC_0(VAR_4, VAR_5 + 4, &VAR_6);
 VAR_6 = (VAR_6 >> 31) & 1;
 if (VAR_6)
  VAR_6 += FUNC_2();
 FUNC_1(VAR_4, VAR_5 + ((VAR_1->dn & 1) << 3),
          VAR_0[VAR_6][VAR_2]);
}

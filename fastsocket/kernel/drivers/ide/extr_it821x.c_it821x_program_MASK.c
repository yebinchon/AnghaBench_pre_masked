
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct it821x_dev {scalar_t__ clock_mode; } ;
struct TYPE_5__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 struct it821x_dev* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_1, u16 VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_1->hwif;
 struct pci_dev *VAR_4 = FUNC_2(VAR_3->dev);
 struct it821x_dev *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = VAR_3->channel;
 u8 VAR_7;


 if(VAR_5->clock_mode == VAR_0)
  VAR_7 = VAR_2 >> 8;
 else
  VAR_7 = VAR_2 & 0xFF;

 FUNC_1(VAR_4, 0x54 + 4 * VAR_6, VAR_7);
}

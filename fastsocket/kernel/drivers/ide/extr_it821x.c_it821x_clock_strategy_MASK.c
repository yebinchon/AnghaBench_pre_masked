
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct it821x_dev {int** want; int clock_mode; scalar_t__* udma; int * pio; } ;
struct TYPE_9__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_10__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct it821x_dev* FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(ide_drive_t *VAR_4)
{
 ide_hwif_t *VAR_5 = VAR_4->hwif;
 struct pci_dev *VAR_6 = FUNC_6(VAR_5->dev);
 struct it821x_dev *VAR_7 = FUNC_0(VAR_5);
 ide_drive_t *VAR_8 = FUNC_1(VAR_4);
 int VAR_9, VAR_10, VAR_11 = 0;
 u8 VAR_12 = VAR_4->dn & 1, VAR_13;

 if(VAR_7->want[0][0] > VAR_7->want[1][0]) {
  VAR_9 = VAR_7->want[0][1];
  VAR_10 = VAR_7->want[1][1];
 } else {
  VAR_9 = VAR_7->want[1][1];
  VAR_10 = VAR_7->want[0][1];
 }





 if (VAR_9 == VAR_2)
  VAR_9 = VAR_10;


 if(VAR_9 == VAR_2)
  return;

 if(VAR_9 == VAR_7->clock_mode)
  return;


 if(VAR_9 == VAR_1)
  VAR_7->clock_mode = VAR_1;
 else {
  VAR_7->clock_mode = VAR_0;
  VAR_11 = 1;
 }

 FUNC_4(VAR_6, 0x50, &VAR_13);
 VAR_13 &= ~(1 << (1 + VAR_5->channel));
 VAR_13 |= VAR_11 << (1 + VAR_5->channel);
 FUNC_5(VAR_6, 0x50, VAR_13);





 if(VAR_8 && VAR_7->udma[1-VAR_12] != VAR_3) {
  FUNC_3(VAR_8, VAR_7->udma[1-VAR_12]);
  FUNC_2(VAR_8, VAR_7->pio[1-VAR_12]);
 }




 if(VAR_7->udma[VAR_12] != VAR_3) {
  FUNC_3(VAR_4, VAR_7->udma[VAR_12]);
  FUNC_2(VAR_4, VAR_7->pio[VAR_12]);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_timing {scalar_t__ udma; scalar_t__ recover; scalar_t__ active; scalar_t__ rec8b; scalar_t__ act8b; scalar_t__ setup; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct ata_device* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,int,struct ata_timing*,unsigned long,unsigned long) ;
 int FUNC_2 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int ) ;
 int FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ata_port *VAR_1, struct ata_device *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_6(VAR_1->host->dev);
 struct ata_device *VAR_8 = FUNC_0(VAR_2);
 struct ata_timing VAR_9, VAR_10;
 static int VAR_11 = 33333;
 unsigned long VAR_12 = 1000000000 / VAR_11;
 unsigned long VAR_13 = VAR_12/VAR_4;
 int VAR_14;
 int VAR_15 = 3 - (2*VAR_1->port_no) - VAR_2->devno;


 FUNC_1(VAR_2, VAR_3, &VAR_9, VAR_12, VAR_13);


 if (VAR_8) {
  if (VAR_8->pio_mode) {
   FUNC_1(VAR_8, VAR_8->pio_mode, &VAR_10, VAR_12, VAR_13);
   FUNC_2(&VAR_10, &VAR_9, &VAR_9, VAR_0);
  }
 }


 if (VAR_5) {
  u8 VAR_16;
  int VAR_17 = 2 * VAR_15;

  FUNC_4(VAR_7, 0x4C, &VAR_16);
  VAR_16 &= ~(3 << VAR_17);
  VAR_16 |= FUNC_3(VAR_9.setup, 1, 4) << VAR_17;
  FUNC_5(VAR_7, 0x4C, VAR_16);
 }


 FUNC_5(VAR_7, 0x4F - VAR_1->port_no,
  ((FUNC_3(VAR_9.act8b, 1, 16) - 1) << 4) | (FUNC_3(VAR_9.rec8b, 1, 16) - 1));
 FUNC_5(VAR_7, 0x48 + VAR_15,
  ((FUNC_3(VAR_9.active, 1, 16) - 1) << 4) | (FUNC_3(VAR_9.recover, 1, 16) - 1));


 switch(VAR_6) {
  default:


  case 33:
   VAR_14 = VAR_9.udma ? (0xe0 | (FUNC_3(VAR_9.udma, 2, 5) - 2)) : 0x03;
   break;
  case 66:
   VAR_14 = VAR_9.udma ? (0xe8 | (FUNC_3(VAR_9.udma, 2, 9) - 2)) : 0x0f;
   break;
  case 100:
   VAR_14 = VAR_9.udma ? (0xe0 | (FUNC_3(VAR_9.udma, 2, 9) - 2)) : 0x07;
   break;
  case 133:
   VAR_14 = VAR_9.udma ? (0xe0 | (FUNC_3(VAR_9.udma, 2, 9) - 2)) : 0x07;
   break;
 }


 if (VAR_6 && VAR_9.udma) {
  u8 VAR_18;


  FUNC_4(VAR_7, 0x50 + VAR_15, &VAR_18);
  VAR_18 &= 0x10;

  FUNC_5(VAR_7, 0x50 + VAR_15, VAR_14 | VAR_18);
 }
}

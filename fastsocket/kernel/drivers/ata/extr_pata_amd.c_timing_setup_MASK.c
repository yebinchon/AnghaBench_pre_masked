
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct ata_timing {int udma; int setup; int act8b; int rec8b; int active; int recover; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; int dma_mode; int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ata_device* FUNC_0 (struct ata_device*) ;
 scalar_t__ FUNC_1 (struct ata_device*,int,struct ata_timing*,int,int) ;
 int FUNC_2 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int ) ;
 size_t FUNC_3 (int,int,int) ;
 int FUNC_4 (int ,int *,char*,int) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ata_port *VAR_4, struct ata_device *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 static const unsigned char VAR_9[] = {
  6, 6, 5, 4, 0, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 7
 };

 struct pci_dev *VAR_10 = FUNC_7(VAR_4->host->dev);
 struct ata_device *VAR_11 = FUNC_0(VAR_5);
 int VAR_12 = VAR_4->port_no * 2 + VAR_5->devno;
 struct ata_timing VAR_13, VAR_14;
 int VAR_15, VAR_16;
 const int VAR_17 = 33333;
 u8 VAR_18;

 VAR_15 = 1000000000 / VAR_17;
 VAR_16 = VAR_15;
 if (VAR_8 >= 2)
  VAR_16 = VAR_15 / 2;

 if (FUNC_1(VAR_5, VAR_7, &VAR_13, VAR_15, VAR_16) < 0) {
  FUNC_4(VAR_1, &VAR_10->dev, "unknown mode %d.\n", VAR_7);
  return;
 }

 if (VAR_11) {

  if (VAR_11->dma_mode) {
   FUNC_1(VAR_11, VAR_11->dma_mode, &VAR_14, VAR_15, VAR_16);
   FUNC_2(&VAR_14, &VAR_13, &VAR_13, VAR_0);
  }
  FUNC_1(VAR_11, VAR_11->pio_mode, &VAR_14, VAR_15, VAR_16);
  FUNC_2(&VAR_14, &VAR_13, &VAR_13, VAR_0);
 }

 if (VAR_7 == VAR_2 && VAR_17 <= 33333) VAR_13.udma = 1;
 if (VAR_7 == VAR_3 && VAR_17 <= 33333) VAR_13.udma = 15;






 FUNC_5(VAR_10, VAR_6 + 0x0C, &VAR_18);
 VAR_18 = (VAR_18 & ~(3 << ((3 - VAR_12) << 1))) | ((FUNC_3(VAR_13.setup, 1, 4) - 1) << ((3 - VAR_12) << 1));
 FUNC_6(VAR_10, VAR_6 + 0x0C , VAR_18);


 FUNC_6(VAR_10, VAR_6 + 0x0E + (1 - (VAR_12 >> 1)),
  ((FUNC_3(VAR_13.act8b, 1, 16) - 1) << 4) | (FUNC_3(VAR_13.rec8b, 1, 16) - 1));


 FUNC_6(VAR_10, VAR_6 + 0x08 + (3 - VAR_12),
  ((FUNC_3(VAR_13.active, 1, 16) - 1) << 4) | (FUNC_3(VAR_13.recover, 1, 16) - 1));

 switch (VAR_8) {
  case 1:
  VAR_18 = VAR_13.udma ? (0xc0 | (FUNC_3(VAR_13.udma, 2, 5) - 2)) : 0x03;
  break;

  case 2:
  VAR_18 = VAR_13.udma ? (0xc0 | VAR_9[FUNC_3(VAR_13.udma, 2, 10)]) : 0x03;
  break;

  case 3:
  VAR_18 = VAR_13.udma ? (0xc0 | VAR_9[FUNC_3(VAR_13.udma, 1, 10)]) : 0x03;
  break;

  case 4:
  VAR_18 = VAR_13.udma ? (0xc0 | VAR_9[FUNC_3(VAR_13.udma, 1, 15)]) : 0x03;
  break;

  default:
   return;
 }


 if (VAR_13.udma)
  FUNC_6(VAR_10, VAR_6 + 0x10 + (3 - VAR_12), VAR_18);
}

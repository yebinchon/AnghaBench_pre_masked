
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {scalar_t__ dma_mode; int devno; unsigned int const pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,scalar_t__) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 (struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_5(VAR_2->host->dev);
 u16 VAR_5;
 u8 VAR_6 = VAR_3->dma_mode;
 int VAR_7 = VAR_3->devno;
 u8 VAR_8;

 static const
 u8 VAR_9[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 FUNC_2(VAR_4, 0x40, &VAR_5);
 FUNC_1(VAR_4, 0x48, &VAR_8);

 if (VAR_6 >= VAR_1) {
  unsigned int VAR_10 = VAR_3->dma_mode - VAR_1;
  u16 VAR_11;
  u16 VAR_12;
  int VAR_13, VAR_14;


  VAR_14 = FUNC_0(2 - (VAR_10 & 1), VAR_10);
  if (VAR_10 == 5)
   VAR_13 = 0x1000;
  else if (VAR_10 > 2)
   VAR_13 = 1;
  else
   VAR_13 = 0;

  VAR_8 |= (1 << VAR_7);


  FUNC_2(VAR_4, 0x4A, &VAR_11);
  VAR_11 &= ~(3 << (4 * VAR_7));
  VAR_11 |= (VAR_10 & 3) << (4 * VAR_7);
  FUNC_4(VAR_4, 0x4A, VAR_11);


  FUNC_2(VAR_4, 0x54, &VAR_12);
  VAR_12 &= ~(0x1001 << VAR_7);
  VAR_12 |= VAR_13 << VAR_7;
  FUNC_4(VAR_4, 0x54, VAR_12);
 } else {





  unsigned int VAR_15 = VAR_3->dma_mode - VAR_0;
  unsigned int VAR_16;
  u8 VAR_17;
  static const unsigned int VAR_18[3] = {
   130, 129, 128
  };
  int VAR_19 = VAR_18[VAR_15] - 130;

  VAR_16 = 3;




  if (VAR_3->pio_mode < VAR_18[VAR_15])

   VAR_16 |= 8;

  if (VAR_7) {
   VAR_5 &= 0xFF4F;
   VAR_5 |= VAR_16 << 4;
   FUNC_1(VAR_4, 0x44, &VAR_17);
   VAR_17 &= (0x0F + 0xE1 * VAR_2->port_no);

   VAR_17 |= ((VAR_9[VAR_19][0] << 2) | VAR_9[VAR_19][1]) << (VAR_2->port_no ? 4 : 0);
   FUNC_3(VAR_4, 0x44, VAR_17);
  } else {
   VAR_5 &= 0xCCF4;

   VAR_5 |= VAR_16;
   VAR_5 |=
    (VAR_9[VAR_19][0] << 12) |
    (VAR_9[VAR_19][1] << 8);
  }
  VAR_8 &= ~(1 << VAR_7);
  FUNC_4(VAR_4, 0x40, VAR_5);
 }
 FUNC_3(VAR_4, 0x48, VAR_8);
}

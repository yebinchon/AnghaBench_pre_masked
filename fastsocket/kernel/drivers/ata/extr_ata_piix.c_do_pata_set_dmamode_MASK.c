
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; scalar_t__ udma_mask; TYPE_1__* host; } ;
struct ata_device {scalar_t__ dma_mode; int devno; unsigned int const pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,scalar_t__) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;
 int VAR_5 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ata_port *VAR_6, struct ata_device *VAR_7, int VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_7(VAR_6->host->dev);
 unsigned long VAR_10;
 u8 VAR_11 = VAR_6->port_no ? 0x42 : 0x40;
 u16 VAR_12;
 u8 VAR_13 = VAR_7->dma_mode;
 int VAR_14 = VAR_7->devno + 2 * VAR_6->port_no;
 u8 VAR_15 = 0;

 static const
 u8 VAR_16[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 FUNC_5(&VAR_5, VAR_10);

 FUNC_2(VAR_9, VAR_11, &VAR_12);
 if (VAR_6->udma_mask)
  FUNC_1(VAR_9, 0x48, &VAR_15);

 if (VAR_13 >= VAR_4) {
  unsigned int VAR_17 = VAR_7->dma_mode - VAR_4;
  u16 VAR_18;
  u16 VAR_19;
  int VAR_20, VAR_21;
  VAR_21 = FUNC_0(2 - (VAR_17 & 1), VAR_17);
  if (VAR_17 == 5)
   VAR_20 = 0x1000;
  else if (VAR_17 > 2)
   VAR_20 = 1;
  else
   VAR_20 = 0;

  VAR_15 |= (1 << VAR_14);


  FUNC_2(VAR_9, 0x4A, &VAR_18);
  VAR_18 &= ~(3 << (4 * VAR_14));
  VAR_18 |= VAR_21 << (4 * VAR_14);
  FUNC_4(VAR_9, 0x4A, VAR_18);

  if (VAR_8) {

   FUNC_2(VAR_9, 0x54, &VAR_19);
   VAR_19 &= ~(0x1001 << VAR_14);
   VAR_19 |= VAR_20 << VAR_14;


   FUNC_4(VAR_9, 0x54, VAR_19);
  }
 } else {





  unsigned int VAR_22 = VAR_7->dma_mode - VAR_0;
  unsigned int VAR_23;
  u8 VAR_24;
  const unsigned int VAR_25[3] = {
   VAR_1, VAR_2, VAR_3
  };
  int VAR_26 = VAR_25[VAR_22] - VAR_1;

  VAR_23 = 3;




  if (VAR_7->pio_mode < VAR_25[VAR_22])

   VAR_23 |= 8;

  if (VAR_7->devno) {
   VAR_12 &= 0xFF4F;
   VAR_12 |= VAR_23 << 4;
   FUNC_1(VAR_9, 0x44, &VAR_24);
   VAR_24 &= (VAR_6->port_no ? 0x0f : 0xf0);

   VAR_24 |= ((VAR_16[VAR_26][0] << 2) | VAR_16[VAR_26][1]) << (VAR_6->port_no ? 4 : 0);
   FUNC_3(VAR_9, 0x44, VAR_24);
  } else {
   VAR_12 &= 0xCCF4;

   VAR_12 |= VAR_23;
   VAR_12 |=
    (VAR_16[VAR_26][0] << 12) |
    (VAR_16[VAR_26][1] << 8);
  }

  if (VAR_6->udma_mask)
   VAR_15 &= ~(1 << VAR_14);

  FUNC_4(VAR_9, VAR_11, VAR_12);
 }

 if (VAR_6->udma_mask)
  FUNC_3(VAR_9, 0x48, VAR_15);

 FUNC_6(&VAR_5, VAR_10);
}

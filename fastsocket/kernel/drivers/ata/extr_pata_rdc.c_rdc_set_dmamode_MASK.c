
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
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,scalar_t__) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_5, struct ata_device *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_5(VAR_5->host->dev);
 u8 VAR_8 = VAR_5->port_no ? 0x42 : 0x40;
 u16 VAR_9;
 u8 VAR_10 = VAR_6->dma_mode;
 int VAR_11 = VAR_6->devno + 2 * VAR_5->port_no;
 u8 VAR_12 = 0;

 static const
 u8 VAR_13[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 FUNC_2(VAR_7, VAR_8, &VAR_9);
 FUNC_1(VAR_7, 0x48, &VAR_12);

 if (VAR_10 >= VAR_4) {
  unsigned int VAR_14 = VAR_6->dma_mode - VAR_4;
  u16 VAR_15;
  u16 VAR_16;
  int VAR_17, VAR_18;
  VAR_18 = FUNC_0(2 - (VAR_14 & 1), VAR_14);
  if (VAR_14 == 5)
   VAR_17 = 0x1000;
  else if (VAR_14 > 2)
   VAR_17 = 1;
  else
   VAR_17 = 0;

  VAR_12 |= (1 << VAR_11);


  FUNC_2(VAR_7, 0x4A, &VAR_15);
  VAR_15 &= ~(3 << (4 * VAR_11));
  VAR_15 |= VAR_18 << (4 * VAR_11);
  FUNC_4(VAR_7, 0x4A, VAR_15);


  FUNC_2(VAR_7, 0x54, &VAR_16);
  VAR_16 &= ~(0x1001 << VAR_11);
  VAR_16 |= VAR_17 << VAR_11;
  FUNC_4(VAR_7, 0x54, VAR_16);
 } else {





  unsigned int VAR_19 = VAR_6->dma_mode - VAR_0;
  unsigned int VAR_20;
  u8 VAR_21;
  const unsigned int VAR_22[3] = {
   VAR_1, VAR_2, VAR_3
  };
  int VAR_23 = VAR_22[VAR_19] - VAR_1;

  VAR_20 = 3;




  if (VAR_6->pio_mode < VAR_22[VAR_19])

   VAR_20 |= 8;

  if (VAR_6->devno) {
   VAR_9 &= 0xFF4F;
   VAR_9 |= VAR_20 << 4;
   FUNC_1(VAR_7, 0x44, &VAR_21);
   VAR_21 &= (VAR_5->port_no ? 0x0f : 0xf0);

   VAR_21 |= ((VAR_13[VAR_23][0] << 2) | VAR_13[VAR_23][1]) << (VAR_5->port_no ? 4 : 0);
   FUNC_3(VAR_7, 0x44, VAR_21);
  } else {
   VAR_9 &= 0xCCF4;

   VAR_9 |= VAR_20;
   VAR_9 |=
    (VAR_13[VAR_23][0] << 12) |
    (VAR_13[VAR_23][1] << 8);
  }

  VAR_12 &= ~(1 << VAR_11);
  FUNC_4(VAR_7, VAR_8, VAR_9);
 }
 FUNC_3(VAR_7, 0x48, VAR_12);
}

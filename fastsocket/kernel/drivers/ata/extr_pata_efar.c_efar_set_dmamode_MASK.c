
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
 int FUNC_0 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,scalar_t__) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (struct ata_port *VAR_5, struct ata_device *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_4(VAR_5->host->dev);
 u8 VAR_8 = VAR_5->port_no ? 0x42 : 0x40;
 u16 VAR_9;
 u8 VAR_10 = VAR_6->dma_mode;
 int VAR_11 = VAR_6->devno + 2 * VAR_5->port_no;
 u8 VAR_12;

 static const
 u8 VAR_13[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 FUNC_1(VAR_7, VAR_8, &VAR_9);
 FUNC_0(VAR_7, 0x48, &VAR_12);

 if (VAR_10 >= VAR_4) {
  unsigned int VAR_14 = VAR_6->dma_mode - VAR_4;
  u16 VAR_15;

  VAR_12 |= (1 << VAR_11);


  FUNC_1(VAR_7, 0x4A, &VAR_15);
  VAR_15 &= ~(7 << (4 * VAR_11));
  VAR_15 |= VAR_14 << (4 * VAR_11);
  FUNC_3(VAR_7, 0x4A, VAR_15);
 } else {





  unsigned int VAR_16 = VAR_6->dma_mode - VAR_0;
  unsigned int VAR_17;
  u8 VAR_18;
  const unsigned int VAR_19[3] = {
   VAR_1, VAR_2, VAR_3
  };
  int VAR_20 = VAR_19[VAR_16] - VAR_1;

  VAR_17 = 3;




  if (VAR_6->pio_mode < VAR_19[VAR_16])

   VAR_17 |= 8;

  if (VAR_6->devno) {
   VAR_9 &= 0xFF4F;
   VAR_9 |= VAR_17 << 4;
   FUNC_0(VAR_7, 0x44, &VAR_18);
   VAR_18 &= (0x0F + 0xE1 * VAR_5->port_no);

   VAR_18 |= ((VAR_13[VAR_20][0] << 2) | VAR_13[VAR_20][1]) << (VAR_5->port_no ? 4 : 0);
   FUNC_2(VAR_7, 0x44, VAR_18);
  } else {
   VAR_9 &= 0xCCF4;

   VAR_9 |= VAR_17;
   VAR_9 |=
    (VAR_13[VAR_20][0] << 12) |
    (VAR_13[VAR_20][1] << 8);
  }
  VAR_12 &= ~(1 << VAR_11);
  FUNC_3(VAR_7, VAR_8, VAR_9);
 }
 FUNC_2(VAR_7, 0x48, VAR_12);
}

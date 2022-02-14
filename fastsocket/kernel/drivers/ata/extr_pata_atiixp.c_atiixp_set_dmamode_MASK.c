
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int dma_mode; int devno; int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ata_port*,struct ata_device*,int) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ata_port *VAR_6, struct ata_device *VAR_7)
{
 static u8 VAR_8[5] = { 0x77, 0x21, 0x20 };

 struct pci_dev *VAR_9 = FUNC_6(VAR_6->host->dev);
 int VAR_10 = VAR_7->dma_mode;
 int VAR_11 = 2 * VAR_6->port_no + VAR_7->devno;
 int VAR_12;

 if (VAR_7->dma_mode >= VAR_5) {
  u16 VAR_13;

  VAR_10 -= VAR_5;

  FUNC_3(VAR_9, VAR_1, &VAR_13);
  VAR_13 &= ~(0x7 << (4 * VAR_11));
  VAR_13 |= VAR_10 << (4 * VAR_11);
  FUNC_5(VAR_9, VAR_1, VAR_13);
 } else {
  int VAR_14 = (16 * VAR_6->port_no) + 8 * (VAR_7->devno ^ 1);
  u32 VAR_15;

  VAR_10 -= VAR_2;

  FUNC_2(VAR_9, VAR_0,
          &VAR_15);
  VAR_15 &= ~(0xFF << VAR_14);
  VAR_15 |= (VAR_8[VAR_10] << VAR_14);
  FUNC_4(VAR_9, VAR_0,
           VAR_15);
 }




  if (VAR_7->dma_mode >= VAR_4)
   VAR_12 = 4;
 else if (VAR_7->dma_mode == VAR_3)
  VAR_12 = 3;
 else if (VAR_7->dma_mode == VAR_2)
  VAR_12 = 0;
 else FUNC_0();

 if (VAR_7->pio_mode != VAR_12)
  FUNC_1(VAR_6, VAR_7, VAR_12);
}

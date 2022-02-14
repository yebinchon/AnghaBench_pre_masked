
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct ata_device {unsigned int pio_mode; scalar_t__ dma_mode; int devno; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,unsigned int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (struct ata_port *VAR_4, struct ata_device *VAR_5)
{
 unsigned int VAR_6 = VAR_5->pio_mode - VAR_1;
 struct pci_dev *VAR_7 = FUNC_3(VAR_4->host->dev);
 u8 VAR_8;

 if (VAR_5->dma_mode == VAR_0)
  VAR_6 = 1;
 else
  VAR_6 = 4;


 FUNC_0(VAR_4, VAR_5, VAR_6);


 FUNC_1(VAR_7, 0x44 + VAR_4->port_no, &VAR_8);
 VAR_8 &= ~(7 << (4 * VAR_5->devno));
 if (VAR_5->dma_mode >= VAR_2) {
  u8 VAR_9 = VAR_5->dma_mode - VAR_2 + 1 - VAR_3;
  if (VAR_9 == 0)
   VAR_9 = 1;
  VAR_8 |= (VAR_9 << (4 * VAR_5->devno));
 }
 FUNC_2(VAR_7, 0x44 + VAR_4->port_no, VAR_8);
}

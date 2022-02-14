
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ dma_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_4, struct ata_device *VAR_5)
{
 static const u8 VAR_6[] = {
  0x30, 0x20, 0x10, 0x20, 0x10, 0x00
 };

 struct pci_dev *VAR_7 = FUNC_3(VAR_4->host->dev);
 u8 VAR_8, VAR_9;

 int VAR_10 = VAR_1 + 8 * VAR_4->port_no;
 int VAR_11 = VAR_0 + 8 * VAR_4->port_no;
 int VAR_12 = 2 * VAR_5->devno;

 FUNC_1(VAR_7, VAR_11, &VAR_9);
 FUNC_1(VAR_7, VAR_10, &VAR_8);


 VAR_9 &= ~(0x20 << VAR_5->devno);

 VAR_8 &= ~(0x30 << VAR_12);

 VAR_8 &= ~(0x05 << VAR_5->devno);

 if (VAR_5->dma_mode >= VAR_2) {

  VAR_8 |= VAR_6[VAR_5->dma_mode - VAR_2] << VAR_12;

  VAR_8 |= 1 << VAR_5->devno;
  if (VAR_5->dma_mode > VAR_3)
   VAR_8 |= 4 << VAR_5->devno;
 } else {
  VAR_8 &= ~ (1 << VAR_5->devno);
  FUNC_0(VAR_4, VAR_5, VAR_5->dma_mode);
 }

 VAR_9 |= 0x20 << VAR_5->devno;

 FUNC_2(VAR_7, VAR_10, VAR_8);
 FUNC_2(VAR_7, VAR_11, VAR_9);
}

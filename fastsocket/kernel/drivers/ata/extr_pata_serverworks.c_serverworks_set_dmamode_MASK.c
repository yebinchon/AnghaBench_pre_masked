
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


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int const) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 static const u8 VAR_4[] = { 0x77, 0x21, 0x20 };
 int VAR_5 = 1 + 2 * VAR_2->port_no - VAR_3->devno;
 int VAR_6 = 2 * VAR_2->port_no + VAR_3->devno;
 u8 VAR_7;
 u8 VAR_8;
 struct pci_dev *VAR_9 = FUNC_2(VAR_2->host->dev);

 FUNC_0(VAR_9, 0x54, &VAR_8);
 FUNC_0(VAR_9, 0x56 + VAR_2->port_no, &VAR_7);
 VAR_7 &= ~(0x0F << (VAR_3->devno * 4));

 if (VAR_3->dma_mode >= VAR_1) {
  FUNC_1(VAR_9, 0x44 + VAR_5, 0x20);

  VAR_7 |= (VAR_3->dma_mode - VAR_1)
     << (VAR_3->devno * 4);
  VAR_8 |= (1 << VAR_6);
 } else {
  FUNC_1(VAR_9, 0x44 + VAR_5,
   VAR_4[VAR_3->dma_mode - VAR_0]);
  VAR_8 &= ~(1 << VAR_6);
 }
 FUNC_1(VAR_9, 0x56 + VAR_2->port_no, VAR_7);
 FUNC_1(VAR_9, 0x54, VAR_8);
}

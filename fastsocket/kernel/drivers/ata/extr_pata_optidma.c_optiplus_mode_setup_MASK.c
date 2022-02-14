
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; int dma_mode; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,int ) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int,scalar_t__) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_1, struct ata_device *VAR_2, u8 VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_1->host->dev);
 u8 VAR_5;
 u8 VAR_6;
 int VAR_7 = 2 * VAR_2->devno;
 int VAR_8 = 2 * VAR_1->port_no + VAR_2->devno;
 int VAR_9 = VAR_3 - VAR_0;

 FUNC_1(VAR_4, 0x44, &VAR_5);
 if (VAR_3 <= VAR_0) {
  VAR_5 &= ~(1 << VAR_8);
  FUNC_0(VAR_1, VAR_2, VAR_2->dma_mode);
 } else {
  VAR_5 |= (1 << VAR_8);
  if (VAR_1->port_no) {
   FUNC_1(VAR_4, 0x45, &VAR_6);
   VAR_6 &= ~(0x03 << VAR_7);
   VAR_6 |= (VAR_9 << VAR_7);
   FUNC_2(VAR_4, 0x45, VAR_6);
  } else {
   VAR_5 &= ~(0x30 << VAR_7);
   VAR_5 |= (VAR_9 << VAR_7);
  }
 }
 FUNC_2(VAR_4, 0x44, VAR_5);
}

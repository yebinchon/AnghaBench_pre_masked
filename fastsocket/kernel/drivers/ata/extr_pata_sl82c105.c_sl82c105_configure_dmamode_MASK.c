
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; int dma_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_1->host->dev);
 static u16 VAR_4[3] = {
  0x707, 0x201, 0x200
 };
 u16 VAR_5;
 int VAR_6 = 0x44 + (8 * VAR_1->port_no) + (4 * VAR_2->devno);
 int VAR_7 = VAR_2->dma_mode - VAR_0;

 FUNC_1(VAR_3, VAR_6, VAR_4[VAR_7]);

 FUNC_0(VAR_3, VAR_6, &VAR_5);
}

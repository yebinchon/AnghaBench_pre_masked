
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_0, struct ata_device *VAR_1, int VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_0->host->dev);
 static u16 VAR_4[5] = {
  0x50D, 0x407, 0x304, 0x242, 0x240
 };
 u16 VAR_5;
 int VAR_6 = 0x44 + (8 * VAR_0->port_no) + (4 * VAR_1->devno);

 FUNC_1(VAR_3, VAR_6, VAR_4[VAR_2]);

 FUNC_0(VAR_3, VAR_6, &VAR_5);
}

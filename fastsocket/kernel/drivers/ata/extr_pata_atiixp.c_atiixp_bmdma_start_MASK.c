
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_queued_cmd {struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct ata_device *VAR_3 = VAR_1->dev;

 struct pci_dev *VAR_4 = FUNC_4(VAR_2->host->dev);
 int VAR_5 = (2 * VAR_2->port_no) + VAR_3->devno;
 u16 VAR_6;

 FUNC_2(VAR_4, VAR_0, &VAR_6);
 if (FUNC_1(VAR_3))
  VAR_6 |= (1 << VAR_5);
 else
  VAR_6 &= ~(1 << VAR_5);
 FUNC_3(VAR_4, VAR_0, VAR_6);
 FUNC_0(VAR_1);
}

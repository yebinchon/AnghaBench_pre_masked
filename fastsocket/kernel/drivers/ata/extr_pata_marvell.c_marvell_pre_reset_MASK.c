
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int device; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_link*,unsigned long) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_link *VAR_1, unsigned long VAR_2)
{
 struct ata_port *VAR_3 = VAR_1->ap;
 struct pci_dev *VAR_4 = FUNC_2(VAR_3->host->dev);

 if (VAR_4->device == 0x6145 && VAR_3->port_no == 0 &&
  !FUNC_1(VAR_4))
   return -VAR_0;

 return FUNC_0(VAR_1, VAR_2);
}

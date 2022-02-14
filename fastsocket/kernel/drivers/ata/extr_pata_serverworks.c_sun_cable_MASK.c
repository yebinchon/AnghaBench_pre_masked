
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int subsystem_device; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ata_port *VAR_2) {
 struct pci_dev *VAR_3 = FUNC_0(VAR_2->host->dev);

 if (VAR_3->subsystem_device & (1 << (VAR_2->port_no + 14)))
  return VAR_1;
 return VAR_0;
}

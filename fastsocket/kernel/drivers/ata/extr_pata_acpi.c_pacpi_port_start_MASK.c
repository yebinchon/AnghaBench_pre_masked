
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct pata_acpi {void** mask; } ;
struct TYPE_4__ {int * device; } ;
struct ata_port {TYPE_2__ link; struct pata_acpi* private_data; int * acpi_handle; TYPE_1__* host; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_port*) ;
 struct pata_acpi* FUNC_1 (int *,int,int ) ;
 void* FUNC_2 (struct ata_port*,int *) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ata_port *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_3->host->dev);
 struct pata_acpi *VAR_5;

 int VAR_6;

 if (VAR_3->acpi_handle == ((void*)0))
  return -VAR_0;

 VAR_5 = VAR_3->private_data = FUNC_1(&VAR_4->dev, sizeof(struct pata_acpi), VAR_2);
 if (VAR_3->private_data == ((void*)0))
  return -VAR_1;
 VAR_5->mask[0] = FUNC_2(VAR_3, &VAR_3->link.device[0]);
 VAR_5->mask[1] = FUNC_2(VAR_3, &VAR_3->link.device[1]);
 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_6;
}

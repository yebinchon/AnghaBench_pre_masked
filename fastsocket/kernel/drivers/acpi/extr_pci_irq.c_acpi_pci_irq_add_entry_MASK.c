
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {int number; } ;
struct TYPE_2__ {int device; int bus; int segment; } ;
struct acpi_prt_entry {int list; int index; scalar_t__ pin; TYPE_1__ id; int link; } ;
struct acpi_pci_routing_table {int address; scalar_t__* source; int source_index; scalar_t__ pin; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct acpi_prt_entry*,struct acpi_pci_routing_table*) ;
 struct acpi_prt_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct pci_bus*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(acpi_handle VAR_5, struct pci_bus *VAR_6,
      struct acpi_pci_routing_table *VAR_7)
{
 struct acpi_prt_entry *VAR_8;

 VAR_8 = FUNC_3(sizeof(struct acpi_prt_entry), VAR_2);
 if (!VAR_8)
  return -VAR_1;






 VAR_8->id.segment = FUNC_5(VAR_6);
 VAR_8->id.bus = VAR_6->number;
 VAR_8->id.device = (VAR_7->address >> 16) & 0xFFFF;
 VAR_8->pin = VAR_7->pin + 1;

 FUNC_2(VAR_8, VAR_7);

 VAR_8->index = VAR_7->source_index;
 if (VAR_7->source[0])
  FUNC_1(VAR_5, VAR_7->source, &VAR_8->link);
 FUNC_0((VAR_0,
         "      %04x:%02x:%02x[%c] -> %s[%d]\n",
         VAR_8->id.segment, VAR_8->id.bus,
         VAR_8->id.device, FUNC_6(VAR_8->pin),
         VAR_7->source, VAR_8->index));

 FUNC_7(&VAR_4);
 FUNC_4(&VAR_8->list, &VAR_3);
 FUNC_8(&VAR_4);

 return 0;
}

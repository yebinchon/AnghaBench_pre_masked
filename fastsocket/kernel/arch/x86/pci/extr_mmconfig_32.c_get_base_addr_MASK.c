
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_mcfg_allocation {unsigned int pci_segment; int start_bus_number; int end_bus_number; int address; } ;


 struct acpi_mcfg_allocation* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(unsigned int VAR_2, int VAR_3, unsigned VAR_4)
{
 struct acpi_mcfg_allocation *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = &VAR_0[VAR_6];
  if (VAR_5->pci_segment == VAR_2 &&
      (VAR_5->start_bus_number <= VAR_3) &&
      (VAR_5->end_bus_number >= VAR_3))
   return VAR_5->address;
 }


 return 0;
}

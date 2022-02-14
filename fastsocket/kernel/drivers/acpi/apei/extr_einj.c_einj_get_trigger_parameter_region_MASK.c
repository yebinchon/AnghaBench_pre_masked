
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct acpi_generic_address {scalar_t__ space_id; int address; } ;
struct acpi_whea_header {scalar_t__ action; scalar_t__ instruction; struct acpi_generic_address register_region; } ;
struct acpi_einj_trigger {int entry_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static struct acpi_generic_address *FUNC_0(
 struct acpi_einj_trigger *VAR_3, u64 VAR_4, u64 VAR_5)
{
 int VAR_6;
 struct acpi_whea_header *VAR_7;

 VAR_7 = (struct acpi_whea_header *)
  ((char *)VAR_3 + sizeof(struct acpi_einj_trigger));
 for (VAR_6 = 0; VAR_6 < VAR_3->entry_count; VAR_6++) {
  if (VAR_7->action == VAR_1 &&
  VAR_7->instruction == VAR_2 &&
  VAR_7->register_region.space_id ==
   VAR_0 &&
  (VAR_7->register_region.address & VAR_5) == (VAR_4 & VAR_5))
   return &VAR_7->register_region;
  VAR_7++;
 }

 return ((void*)0);
}

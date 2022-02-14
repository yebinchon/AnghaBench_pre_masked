
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct acpi_gpe_block_info* gpe_block; } ;
union acpi_operand_object {TYPE_1__ device; } ;
typedef size_t u32 ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_gpe_event_info {int dummy; } ;
struct acpi_gpe_block_info {size_t block_base_number; int register_count; struct acpi_gpe_event_info* event_info; } ;
typedef scalar_t__ acpi_handle ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 struct acpi_gpe_block_info** VAR_1 ;
 union acpi_operand_object* FUNC_1 (struct acpi_namespace_node*) ;

struct acpi_gpe_event_info *FUNC_2(acpi_handle VAR_2,
             u32 VAR_3)
{
 union acpi_operand_object *VAR_4;
 struct acpi_gpe_block_info *VAR_5;
 u32 VAR_6;

 FUNC_0();



 if (!VAR_2) {



  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   VAR_5 = VAR_1[VAR_6];
   if (VAR_5) {
    if ((VAR_3 >= VAR_5->block_base_number)
        && (VAR_3 <
     VAR_5->block_base_number +
     (VAR_5->register_count * 8))) {
     return (&VAR_5->
      event_info[VAR_3 -
          VAR_5->
          block_base_number]);
    }
   }
  }



  return (((void*)0));
 }



 VAR_4 = FUNC_1((struct acpi_namespace_node *)
            VAR_2);
 if (!VAR_4 || !VAR_4->device.gpe_block) {
  return (((void*)0));
 }

 VAR_5 = VAR_4->device.gpe_block;

 if ((VAR_3 >= VAR_5->block_base_number) &&
     (VAR_3 <
      VAR_5->block_base_number + (VAR_5->register_count * 8))) {
  return (&VAR_5->
   event_info[VAR_3 - VAR_5->block_base_number]);
 }

 return (((void*)0));
}

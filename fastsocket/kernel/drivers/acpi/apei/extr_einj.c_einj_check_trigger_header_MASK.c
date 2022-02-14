
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_einj_trigger {int header_size; int table_size; int entry_count; } ;
struct acpi_einj_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct acpi_einj_trigger *VAR_2)
{
 if (VAR_2->header_size != sizeof(struct acpi_einj_trigger))
  return -VAR_0;
 if (VAR_2->table_size > VAR_1 ||
     VAR_2->table_size < VAR_2->header_size)
  return -VAR_0;
 if (VAR_2->entry_count !=
     (VAR_2->table_size - VAR_2->header_size) /
     sizeof(struct acpi_einj_entry))
  return -VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_gpe_xrupt_info {struct acpi_gpe_xrupt_info* next; struct acpi_gpe_block_info* gpe_block_list_head; } ;
struct acpi_gpe_event_info {int dummy; } ;
struct acpi_gpe_block_info {struct acpi_gpe_block_info* next; scalar_t__ register_count; struct acpi_gpe_event_info* event_info; } ;
typedef int acpi_size ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct acpi_gpe_xrupt_info* VAR_2 ;

u8 FUNC_1(struct acpi_gpe_event_info *VAR_3)
{
 struct acpi_gpe_xrupt_info *VAR_4;
 struct acpi_gpe_block_info *VAR_5;

 FUNC_0();





 VAR_4 = VAR_2;
 while (VAR_4) {
  VAR_5 = VAR_4->gpe_block_list_head;



  while (VAR_5) {
   if ((&VAR_5->event_info[0] <= VAR_3) &&
       (&VAR_5->event_info[((acpi_size)
           VAR_5->
           register_count) * 8] >
        VAR_3)) {
    return (VAR_1);
   }

   VAR_5 = VAR_5->next;
  }

  VAR_4 = VAR_4->next;
 }

 return (VAR_0);
}

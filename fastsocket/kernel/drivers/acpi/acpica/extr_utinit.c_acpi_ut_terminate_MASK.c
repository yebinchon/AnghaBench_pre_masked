
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gpe_xrupt_info {struct acpi_gpe_xrupt_info* next; struct acpi_gpe_xrupt_info* register_info; struct acpi_gpe_xrupt_info* event_info; struct acpi_gpe_xrupt_info* gpe_block_list_head; } ;
struct acpi_gpe_block_info {struct acpi_gpe_block_info* next; struct acpi_gpe_block_info* register_info; struct acpi_gpe_block_info* event_info; struct acpi_gpe_block_info* gpe_block_list_head; } ;


 int FUNC_0 (struct acpi_gpe_xrupt_info*) ;
 int FUNC_1 (int ) ;
 struct acpi_gpe_xrupt_info* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct acpi_gpe_block_info *VAR_3;
 struct acpi_gpe_block_info *VAR_4;
 struct acpi_gpe_xrupt_info *VAR_5;
 struct acpi_gpe_xrupt_info *VAR_6;

 FUNC_1(VAR_2);



 VAR_5 = VAR_0;
 while (VAR_5) {
  VAR_3 = VAR_5->gpe_block_list_head;
  while (VAR_3) {
   VAR_4 = VAR_3->next;
   FUNC_0(VAR_3->event_info);
   FUNC_0(VAR_3->register_info);
   FUNC_0(VAR_3);

   VAR_3 = VAR_4;
  }
  VAR_6 = VAR_5->next;
  FUNC_0(VAR_5);
  VAR_5 = VAR_6;
 }

 VAR_1;
}

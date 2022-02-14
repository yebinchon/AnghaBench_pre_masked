
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_gpe_xrupt_info {struct acpi_gpe_block_info* gpe_block_list_head; } ;
struct acpi_gpe_block_info {struct acpi_gpe_xrupt_info* xrupt_block; struct acpi_gpe_block_info* previous; struct acpi_gpe_block_info* next; } ;
typedef int acpi_status ;
typedef int acpi_cpu_flags ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct acpi_gpe_xrupt_info* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static acpi_status
FUNC_8(struct acpi_gpe_block_info *VAR_4,
     u32 VAR_5)
{
 struct acpi_gpe_block_info *VAR_6;
 struct acpi_gpe_xrupt_info *VAR_7;
 acpi_status VAR_8;
 acpi_cpu_flags VAR_9;

 FUNC_1(VAR_3);

 VAR_8 = FUNC_5(VAR_0);
 if (FUNC_0(VAR_8)) {
  FUNC_7(VAR_8);
 }

 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7) {
  VAR_8 = VAR_1;
  goto unlock_and_exit;
 }



 VAR_9 = FUNC_3(VAR_2);
 if (VAR_7->gpe_block_list_head) {
  VAR_6 = VAR_7->gpe_block_list_head;
  while (VAR_6->next) {
   VAR_6 = VAR_6->next;
  }

  VAR_6->next = VAR_4;
  VAR_4->previous = VAR_6;
 } else {
  VAR_7->gpe_block_list_head = VAR_4;
 }

 VAR_4->xrupt_block = VAR_7;
 FUNC_4(VAR_2, VAR_9);

      unlock_and_exit:
 VAR_8 = FUNC_6(VAR_0);
 FUNC_7(VAR_8);
}

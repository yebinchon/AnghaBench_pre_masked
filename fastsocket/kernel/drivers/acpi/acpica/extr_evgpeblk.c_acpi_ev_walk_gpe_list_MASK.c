
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gpe_xrupt_info {struct acpi_gpe_xrupt_info* next; struct acpi_gpe_block_info* gpe_block_list_head; } ;
struct acpi_gpe_block_info {struct acpi_gpe_block_info* next; } ;
typedef scalar_t__ acpi_status ;
typedef scalar_t__ (* acpi_gpe_callback ) (struct acpi_gpe_xrupt_info*,struct acpi_gpe_block_info*,void*) ;
typedef int acpi_cpu_flags ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct acpi_gpe_xrupt_info* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;

acpi_status
FUNC_5(acpi_gpe_callback VAR_5, void *VAR_6)
{
 struct acpi_gpe_block_info *VAR_7;
 struct acpi_gpe_xrupt_info *VAR_8;
 acpi_status VAR_9 = VAR_1;
 acpi_cpu_flags VAR_10;

 FUNC_1(VAR_4);

 VAR_10 = FUNC_2(VAR_2);



 VAR_8 = VAR_3;
 while (VAR_8) {



  VAR_7 = VAR_8->gpe_block_list_head;
  while (VAR_7) {



   VAR_9 =
       VAR_5(VAR_8, VAR_7,
           VAR_6);
   if (FUNC_0(VAR_9)) {
    if (VAR_9 == VAR_0) {
     VAR_9 = VAR_1;
    }
    goto unlock_and_exit;
   }

   VAR_7 = VAR_7->next;
  }

  VAR_8 = VAR_8->next;
 }

      unlock_and_exit:
 FUNC_3(VAR_2, VAR_10);
 FUNC_4(VAR_9);
}

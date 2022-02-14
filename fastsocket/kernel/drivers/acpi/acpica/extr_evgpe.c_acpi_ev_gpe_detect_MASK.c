
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct acpi_gpe_xrupt_info {struct acpi_gpe_block_info* gpe_block_list_head; } ;
struct acpi_gpe_register_info {scalar_t__ base_gpe_number; int enable_address; int status_address; } ;
struct acpi_gpe_block_info {size_t register_count; struct acpi_gpe_block_info* next; int * event_info; struct acpi_gpe_register_info* register_info; } ;
typedef int acpi_status ;
typedef size_t acpi_size ;
typedef int acpi_cpu_flags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_3 (int *,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (size_t*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;

u32 FUNC_7(struct acpi_gpe_xrupt_info * VAR_5)
{
 acpi_status VAR_6;
 struct acpi_gpe_block_info *VAR_7;
 struct acpi_gpe_register_info *VAR_8;
 u32 VAR_9 = VAR_2;
 u8 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 acpi_cpu_flags VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 FUNC_2(VAR_4);



 if (!VAR_5) {
  return (VAR_9);
 }






 VAR_13 = FUNC_5(VAR_3);



 VAR_7 = VAR_5->gpe_block_list_head;
 while (VAR_7) {




  for (VAR_14 = 0; VAR_14 < VAR_7->register_count; VAR_14++) {



   VAR_8 = &VAR_7->register_info[VAR_14];



   VAR_6 =
       FUNC_4(&VAR_11,
      &VAR_8->status_address);
   if (FUNC_1(VAR_6)) {
    goto unlock_and_exit;
   }



   VAR_6 =
       FUNC_4(&VAR_12,
      &VAR_8->enable_address);
   if (FUNC_1(VAR_6)) {
    goto unlock_and_exit;
   }

   FUNC_0((VAR_0,
       "Read GPE Register at GPE%X: Status=%02X, Enable=%02X\n",
       VAR_8->base_gpe_number,
       VAR_11, VAR_12));



   VAR_10 = (u8) (VAR_11 & VAR_12);
   if (!VAR_10) {



    continue;
   }



   for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {



    if (VAR_10 & (1 << VAR_15)) {




     VAR_9 |=
         FUNC_3(&VAR_7->
      event_info[((acpi_size) VAR_14 * VAR_1) + VAR_15], VAR_15 + VAR_8->base_gpe_number);
    }
   }
  }

  VAR_7 = VAR_7->next;
 }

      unlock_and_exit:

 FUNC_6(VAR_3, VAR_13);
 return (VAR_9);
}

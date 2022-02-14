
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_gpe_xrupt_info {int dummy; } ;
struct acpi_gpe_block_info {size_t register_count; TYPE_1__* register_info; } ;
typedef int acpi_status ;
struct TYPE_2__ {int enable_address; int enable_for_run; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

acpi_status
FUNC_2(struct acpi_gpe_xrupt_info *VAR_1,
     struct acpi_gpe_block_info *VAR_2, void *VAR_3)
{
 u32 VAR_4;
 acpi_status VAR_5;





 for (VAR_4 = 0; VAR_4 < VAR_2->register_count; VAR_4++) {
  if (!VAR_2->register_info[VAR_4].enable_for_run) {
   continue;
  }



  VAR_5 =
      FUNC_1(VAR_2->register_info[VAR_4].enable_for_run,
      &VAR_2->register_info[VAR_4].enable_address);
  if (FUNC_0(VAR_5)) {
   return (VAR_5);
  }
 }

 return (VAR_0);
}

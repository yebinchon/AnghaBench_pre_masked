
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct acpi_gpe_event_info {int gpe_number; TYPE_1__* register_info; } ;
typedef int acpi_status ;
struct TYPE_2__ {int base_gpe_number; int status_address; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int *) ;

acpi_status FUNC_2(struct acpi_gpe_event_info * VAR_0)
{
 acpi_status VAR_1;
 u8 VAR_2;

 FUNC_0();

 VAR_2 = (u8)(1 <<
       (VAR_0->gpe_number -
        VAR_0->register_info->base_gpe_number));





 VAR_1 = FUNC_1(VAR_2,
          &VAR_0->register_info->status_address);

 return (VAR_1);
}

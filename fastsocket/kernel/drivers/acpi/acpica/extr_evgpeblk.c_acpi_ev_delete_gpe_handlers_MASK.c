
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct acpi_gpe_xrupt_info {int dummy; } ;
struct TYPE_2__ {int * handler; } ;
struct acpi_gpe_event_info {int flags; TYPE_1__ dispatch; } ;
struct acpi_gpe_block_info {scalar_t__ register_count; struct acpi_gpe_event_info* event_info; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

acpi_status
FUNC_3(struct acpi_gpe_xrupt_info *VAR_5,
       struct acpi_gpe_block_info *VAR_6,
       void *VAR_7)
{
 struct acpi_gpe_event_info *VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 FUNC_1(VAR_4);



 for (VAR_9 = 0; VAR_9 < VAR_6->register_count; VAR_9++) {



  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   VAR_8 = &VAR_6->event_info[((acpi_size) VAR_9 *
         VAR_2)
        + VAR_10];

   if ((VAR_8->flags & VAR_1) ==
       VAR_0) {
    FUNC_0(VAR_8->dispatch.handler);
    VAR_8->dispatch.handler = ((void*)0);
    VAR_8->flags &=
        ~VAR_1;
   }
  }
 }

 FUNC_2(VAR_3);
}

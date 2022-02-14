
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct acpi_gpe_xrupt_info {scalar_t__ interrupt_number; struct acpi_gpe_xrupt_info* previous; struct acpi_gpe_xrupt_info* next; } ;
typedef int acpi_status ;
typedef int acpi_cpu_flags ;
struct TYPE_2__ {scalar_t__ sci_interrupt; } ;


 struct acpi_gpe_xrupt_info* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 struct acpi_gpe_xrupt_info* VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,struct acpi_gpe_xrupt_info*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct acpi_gpe_xrupt_info*) ;

__attribute__((used)) static struct acpi_gpe_xrupt_info *FUNC_8(u32
              VAR_6)
{
 struct acpi_gpe_xrupt_info *VAR_7;
 struct acpi_gpe_xrupt_info *VAR_8;
 acpi_status VAR_9;
 acpi_cpu_flags VAR_10;

 FUNC_3(VAR_5);



 VAR_7 = VAR_4;
 while (VAR_7) {
  if (VAR_7->interrupt_number == VAR_6) {
   FUNC_7(VAR_7);
  }

  VAR_7 = VAR_7->next;
 }



 VAR_8 = FUNC_0(sizeof(struct acpi_gpe_xrupt_info));
 if (!VAR_8) {
  FUNC_7(((void*)0));
 }

 VAR_8->interrupt_number = VAR_6;



 VAR_10 = FUNC_4(VAR_3);
 if (VAR_4) {
  VAR_7 = VAR_4;
  while (VAR_7->next) {
   VAR_7 = VAR_7->next;
  }

  VAR_7->next = VAR_8;
  VAR_8->previous = VAR_7;
 } else {
  VAR_4 = VAR_8;
 }
 FUNC_6(VAR_3, VAR_10);



 if (VAR_6 != VAR_2.sci_interrupt) {
  VAR_9 = FUNC_5(VAR_6,
          VAR_1,
          VAR_8);
  if (FUNC_2(VAR_9)) {
   FUNC_1((VAR_0,
        "Could not install GPE interrupt handler at level 0x%X",
        VAR_6));
   FUNC_7(((void*)0));
  }
 }

 FUNC_7(VAR_8);
}

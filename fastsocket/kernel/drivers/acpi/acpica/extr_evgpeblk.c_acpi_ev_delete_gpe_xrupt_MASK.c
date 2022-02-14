
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct acpi_gpe_xrupt_info {scalar_t__ interrupt_number; TYPE_1__* previous; TYPE_2__* next; int * gpe_block_list_head; } ;
typedef int acpi_status ;
typedef int acpi_cpu_flags ;
struct TYPE_6__ {scalar_t__ sci_interrupt; } ;
struct TYPE_5__ {TYPE_1__* previous; } ;
struct TYPE_4__ {TYPE_2__* next; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_gpe_xrupt_info*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static acpi_status
FUNC_7(struct acpi_gpe_xrupt_info *VAR_6)
{
 acpi_status VAR_7;
 acpi_cpu_flags VAR_8;

 FUNC_2(VAR_5);



 if (VAR_6->interrupt_number == VAR_2.sci_interrupt) {
  VAR_6->gpe_block_list_head = ((void*)0);
  FUNC_6(VAR_0);
 }



 VAR_7 =
     FUNC_5(VAR_6->interrupt_number,
          VAR_1);
 if (FUNC_0(VAR_7)) {
  FUNC_6(VAR_7);
 }



 VAR_8 = FUNC_3(VAR_3);
 if (VAR_6->previous) {
  VAR_6->previous->next = VAR_6->next;
 } else {


  VAR_4 = VAR_6->next;
 }

 if (VAR_6->next) {
  VAR_6->next->previous = VAR_6->previous;
 }
 FUNC_4(VAR_3, VAR_8);



 FUNC_1(VAR_6);
 FUNC_6(VAR_0);
}

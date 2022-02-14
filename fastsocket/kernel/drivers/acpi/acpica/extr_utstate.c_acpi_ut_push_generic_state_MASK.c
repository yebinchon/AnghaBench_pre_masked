
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_generic_state* next; } ;
union acpi_generic_state {TYPE_1__ common; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(union acpi_generic_state **VAR_2,
      union acpi_generic_state *VAR_3)
{
 FUNC_0(VAR_1);



 VAR_3->common.next = *VAR_2;
 *VAR_2 = VAR_3;

 VAR_0;
}

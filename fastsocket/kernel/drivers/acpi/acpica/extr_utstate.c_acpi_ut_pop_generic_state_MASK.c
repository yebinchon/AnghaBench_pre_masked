
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_generic_state* next; } ;
union acpi_generic_state {TYPE_1__ common; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (union acpi_generic_state*) ;
 int VAR_0 ;

union acpi_generic_state *FUNC_2(union acpi_generic_state
          **VAR_1)
{
 union acpi_generic_state *VAR_2;

 FUNC_0(VAR_0);



 VAR_2 = *VAR_1;
 if (VAR_2) {



  *VAR_1 = VAR_2->common.next;
 }

 FUNC_1(VAR_2);
}

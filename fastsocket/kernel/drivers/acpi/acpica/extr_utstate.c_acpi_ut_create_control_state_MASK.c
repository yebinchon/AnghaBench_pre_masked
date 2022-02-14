
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int descriptor_type; } ;
union acpi_generic_state {TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 union acpi_generic_state* FUNC_1 () ;
 int FUNC_2 (union acpi_generic_state*) ;
 int VAR_2 ;

union acpi_generic_state *FUNC_3(void)
{
 union acpi_generic_state *VAR_3;

 FUNC_0(VAR_2);



 VAR_3 = FUNC_1();
 if (!VAR_3) {
  FUNC_2(((void*)0));
 }



 VAR_3->common.descriptor_type = VAR_1;
 VAR_3->common.state = VAR_0;

 FUNC_2(VAR_3);
}

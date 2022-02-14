
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 union acpi_generic_state* FUNC_1 (int ) ;
 int FUNC_2 (union acpi_generic_state*,int ,int) ;

union acpi_generic_state *FUNC_3(void)
{
 union acpi_generic_state *VAR_2;

 FUNC_0();

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {


  FUNC_2(VAR_2, 0, sizeof(union acpi_generic_state));
  VAR_2->common.descriptor_type = VAR_0;
 }

 return (VAR_2);
}

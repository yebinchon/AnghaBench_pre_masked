
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct TYPE_4__ {int num_packages; int index; void* dest_object; union acpi_operand_object* source_object; } ;
struct TYPE_3__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_2__ pkg; TYPE_1__ common; } ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 union acpi_generic_state* FUNC_1 () ;
 int FUNC_2 (union acpi_generic_state*) ;
 int VAR_1 ;

union acpi_generic_state *FUNC_3(void *VAR_2,
         void *VAR_3,
         u16 VAR_4)
{
 union acpi_generic_state *VAR_5;

 FUNC_0(VAR_1, VAR_2);



 VAR_5 = FUNC_1();
 if (!VAR_5) {
  FUNC_2(((void*)0));
 }



 VAR_5->common.descriptor_type = VAR_0;
 VAR_5->pkg.source_object = (union acpi_operand_object *)VAR_2;
 VAR_5->pkg.dest_object = VAR_3;
 VAR_5->pkg.index = VAR_4;
 VAR_5->pkg.num_packages = 1;

 FUNC_2(VAR_5);
}

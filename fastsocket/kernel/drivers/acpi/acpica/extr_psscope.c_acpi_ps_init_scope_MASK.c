
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
struct TYPE_3__ {int pkg_end; int arg_end; int arg_count; union acpi_parse_object* op; } ;
struct TYPE_4__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_1__ parse_scope; TYPE_2__ common; } ;
struct acpi_parse_state {union acpi_parse_object* start_op; union acpi_generic_state* scope; int aml_end; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ,union acpi_parse_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union acpi_generic_state* FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

acpi_status
FUNC_3(struct acpi_parse_state * VAR_5,
     union acpi_parse_object * VAR_6)
{
 union acpi_generic_state *VAR_7;

 FUNC_0(VAR_4, VAR_6);

 VAR_7 = FUNC_1();
 if (!VAR_7) {
  FUNC_2(VAR_2);
 }

 VAR_7->common.descriptor_type = VAR_0;
 VAR_7->parse_scope.op = VAR_6;
 VAR_7->parse_scope.arg_count = VAR_1;
 VAR_7->parse_scope.arg_end = VAR_5->aml_end;
 VAR_7->parse_scope.pkg_end = VAR_5->aml_end;

 VAR_5->scope = VAR_7;
 VAR_5->start_op = VAR_6;

 FUNC_2(VAR_3);
}

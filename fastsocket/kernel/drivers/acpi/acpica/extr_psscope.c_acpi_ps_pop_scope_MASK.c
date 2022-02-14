
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
struct TYPE_4__ {int pkg_end; scalar_t__ arg_count; scalar_t__ arg_list; union acpi_parse_object* op; } ;
struct TYPE_3__ {scalar_t__ next; } ;
union acpi_generic_state {TYPE_2__ parse_scope; TYPE_1__ common; } ;
typedef scalar_t__ u32 ;
struct acpi_parse_state {int pkg_end; union acpi_generic_state* scope; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union acpi_generic_state*) ;
 union acpi_generic_state* FUNC_3 (union acpi_generic_state**) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4(struct acpi_parse_state *VAR_3,
    union acpi_parse_object **VAR_4, u32 * VAR_5, u32 * VAR_6)
{
 union acpi_generic_state *VAR_7 = VAR_3->scope;

 FUNC_1(VAR_1);



 if (VAR_7->common.next) {
  VAR_7 = FUNC_3(&VAR_3->scope);



  *VAR_4 = VAR_7->parse_scope.op;
  *VAR_5 = VAR_7->parse_scope.arg_list;
  *VAR_6 = VAR_7->parse_scope.arg_count;
  VAR_3->pkg_end = VAR_7->parse_scope.pkg_end;



  FUNC_2(VAR_7);
 } else {


  *VAR_4 = ((void*)0);
  *VAR_5 = 0;
  *VAR_6 = 0;
 }

 FUNC_0((VAR_0,
     "Popped Op %p Args %X\n", *VAR_4, *VAR_6));
 VAR_2;
}

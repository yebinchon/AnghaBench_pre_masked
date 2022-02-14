
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct TYPE_2__ {union acpi_parse_object* start_op; } ;
struct acpi_walk_state {TYPE_1__ parser_state; struct acpi_thread_state* thread; union acpi_parse_object* origin; int owner_id; union acpi_operand_object* method_desc; int descriptor_type; } ;
struct acpi_thread_state {int dummy; } ;
typedef int acpi_owner_id ;


 struct acpi_walk_state* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_walk_state*) ;
 int FUNC_3 (struct acpi_walk_state*,struct acpi_thread_state*) ;
 int VAR_1 ;
 int FUNC_4 (struct acpi_walk_state*) ;

struct acpi_walk_state *FUNC_5(acpi_owner_id VAR_2, union acpi_parse_object
        *VAR_3, union acpi_operand_object
        *VAR_4, struct acpi_thread_state
        *VAR_5)
{
 struct acpi_walk_state *VAR_6;

 FUNC_1(VAR_1);

 VAR_6 = FUNC_0(sizeof(struct acpi_walk_state));
 if (!VAR_6) {
  FUNC_4(((void*)0));
 }

 VAR_6->descriptor_type = VAR_0;
 VAR_6->method_desc = VAR_4;
 VAR_6->owner_id = VAR_2;
 VAR_6->origin = VAR_3;
 VAR_6->thread = VAR_5;

 VAR_6->parser_state.start_op = VAR_3;




 FUNC_2(VAR_6);




 if (VAR_5) {
  FUNC_3(VAR_6, VAR_5);
 }

 FUNC_4(VAR_6);
}

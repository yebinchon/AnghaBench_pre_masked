
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; int * data; } ;
struct TYPE_4__ {union acpi_parse_object* arg; } ;
struct TYPE_5__ {scalar_t__ aml_opcode; TYPE_1__ value; scalar_t__ arg_list_length; } ;
union acpi_parse_object {TYPE_3__ named; TYPE_2__ common; } ;
typedef int u8 ;
struct acpi_walk_state {scalar_t__ opcode; scalar_t__ (* descending_callback ) (struct acpi_walk_state*,union acpi_parse_object**) ;int * op; int arg_types; int parser_state; } ;
typedef scalar_t__ acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 (union acpi_parse_object*,union acpi_parse_object*) ;
 scalar_t__ FUNC_6 (struct acpi_walk_state*,int *,scalar_t__,union acpi_parse_object**) ;
 scalar_t__ FUNC_7 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__) ;
 int VAR_10 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct acpi_walk_state*,union acpi_parse_object**) ;

__attribute__((used)) static acpi_status
FUNC_10(struct acpi_walk_state *VAR_11,
         u8 * VAR_12,
         union acpi_parse_object *VAR_13,
         union acpi_parse_object **VAR_14)
{
 acpi_status VAR_15 = VAR_5;
 union acpi_parse_object *VAR_16 = ((void*)0);

 FUNC_2(VAR_10, VAR_11);

 VAR_13->common.value.arg = ((void*)0);
 VAR_13->common.arg_list_length = 0;
 VAR_13->common.aml_opcode = VAR_11->opcode;





 while (FUNC_3(VAR_11->arg_types) &&
        (FUNC_3(VAR_11->arg_types) != VAR_8)) {
  VAR_15 =
      FUNC_6(VAR_11,
      &(VAR_11->parser_state),
      FUNC_3(VAR_11->
             arg_types), &VAR_16);
  if (FUNC_1(VAR_15)) {
   FUNC_8(VAR_15);
  }

  FUNC_5(VAR_13, VAR_16);
  FUNC_4(VAR_11->arg_types);
 }




 if (!FUNC_3(VAR_11->arg_types)) {
  FUNC_8(VAR_0);
 }



 FUNC_4(VAR_11->arg_types);





 VAR_11->op = ((void*)0);

 VAR_15 = VAR_11->descending_callback(VAR_11, VAR_14);
 if (FUNC_1(VAR_15)) {
  FUNC_0((VAR_4, VAR_15, "During name lookup/catalog"));
  FUNC_8(VAR_15);
 }

 if (!*VAR_14) {
  FUNC_8(VAR_1);
 }

 VAR_15 = FUNC_7(VAR_11, *VAR_14, VAR_15);
 if (FUNC_1(VAR_15)) {
  if (VAR_15 == VAR_3) {
   FUNC_8(VAR_2);
  }
  FUNC_8(VAR_15);
 }

 FUNC_5(*VAR_14, VAR_13->common.value.arg);
 VAR_9++;

 if ((*VAR_14)->common.aml_opcode == VAR_7 ||
     (*VAR_14)->common.aml_opcode == VAR_6) {
  (*VAR_14)->named.data = VAR_12;
  (*VAR_14)->named.length = 0;
 }

 FUNC_8(VAR_5);
}

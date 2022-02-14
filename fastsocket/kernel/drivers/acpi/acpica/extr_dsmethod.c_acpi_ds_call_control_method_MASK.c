
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
struct TYPE_4__ {size_t param_count; int method_flags; scalar_t__ (* implementation ) (struct acpi_walk_state*) ;int aml_length; int aml_start; int owner_id; } ;
union acpi_operand_object {TYPE_2__ method; } ;
typedef size_t u32 ;
struct acpi_walk_state {size_t num_operands; int ** operands; struct acpi_namespace_node* method_call_node; int prev_op; } ;
struct acpi_thread_state {int dummy; } ;
struct TYPE_3__ {int ascii; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;
struct acpi_evaluate_info {int ** parameters; } ;
typedef scalar_t__ acpi_status ;


 struct acpi_evaluate_info* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct acpi_evaluate_info*) ;
 int FUNC_4 (int ,struct acpi_walk_state*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct acpi_namespace_node*,union acpi_operand_object*,struct acpi_walk_state*) ;
 struct acpi_walk_state* FUNC_6 (int ,int *,union acpi_operand_object*,struct acpi_thread_state*) ;
 int FUNC_7 (struct acpi_walk_state*) ;
 scalar_t__ FUNC_8 (struct acpi_walk_state*,int *,struct acpi_namespace_node*,int ,int ,struct acpi_evaluate_info*,int ) ;
 int FUNC_9 (union acpi_operand_object*,struct acpi_walk_state*) ;
 union acpi_operand_object* FUNC_10 (struct acpi_namespace_node*) ;
 int FUNC_11 (int *) ;
 int VAR_8 ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (struct acpi_walk_state*) ;

acpi_status
FUNC_14(struct acpi_thread_state *VAR_9,
       struct acpi_walk_state *VAR_10,
       union acpi_parse_object *VAR_11)
{
 acpi_status VAR_12;
 struct acpi_namespace_node *VAR_13;
 struct acpi_walk_state *VAR_14 = ((void*)0);
 union acpi_operand_object *VAR_15;
 struct acpi_evaluate_info *VAR_16;
 u32 VAR_17;

 FUNC_4(VAR_8, VAR_10);

 FUNC_1((VAR_0,
     "Calling method %p, currentstate=%p\n",
     VAR_10->prev_op, VAR_10));




 VAR_13 = VAR_10->method_call_node;
 if (!VAR_13) {
  FUNC_12(VAR_4);
 }

 VAR_15 = FUNC_10(VAR_13);
 if (!VAR_15) {
  FUNC_12(VAR_5);
 }



 VAR_12 = FUNC_5(VAR_13, VAR_15,
      VAR_10);
 if (FUNC_2(VAR_12)) {
  FUNC_12(VAR_12);
 }



 VAR_14 = FUNC_6(VAR_15->method.owner_id,
          ((void*)0), VAR_15, VAR_9);
 if (!VAR_14) {
  VAR_12 = VAR_3;
  goto cleanup;
 }






 VAR_10->operands[VAR_10->num_operands] = ((void*)0);






 VAR_16 = FUNC_0(sizeof(struct acpi_evaluate_info));
 if (!VAR_16) {
  FUNC_12(VAR_3);
 }

 VAR_16->parameters = &VAR_10->operands[0];

 VAR_12 = FUNC_8(VAR_14, ((void*)0), VAR_13,
           VAR_15->method.aml_start,
           VAR_15->method.aml_length, VAR_16,
           VAR_1);

 FUNC_3(VAR_16);
 if (FUNC_2(VAR_12)) {
  goto cleanup;
 }





 for (VAR_17 = 0; VAR_17 < VAR_15->method.param_count; VAR_17++) {
  FUNC_11(VAR_10->operands[VAR_17]);
  VAR_10->operands[VAR_17] = ((void*)0);
 }



 VAR_10->num_operands = 0;

 FUNC_1((VAR_0,
     "**** Begin nested execution of [%4.4s] **** WalkState=%p\n",
     VAR_13->name.ascii, VAR_14));



 if (VAR_15->method.method_flags & VAR_7) {
  VAR_12 = VAR_15->method.implementation(VAR_14);
  if (VAR_12 == VAR_6) {
   VAR_12 = VAR_2;
  }
 }

 FUNC_12(VAR_12);

      cleanup:



 FUNC_9(VAR_15, VAR_14);
 if (VAR_14) {
  FUNC_7(VAR_14);
 }

 FUNC_12(VAR_12);
}

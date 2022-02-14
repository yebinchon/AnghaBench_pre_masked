
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ aml_opcode; } ;
union acpi_parse_object {TYPE_4__ common; } ;
typedef int u32 ;
struct acpi_walk_state {scalar_t__ opcode; int walk_type; TYPE_5__* op_info; TYPE_3__* control_state; union acpi_parse_object* origin; union acpi_parse_object* op; } ;
typedef int acpi_status ;
struct TYPE_10__ {int class; int object_type; } ;
struct TYPE_7__ {union acpi_parse_object* predicate_op; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_8__ {TYPE_2__ control; TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 int VAR_4 ;
 int VAR_5 ;




 scalar_t__ VAR_6 ;
 int FUNC_3 (struct acpi_walk_state*,union acpi_parse_object*) ;
 int FUNC_4 (struct acpi_walk_state*,union acpi_parse_object**) ;
 int FUNC_5 (int ,struct acpi_walk_state*) ;
 int FUNC_6 (struct acpi_walk_state*) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_5__* FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(struct acpi_walk_state *VAR_8,
        union acpi_parse_object **VAR_9)
{
 union acpi_parse_object *VAR_10;
 acpi_status VAR_11 = VAR_5;
 u32 VAR_12;

 FUNC_2(VAR_7, VAR_8);

 VAR_10 = VAR_8->op;
 if (!VAR_10) {
  VAR_11 = FUNC_4(VAR_8, VAR_9);
  if (FUNC_1(VAR_11)) {
   goto error_exit;
  }

  VAR_10 = *VAR_9;
  VAR_8->op = VAR_10;
  VAR_8->opcode = VAR_10->common.aml_opcode;
  VAR_8->op_info =
      FUNC_8(VAR_10->common.aml_opcode);

  if (FUNC_7(VAR_8->op_info->object_type)) {
   FUNC_0((VAR_2,
       "(%s) Popping scope for Op %p\n",
       FUNC_9(VAR_8->
        op_info->
        object_type),
       VAR_10));

   VAR_11 = FUNC_6(VAR_8);
   if (FUNC_1(VAR_11)) {
    goto error_exit;
   }
  }
 }

 if (VAR_10 == VAR_8->origin) {
  if (VAR_9) {
   *VAR_9 = VAR_10;
  }

  FUNC_10(VAR_5);
 }






 if ((VAR_8->control_state) &&
     (VAR_8->control_state->common.state ==
      VAR_0)) {
  FUNC_0((VAR_3,
      "Exec predicate Op=%p State=%p\n", VAR_10,
      VAR_8));

  VAR_8->control_state->common.state =
      VAR_1;



  VAR_8->control_state->control.predicate_op = VAR_10;
 }

 VAR_12 = VAR_8->op_info->class;



 if (VAR_10->common.aml_opcode == VAR_6) {
  VAR_12 = 128;
 }




 switch (VAR_12) {
 case 131:

  VAR_11 = FUNC_3(VAR_8, VAR_10);
  break;

 case 128:

  if (VAR_8->walk_type & VAR_4) {






   VAR_11 = FUNC_4(VAR_8, ((void*)0));
  }

  break;

 case 129:
 case 130:

  break;

 default:
  break;
 }



 FUNC_10(VAR_11);

      error_exit:
 VAR_11 = FUNC_5(VAR_11, VAR_8);
 FUNC_10(VAR_11);
}

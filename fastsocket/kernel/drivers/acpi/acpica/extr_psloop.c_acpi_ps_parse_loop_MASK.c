
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ aml_opcode; int aml_offset; } ;
struct TYPE_16__ {int * data; void* length; } ;
union acpi_parse_object {TYPE_8__ common; TYPE_7__ named; } ;
typedef int u8 ;
typedef void* u32 ;
struct acpi_parse_state {int * aml; int * aml_end; TYPE_4__* scope; } ;
struct acpi_walk_state {int walk_type; scalar_t__ (* ascending_callback ) (struct acpi_walk_state*) ;scalar_t__ opcode; union acpi_parse_object* op; TYPE_9__* op_info; int arg_count; int arg_types; int aml_offset; int prev_arg_types; union acpi_parse_object* prev_op; TYPE_6__* control_state; struct acpi_parse_state parser_state; int * descending_callback; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_18__ {int flags; int name; } ;
struct TYPE_14__ {scalar_t__ state; } ;
struct TYPE_15__ {TYPE_5__ common; } ;
struct TYPE_12__ {TYPE_2__* op; } ;
struct TYPE_13__ {TYPE_3__ parse_scope; } ;
struct TYPE_10__ {scalar_t__ aml_opcode; } ;
struct TYPE_11__ {TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct acpi_walk_state*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_5 (struct acpi_walk_state*,int ) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_6 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct acpi_walk_state*,union acpi_parse_object**,scalar_t__) ;
 scalar_t__ FUNC_8 (struct acpi_walk_state*,int *,union acpi_parse_object**) ;
 scalar_t__ FUNC_9 (struct acpi_walk_state*,int *,union acpi_parse_object*) ;
 TYPE_9__* FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (struct acpi_parse_state*) ;
 scalar_t__ FUNC_12 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__) ;
 int FUNC_13 (struct acpi_parse_state*,union acpi_parse_object**,int *,int *) ;
 scalar_t__ FUNC_14 (struct acpi_parse_state*,union acpi_parse_object*,int ,int ) ;
 int VAR_21 ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (struct acpi_walk_state*) ;

acpi_status FUNC_17(struct acpi_walk_state *VAR_22)
{
 acpi_status VAR_23 = VAR_11;
 union acpi_parse_object *VAR_24 = ((void*)0);
 struct acpi_parse_state *VAR_25;
 u8 *VAR_26 = ((void*)0);

 FUNC_3(VAR_21, VAR_22);

 if (VAR_22->descending_callback == ((void*)0)) {
  FUNC_15(VAR_4);
 }

 VAR_25 = &VAR_22->parser_state;
 VAR_22->arg_types = 0;



 if (VAR_22->walk_type & VAR_2) {



  if (FUNC_11(VAR_25)) {




   if ((VAR_25->scope->parse_scope.op) &&
       ((VAR_25->scope->parse_scope.op->common.
         aml_opcode == VAR_15)
        || (VAR_25->scope->parse_scope.op->common.
     aml_opcode == VAR_18))
       && (VAR_22->control_state)
       && (VAR_22->control_state->common.state ==
    VAR_0)) {




    VAR_22->op = ((void*)0);
    VAR_23 =
        FUNC_5(VAR_22,
        FUNC_4
        (VAR_19));
    if (FUNC_2(VAR_23)
        && ((VAR_23 & VAR_6) !=
     VAR_5)) {
     if (VAR_23 == VAR_3) {
      FUNC_1((VAR_10, VAR_23,
        "Invoked method did not return a value"));

     }

     FUNC_1((VAR_10, VAR_23,
       "GetPredicate Failed"));
     FUNC_15(VAR_23);
    }

    VAR_23 =
        FUNC_12(VAR_22, VAR_24,
            VAR_23);
   }

   FUNC_13(VAR_25, &VAR_24,
       &VAR_22->arg_types,
       &VAR_22->arg_count);
   FUNC_0((VAR_1,
       "Popped scope, Op=%p\n", VAR_24));
  } else if (VAR_22->prev_op) {



   VAR_24 = VAR_22->prev_op;
   VAR_22->arg_types = VAR_22->prev_arg_types;
  }
 }




 while ((VAR_25->aml < VAR_25->aml_end) || (VAR_24)) {
  VAR_26 = VAR_25->aml;
  if (!VAR_24) {
   VAR_23 =
       FUNC_8(VAR_22, VAR_26, &VAR_24);
   if (FUNC_2(VAR_23)) {
    if (VAR_23 == VAR_7) {
     continue;
    }

    if (VAR_23 == VAR_8) {
     VAR_23 = VAR_11;
    }

    VAR_23 =
        FUNC_7(VAR_22, &VAR_24,
       VAR_23);
    if (FUNC_2(VAR_23)) {
     FUNC_15(VAR_23);
    }

    continue;
   }

   VAR_24->common.aml_offset = VAR_22->aml_offset;

   if (VAR_22->op_info) {
    FUNC_0((VAR_1,
        "Opcode %4.4X [%s] Op %p Aml %p AmlOffset %5.5X\n",
        (u32) VAR_24->common.aml_opcode,
        VAR_22->op_info->name, VAR_24,
        VAR_25->aml,
        VAR_24->common.aml_offset));
   }
  }





  VAR_22->arg_count = 0;



  if (VAR_22->arg_types) {



   VAR_23 =
       FUNC_9(VAR_22, VAR_26, VAR_24);
   if (FUNC_2(VAR_23)) {
    VAR_23 =
        FUNC_7(VAR_22, &VAR_24,
       VAR_23);
    if (FUNC_2(VAR_23)) {
     FUNC_15(VAR_23);
    }

    continue;
   }
  }



  if (VAR_22->arg_count) {




   VAR_23 = FUNC_14(VAR_25, VAR_24,
          VAR_22->arg_types,
          VAR_22->arg_count);
   if (FUNC_2(VAR_23)) {
    VAR_23 =
        FUNC_7(VAR_22, &VAR_24,
       VAR_23);
    if (FUNC_2(VAR_23)) {
     FUNC_15(VAR_23);
    }

    continue;
   }

   VAR_24 = ((void*)0);
   continue;
  }





  VAR_22->op_info =
      FUNC_10(VAR_24->common.aml_opcode);
  if (VAR_22->op_info->flags & VAR_16) {
   if (VAR_20) {
    VAR_20--;
   }

   if (VAR_24->common.aml_opcode == VAR_17 ||
       VAR_24->common.aml_opcode == VAR_14) {
    VAR_24->named.length =
        (u32) (VAR_25->aml - VAR_24->named.data);
   }
  }

  if (VAR_22->op_info->flags & VAR_13) {






   VAR_24->named.length =
       (u32) (VAR_25->aml - VAR_24->named.data);
  }

  if (VAR_24->common.aml_opcode == VAR_12) {





   VAR_24->named.length =
       (u32) (VAR_25->aml - VAR_24->named.data);
  }



  if (VAR_22->ascending_callback != ((void*)0)) {
   VAR_22->op = VAR_24;
   VAR_22->opcode = VAR_24->common.aml_opcode;

   VAR_23 = VAR_22->ascending_callback(VAR_22);
   VAR_23 =
       FUNC_12(VAR_22, VAR_24, VAR_23);
   if (VAR_23 == VAR_9) {
    VAR_23 = VAR_11;
   }
  }

  VAR_23 = FUNC_7(VAR_22, &VAR_24, VAR_23);
  if (FUNC_2(VAR_23)) {
   FUNC_15(VAR_23);
  }

 }

 VAR_23 = FUNC_6(VAR_22, VAR_24, VAR_23);
 FUNC_15(VAR_23);
}

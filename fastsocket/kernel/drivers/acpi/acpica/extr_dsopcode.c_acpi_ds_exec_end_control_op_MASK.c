
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int arg; } ;
struct TYPE_19__ {int aml_opcode; TYPE_2__ value; } ;
union acpi_parse_object {TYPE_8__ common; } ;
struct TYPE_18__ {int const opcode; int package_end; int aml_predicate_start; int loop_count; } ;
struct TYPE_12__ {int value; } ;
union acpi_generic_state {TYPE_7__ control; TYPE_1__ common; } ;
typedef int u8 ;
struct acpi_walk_state {union acpi_generic_state* control_state; int aml_last_while; TYPE_9__* return_desc; int num_operands; TYPE_9__** operands; TYPE_6__* results; int result_count; int last_predicate; } ;
typedef int acpi_status ;
struct TYPE_15__ {int class; } ;
struct TYPE_14__ {int type; } ;
struct TYPE_20__ {TYPE_4__ reference; TYPE_3__ common; } ;
struct TYPE_16__ {TYPE_9__** obj_desc; } ;
struct TYPE_17__ {TYPE_5__ results; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_9__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (struct acpi_walk_state*) ;
 int FUNC_7 (struct acpi_walk_state*,int ) ;
 int FUNC_8 (TYPE_9__**,struct acpi_walk_state*) ;
 int VAR_16 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (union acpi_generic_state*) ;
 union acpi_generic_state* FUNC_12 (union acpi_generic_state**) ;
 int FUNC_13 (TYPE_9__*) ;
 int VAR_17 ;

acpi_status
FUNC_14(struct acpi_walk_state * VAR_18,
       union acpi_parse_object * VAR_19)
{
 acpi_status VAR_20 = VAR_14;
 union acpi_generic_state *VAR_21;

 FUNC_4(VAR_17);

 switch (VAR_19->common.aml_opcode) {
 case 131:

  FUNC_1((VAR_0, "[IF_OP] Op=%p\n", VAR_19));





  VAR_18->last_predicate =
      (u8) VAR_18->control_state->common.value;





  VAR_21 =
      FUNC_12(&VAR_18->control_state);
  FUNC_11(VAR_21);
  break;

 case 132:

  break;

 case 128:

  FUNC_1((VAR_0, "[WHILE_OP] Op=%p\n", VAR_19));

  VAR_21 = VAR_18->control_state;
  if (VAR_21->common.value) {
   VAR_21->control.loop_count++;
   if (VAR_21->control.loop_count >
    VAR_2) {
    VAR_20 = VAR_7;
    break;
   }





   VAR_20 = VAR_11;
   VAR_18->aml_last_while =
       VAR_21->control.aml_predicate_start;
   break;
  }



  FUNC_1((VAR_0,
      "[WHILE_OP] termination! Op=%p\n", VAR_19));



  VAR_21 =
      FUNC_12(&VAR_18->control_state);
  FUNC_11(VAR_21);
  break;

 case 129:

  FUNC_1((VAR_0,
      "[RETURN_OP] Op=%p Arg=%p\n", VAR_19,
      VAR_19->common.value.arg));






  if (VAR_19->common.value.arg) {



   FUNC_6(VAR_18);



   VAR_20 =
       FUNC_7(VAR_18,
          VAR_19->common.value.arg);
   if (FUNC_3(VAR_20)) {
    return (VAR_20);
   }






   VAR_20 =
       FUNC_8(&VAR_18->operands[0],
           VAR_18);
   if (FUNC_3(VAR_20)) {
    return (VAR_20);
   }






   VAR_18->return_desc = VAR_18->operands[0];
  } else if (VAR_18->result_count) {



   FUNC_6(VAR_18);
   if ((FUNC_5
        (VAR_18->results->results.obj_desc[0]) ==
        VAR_1)
       && ((VAR_18->results->results.obj_desc[0])->
    common.type == VAR_5)
       && ((VAR_18->results->results.obj_desc[0])->
    reference.class != VAR_3)) {
    VAR_20 =
        FUNC_8(&VAR_18->
            results->results.
            obj_desc[0],
            VAR_18);
    if (FUNC_3(VAR_20)) {
     return (VAR_20);
    }
   }

   VAR_18->return_desc =
       VAR_18->results->results.obj_desc[0];
  } else {


   if (VAR_18->num_operands) {
    FUNC_13(VAR_18->
        operands[0]);
   }

   VAR_18->operands[0] = ((void*)0);
   VAR_18->num_operands = 0;
   VAR_18->return_desc = ((void*)0);
  }

  FUNC_1((VAR_0,
      "Completed RETURN_OP State=%p, RetVal=%p\n",
      VAR_18, VAR_18->return_desc));



  VAR_20 = VAR_12;
  break;

 case 130:


  break;

 case 134:






  FUNC_0(VAR_16 = VAR_15);
  FUNC_0(FUNC_9
       ("**break** Executed AML BreakPoint opcode\n"));



  VAR_20 = FUNC_10(VAR_4,
     "Executed AML Breakpoint opcode");
  break;

 case 135:
 case 133:



  while (VAR_18->control_state &&
         (VAR_18->control_state->control.opcode !=
   128)) {
   VAR_21 =
       FUNC_12(&VAR_18->
            control_state);
   FUNC_11(VAR_21);
  }



  if (!VAR_18->control_state) {
   return (VAR_8);
  }



  VAR_18->aml_last_while =
      VAR_18->control_state->control.package_end;



  if (VAR_19->common.aml_opcode == 135) {
   VAR_20 = VAR_9;
  } else {
   VAR_20 = VAR_10;
  }
  break;

 default:

  FUNC_2((VAR_13, "Unknown control opcode=%X Op=%p",
       VAR_19->common.aml_opcode, VAR_19));

  VAR_20 = VAR_6;
  break;
 }

 return (VAR_20);
}

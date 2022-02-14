
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {void* length; int * data; } ;
struct TYPE_12__ {int aml_opcode; TYPE_2__* parent; void* aml_offset; } ;
union acpi_parse_object {TYPE_4__ named; TYPE_3__ common; } ;
typedef int u8 ;
typedef void* u32 ;
struct TYPE_16__ {int * pkg_end; int * aml; int aml_start; } ;
struct acpi_walk_state {int parse_flags; TYPE_7__ parser_state; TYPE_6__* control_state; int arg_count; int pass_number; int owner_id; int arg_types; void* aml_offset; } ;
struct acpi_table_header {int dummy; } ;
struct acpi_opcode_info {int class; } ;
typedef int acpi_status ;
struct TYPE_14__ {int * package_end; } ;
struct TYPE_15__ {TYPE_5__ control; } ;
struct TYPE_10__ {int aml_opcode; } ;
struct TYPE_11__ {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;





 int VAR_7 ;


 int VAR_8 ;




 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (union acpi_parse_object*,union acpi_parse_object*) ;
 int FUNC_8 (struct acpi_walk_state*,TYPE_7__*,int ,union acpi_parse_object**) ;
 int FUNC_9 (struct acpi_walk_state*,TYPE_7__*,union acpi_parse_object*,int) ;
 int FUNC_10 (TYPE_7__*,int ,union acpi_parse_object*) ;
 struct acpi_opcode_info* FUNC_11 (int) ;
 int FUNC_12 (int *,int *,int ) ;
 int VAR_9 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static acpi_status
FUNC_14(struct acpi_walk_state *VAR_10,
        u8 * VAR_11, union acpi_parse_object *VAR_12)
{
 acpi_status VAR_13 = VAR_5;
 union acpi_parse_object *VAR_14 = ((void*)0);
 const struct acpi_opcode_info *VAR_15;

 FUNC_2(VAR_9, VAR_10);

 switch (VAR_12->common.aml_opcode) {
 case 139:
 case 128:
 case 138:
 case 132:
 case 131:



  FUNC_10(&(VAR_10->parser_state),
         FUNC_5(VAR_10->
         arg_types),
         VAR_12);
  break;

 case 135:

  VAR_13 =
      FUNC_9(VAR_10,
           &(VAR_10->parser_state), VAR_12,
           1);
  if (FUNC_1(VAR_13)) {
   FUNC_13(VAR_13);
  }

  VAR_10->arg_types = 0;
  break;

 default:



  while (FUNC_5(VAR_10->arg_types)
         && !VAR_10->arg_count) {
   VAR_10->aml_offset =
       (u32) FUNC_3(VAR_10->parser_state.aml,
      VAR_10->parser_state.
      aml_start);

   VAR_13 =
       FUNC_8(VAR_10,
       &(VAR_10->parser_state),
       FUNC_5
       (VAR_10->arg_types), &VAR_14);
   if (FUNC_1(VAR_13)) {
    FUNC_13(VAR_13);
   }

   if (VAR_14) {
    VAR_14->common.aml_offset = VAR_10->aml_offset;
    FUNC_7(VAR_12, VAR_14);
   }

   FUNC_6(VAR_10->arg_types);
  }





  if ((VAR_10->pass_number <= VAR_2) &&
      ((VAR_10->parse_flags & VAR_3) == 0)) {







   switch (VAR_12->common.aml_opcode) {
   case 136:
   case 137:
   case 129:







    if (VAR_10->pass_number ==
        VAR_1) {
     FUNC_12(VAR_11,
         VAR_10->
         parser_state.
         pkg_end -
         VAR_11,
         VAR_10->
         owner_id);
    }

    FUNC_0((VAR_0,
        "Pass1: Skipping an If/Else/While body\n"));



    VAR_10->parser_state.aml =
        VAR_10->parser_state.pkg_end;
    VAR_10->arg_count = 0;
    break;

   default:






    if ((VAR_10->pass_number ==
         VAR_1)
        && (VAR_12->common.parent->common.aml_opcode ==
     VAR_8)) {
     VAR_15 =
         FUNC_11(VAR_12->common.
            aml_opcode);
     if ((VAR_15->class ==
          VAR_6) && (!VAR_14)) {
      FUNC_4((VAR_4,
             "Detected an unsupported executable opcode "
             "at module-level: [0x%.4X] at table offset 0x%.4X",
             VAR_12->common.aml_opcode,
             (u32)((VAR_11 - VAR_10->parser_state.aml_start)
        + sizeof(struct acpi_table_header))));
     }
    }
    break;
   }
  }



  switch (VAR_12->common.aml_opcode) {
  case 134:






   VAR_12->named.data = VAR_10->parser_state.aml;
   VAR_12->named.length = (u32)
       (VAR_10->parser_state.pkg_end -
        VAR_10->parser_state.aml);



   VAR_10->parser_state.aml =
       VAR_10->parser_state.pkg_end;
   VAR_10->arg_count = 0;
   break;

  case 140:
  case 133:
  case 130:

   if ((VAR_12->common.parent) &&
       (VAR_12->common.parent->common.aml_opcode ==
        VAR_7)
       && (VAR_10->pass_number <=
    VAR_2)) {




    VAR_12->named.data = VAR_11;
    VAR_12->named.length = (u32)
        (VAR_10->parser_state.pkg_end -
         VAR_11);



    VAR_10->parser_state.aml =
        VAR_10->parser_state.pkg_end;
    VAR_10->arg_count = 0;
   }
   break;

  case 129:

   if (VAR_10->control_state) {
    VAR_10->control_state->control.package_end =
        VAR_10->parser_state.pkg_end;
   }
   break;

  default:


   break;
  }

  break;
 }

 FUNC_13(VAR_5);
}

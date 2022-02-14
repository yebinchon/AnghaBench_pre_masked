
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int aml_opcode; } ;
union acpi_parse_object {TYPE_5__ common; } ;
struct TYPE_10__ {int opcode; int package_end; int aml_predicate_start; } ;
union acpi_generic_state {TYPE_4__ control; } ;
struct TYPE_9__ {int pkg_end; int aml; } ;
struct acpi_walk_state {int last_predicate; TYPE_6__* control_state; TYPE_3__ parser_state; } ;
typedef int acpi_status ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {int aml_predicate_start; } ;
struct TYPE_12__ {TYPE_2__ common; TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 union acpi_generic_state* FUNC_2 () ;
 int FUNC_3 (TYPE_6__**,union acpi_generic_state*) ;
 int VAR_5 ;

acpi_status
FUNC_4(struct acpi_walk_state *VAR_6,
         union acpi_parse_object *VAR_7)
{
 acpi_status VAR_8 = VAR_4;
 union acpi_generic_state *VAR_9;

 FUNC_1(VAR_5);

 FUNC_0((VAR_1, "Op=%p Opcode=%2.2X State=%p\n", VAR_7,
     VAR_7->common.aml_opcode, VAR_6));

 switch (VAR_7->common.aml_opcode) {
 case 128:





  if (VAR_6->control_state) {
   if (VAR_6->control_state->control.aml_predicate_start
    == (VAR_6->parser_state.aml - 1)) {



    VAR_6->control_state->common.state =
        VAR_0;
    break;
   }
  }



 case 130:






  VAR_9 = FUNC_2();
  if (!VAR_9) {
   VAR_8 = VAR_3;
   break;
  }




  VAR_9->control.aml_predicate_start =
      VAR_6->parser_state.aml - 1;
  VAR_9->control.package_end =
      VAR_6->parser_state.pkg_end;
  VAR_9->control.opcode = VAR_7->common.aml_opcode;



  FUNC_3(&VAR_6->control_state,
        VAR_9);
  break;

 case 131:




  if (VAR_6->last_predicate) {
   VAR_8 = VAR_2;
  }

  break;

 case 129:

  break;

 default:
  break;
 }

 return (VAR_8);
}

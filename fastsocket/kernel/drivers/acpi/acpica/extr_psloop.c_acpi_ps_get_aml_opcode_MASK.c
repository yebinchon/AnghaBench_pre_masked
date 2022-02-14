
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int aml; int aml_start; } ;
struct acpi_walk_state {TYPE_2__* op_info; int arg_types; int opcode; TYPE_1__ parser_state; scalar_t__ aml_offset; } ;
typedef int acpi_status ;
struct TYPE_4__ {int class; int parse_args; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static acpi_status FUNC_8(struct acpi_walk_state *VAR_6)
{

 FUNC_2(VAR_5, VAR_6);

 VAR_6->aml_offset =
     (u32) FUNC_3(VAR_6->parser_state.aml,
    VAR_6->parser_state.aml_start);
 VAR_6->opcode = FUNC_6(&(VAR_6->parser_state));







 VAR_6->op_info = FUNC_4(VAR_6->opcode);

 switch (VAR_6->op_info->class) {
 case 130:
 case 129:




  VAR_6->opcode = VAR_3;
  VAR_6->arg_types = VAR_4;
  break;

 case 128:



  FUNC_1((VAR_1,
       "Found unknown opcode %X at AML address %p offset %X, ignoring",
       VAR_6->opcode, VAR_6->parser_state.aml,
       VAR_6->aml_offset));

  FUNC_0(VAR_6->parser_state.aml, 128);



  VAR_6->parser_state.aml++;
  FUNC_7(VAR_0);

 default:



  VAR_6->parser_state.aml +=
      FUNC_5(VAR_6->opcode);
  VAR_6->arg_types = VAR_6->op_info->parse_args;
  break;
 }

 FUNC_7(VAR_2);
}

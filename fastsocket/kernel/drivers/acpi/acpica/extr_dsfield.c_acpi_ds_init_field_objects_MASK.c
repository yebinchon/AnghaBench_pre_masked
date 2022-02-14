
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ aml_opcode; union acpi_parse_object* next; struct acpi_namespace_node* node; } ;
struct TYPE_3__ {int name; } ;
union acpi_parse_object {TYPE_2__ common; TYPE_1__ named; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {int parse_flags; int opcode; int scope_info; scalar_t__ method_node; } ;
struct acpi_namespace_node {int dummy; } ;
typedef scalar_t__ acpi_status ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,union acpi_parse_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;



 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,int,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 union acpi_parse_object* FUNC_4 (union acpi_parse_object*,int) ;
 int VAR_16 ;
 int FUNC_5 (scalar_t__) ;

acpi_status
FUNC_6(union acpi_parse_object *VAR_17,
      struct acpi_walk_state *VAR_18)
{
 acpi_status VAR_19;
 union acpi_parse_object *VAR_20 = ((void*)0);
 struct acpi_namespace_node *VAR_21;
 u8 VAR_22 = 0;
 u32 VAR_23;

 FUNC_2(VAR_16, VAR_17);



 if (!(VAR_18->parse_flags & VAR_6)) {
  if (VAR_18->parse_flags & VAR_5) {



   FUNC_5(VAR_14);
  }

  FUNC_5(VAR_12);
 }





 switch (VAR_18->opcode) {
 case 129:
  VAR_20 = FUNC_4(VAR_17, 2);
  VAR_22 = VAR_10;
  break;

 case 130:
  VAR_20 = FUNC_4(VAR_17, 4);
  VAR_22 = VAR_8;
  break;

 case 128:
  VAR_20 = FUNC_4(VAR_17, 3);
  VAR_22 = VAR_9;
  break;

 default:
  FUNC_5(VAR_13);
 }



 VAR_23 = VAR_3 | VAR_1 |
     VAR_2;





 if (VAR_18->method_node &&
     !(VAR_18->parse_flags & VAR_7)) {
  VAR_23 |= VAR_4;
 }





 while (VAR_20) {




  if (VAR_20->common.aml_opcode == VAR_15) {
   VAR_19 = FUNC_3(VAR_18->scope_info,
      (char *)&VAR_20->named.name, VAR_22,
      VAR_0, VAR_23,
      VAR_18, &VAR_21);
   if (FUNC_1(VAR_19)) {
    FUNC_0((char *)&VAR_20->named.name,
           VAR_19);
    if (VAR_19 != VAR_11) {
     FUNC_5(VAR_19);
    }



    VAR_19 = VAR_14;
   }

   VAR_20->common.node = VAR_21;
  }



  VAR_20 = VAR_20->common.next;
 }

 FUNC_5(VAR_14);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_4__ {int ascii; } ;
struct TYPE_5__ {int type; TYPE_1__ name; } ;
union acpi_operand_object {TYPE_3__ common; TYPE_2__ node; } ;
typedef scalar_t__ u32 ;
struct acpi_predefined_data {int node_flags; int pathname; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (union acpi_operand_object*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;





 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct acpi_predefined_data*,union acpi_operand_object*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (struct acpi_predefined_data*,scalar_t__,scalar_t__,union acpi_operand_object**) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static acpi_status
FUNC_8(struct acpi_predefined_data *VAR_10,
     union acpi_operand_object **VAR_11,
     u32 VAR_12, u32 VAR_13)
{
 union acpi_operand_object *VAR_14 = *VAR_11;
 acpi_status VAR_15 = VAR_9;
 u32 VAR_16;
 char VAR_17[48];





 if (!VAR_14) {
  goto type_error_exit;
 }



 if (FUNC_0(VAR_14) == VAR_0) {
  FUNC_2((VAR_8, VAR_10->pathname, VAR_10->node_flags,
          "Invalid return type - Found a Namespace node [%4.4s] type %s",
          VAR_14->node.name.ascii,
          FUNC_7(VAR_14->node.
           type)));
  return (VAR_7);
 }
 switch (VAR_14->common.type) {
 case 131:
  VAR_16 = VAR_3;
  break;

 case 132:
  VAR_16 = VAR_2;
  break;

 case 128:
  VAR_16 = VAR_6;
  break;

 case 129:
  VAR_16 = VAR_4;
  break;

 case 130:
  VAR_16 = VAR_5;
  break;

 default:


  goto type_error_exit;
 }



 if (!(VAR_16 & VAR_12)) {



  VAR_15 = FUNC_5(VAR_10, VAR_12,
            VAR_13,
            VAR_11);
  if (FUNC_1(VAR_15)) {
   return (VAR_9);
  }
  goto type_error_exit;
 }



 if (VAR_14->common.type == 130) {
  VAR_15 = FUNC_3(VAR_10, VAR_14);
 }

 return (VAR_15);

      type_error_exit:



 FUNC_4(VAR_17, VAR_12);

 if (VAR_13 == VAR_1) {
  FUNC_2((VAR_8, VAR_10->pathname, VAR_10->node_flags,
          "Return type mismatch - found %s, expected %s",
          FUNC_6
          (VAR_14), VAR_17));
 } else {
  FUNC_2((VAR_8, VAR_10->pathname, VAR_10->node_flags,
          "Return Package type mismatch at index %u - "
          "found %s, expected %s", VAR_13,
          FUNC_6
          (VAR_14), VAR_17));
 }

 return (VAR_7);
}

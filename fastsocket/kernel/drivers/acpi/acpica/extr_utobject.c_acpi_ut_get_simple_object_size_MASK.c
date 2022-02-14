
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
struct TYPE_7__ {int class; int node; } ;
struct TYPE_6__ {int length; } ;
struct TYPE_5__ {int length; } ;
union acpi_operand_object {TYPE_4__ common; TYPE_3__ reference; TYPE_2__ buffer; TYPE_1__ string; } ;
typedef union acpi_object {int dummy; } acpi_object ;
typedef int acpi_status ;
typedef int acpi_size ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_operand_object*) ;
 scalar_t__ FUNC_2 (union acpi_operand_object*) ;

 int FUNC_3 (int) ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;

__attribute__((used)) static acpi_status
FUNC_8(union acpi_operand_object *VAR_6,
          acpi_size * VAR_7)
{
 acpi_size VAR_8;
 acpi_size VAR_9;
 acpi_status VAR_10 = VAR_3;

 FUNC_1(VAR_5, VAR_6);





 if (!VAR_6) {
  *VAR_7 = sizeof(union acpi_object);
  FUNC_7(VAR_3);
 }



 VAR_8 = sizeof(union acpi_object);

 if (FUNC_2(VAR_6) == VAR_0) {



  *VAR_7 = FUNC_3(VAR_8);
  FUNC_7(VAR_10);
 }







 switch (VAR_6->common.type) {
 case 128:

  VAR_8 += (acpi_size) VAR_6->string.length + 1;
  break;

 case 133:

  VAR_8 += (acpi_size) VAR_6->buffer.length;
  break;

 case 132:
 case 129:
 case 130:



  break;

 case 131:

  switch (VAR_6->reference.class) {
  case 134:





   VAR_9 =
       FUNC_4(VAR_6->
       reference.node);
   if (!VAR_9) {
    FUNC_7(VAR_1);
   }

   VAR_8 += FUNC_3(VAR_9);
   break;

  default:






   FUNC_0((VAR_2,
        "Cannot convert to external object - "
        "unsupported Reference Class [%s] %X in object %p",
        FUNC_6(VAR_6),
        VAR_6->reference.class,
        VAR_6));
   VAR_10 = VAR_4;
   break;
  }
  break;

 default:

  FUNC_0((VAR_2, "Cannot convert to external object - "
       "unsupported type [%s] %X in object %p",
       FUNC_5(VAR_6),
       VAR_6->common.type, VAR_6));
  VAR_10 = VAR_4;
  break;
 }







 *VAR_7 = FUNC_3(VAR_8);
 FUNC_7(VAR_10);
}

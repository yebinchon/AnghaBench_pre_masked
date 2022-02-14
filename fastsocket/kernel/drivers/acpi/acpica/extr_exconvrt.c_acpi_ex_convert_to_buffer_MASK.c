
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int type; int flags; } ;
struct TYPE_7__ {int length; scalar_t__ pointer; } ;
struct TYPE_6__ {int * pointer; } ;
struct TYPE_5__ {int value; } ;
union acpi_operand_object {TYPE_4__ common; TYPE_3__ string; TYPE_2__ buffer; TYPE_1__ integer; } ;
typedef int u8 ;
typedef int acpi_status ;
typedef int acpi_size ;


 int FUNC_0 (int ,union acpi_operand_object*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (char*,char*,int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 union acpi_operand_object* FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(union acpi_operand_object *VAR_6,
     union acpi_operand_object **VAR_7)
{
 union acpi_operand_object *VAR_8;
 u8 *VAR_9;

 FUNC_0(VAR_5, VAR_6);

 switch (VAR_6->common.type) {
 case 130:



  *VAR_7 = VAR_6;
  FUNC_4(VAR_1);

 case 129:





  VAR_8 =
      FUNC_3(VAR_4);
  if (!VAR_8) {
   FUNC_4(VAR_0);
  }



  VAR_9 = VAR_8->buffer.pointer;
  FUNC_1(VAR_9,
       &VAR_6->integer.value,
       VAR_4);
  break;

 case 128:
  VAR_8 = FUNC_3((acpi_size)
          VAR_6->string.
          length + 1);
  if (!VAR_8) {
   FUNC_4(VAR_0);
  }



  VAR_9 = VAR_8->buffer.pointer;
  FUNC_2((char *)VAR_9, (char *)VAR_6->string.pointer,
        VAR_6->string.length);
  break;

 default:
  FUNC_4(VAR_2);
 }



 VAR_8->common.flags |= VAR_3;
 *VAR_7 = VAR_8;
 FUNC_4(VAR_1);
}

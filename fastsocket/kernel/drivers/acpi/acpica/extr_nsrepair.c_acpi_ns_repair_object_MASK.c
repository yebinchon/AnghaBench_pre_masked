
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int type; int reference_count; } ;
struct TYPE_5__ {size_t length; int * pointer; } ;
struct TYPE_4__ {int pointer; } ;
union acpi_operand_object {TYPE_3__ common; TYPE_2__ buffer; TYPE_1__ string; } ;
typedef int u32 ;
struct acpi_predefined_data {int flags; int node_flags; int pathname; } ;
typedef int acpi_status ;
typedef size_t acpi_size ;


 int FUNC_0 (int ,int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 union acpi_operand_object* FUNC_2 (size_t) ;
 int FUNC_3 (union acpi_operand_object*) ;

acpi_status
FUNC_4(struct acpi_predefined_data *VAR_7,
        u32 VAR_8,
        u32 VAR_9,
        union acpi_operand_object **VAR_10)
{
 union acpi_operand_object *VAR_11 = *VAR_10;
 union acpi_operand_object *VAR_12;
 acpi_size VAR_13;

 switch (VAR_11->common.type) {
 case 128:



  if (!(VAR_8 & VAR_2)) {
   return (VAR_3);
  }







  VAR_13 = 0;
  while ((VAR_13 < VAR_11->buffer.length) &&
         (VAR_11->buffer.pointer[VAR_13])) {
   VAR_13++;
  }



  VAR_12 = FUNC_2(VAR_13);
  if (!VAR_12) {
   return (VAR_5);
  }





  FUNC_0(VAR_12->string.pointer,
       VAR_11->buffer.pointer, VAR_13);







  if (VAR_9 != VAR_0) {
   VAR_12->common.reference_count =
       VAR_11->common.reference_count;

   if (VAR_11->common.reference_count > 1) {
    VAR_11->common.reference_count--;
   }

   FUNC_1((VAR_4, VAR_7->pathname,
           VAR_7->node_flags,
           "Converted Buffer to expected String at index %u",
           VAR_9));
  } else {
   FUNC_1((VAR_4, VAR_7->pathname,
           VAR_7->node_flags,
           "Converted Buffer to expected String"));
  }



  FUNC_3(VAR_11);
  *VAR_10 = VAR_12;
  VAR_7->flags |= VAR_1;
  return (VAR_6);

 default:
  break;
 }

 return (VAR_3);
}

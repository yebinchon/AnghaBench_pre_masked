
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
struct TYPE_8__ {size_t index; void* this_target_obj; TYPE_3__* source_object; } ;
union acpi_generic_state {TYPE_4__ pkg; } ;
typedef size_t u32 ;
typedef int acpi_status ;
typedef int (* acpi_pkg_callback ) (int ,union acpi_operand_object*,union acpi_generic_state*,void*) ;
struct TYPE_6__ {scalar_t__ count; scalar_t__* elements; } ;
struct TYPE_7__ {TYPE_2__ package; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (union acpi_operand_object*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 union acpi_generic_state* FUNC_3 (union acpi_operand_object*,void*,int ) ;
 int FUNC_4 (union acpi_generic_state*) ;
 union acpi_generic_state* FUNC_5 (union acpi_generic_state**) ;
 int FUNC_6 (union acpi_generic_state**,union acpi_generic_state*) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;

acpi_status
FUNC_8(union acpi_operand_object * VAR_8,
     void *VAR_9,
     acpi_pkg_callback VAR_10, void *VAR_11)
{
 acpi_status VAR_12 = VAR_6;
 union acpi_generic_state *VAR_13 = ((void*)0);
 union acpi_generic_state *VAR_14;
 u32 VAR_15;
 union acpi_operand_object *VAR_16;

 FUNC_1(VAR_7);

 VAR_14 = FUNC_3(VAR_8, VAR_9, 0);
 if (!VAR_14) {
  FUNC_7(VAR_5);
 }

 while (VAR_14) {



  VAR_15 = VAR_14->pkg.index;
  VAR_16 = (union acpi_operand_object *)
      VAR_14->pkg.source_object->package.elements[VAR_15];
  if ((!VAR_16) ||
      (FUNC_2(VAR_16) !=
       VAR_2)
      || (VAR_16->common.type != VAR_3)) {
   VAR_12 =
       VAR_10(VAR_1,
       VAR_16, VAR_14, VAR_11);
   if (FUNC_0(VAR_12)) {
    FUNC_7(VAR_12);
   }

   VAR_14->pkg.index++;
   while (VAR_14->pkg.index >=
          VAR_14->pkg.source_object->package.count) {







    FUNC_4(VAR_14);
    VAR_14 = FUNC_5(&VAR_13);



    if (!VAR_14) {





     FUNC_7(VAR_6);
    }





    VAR_14->pkg.index++;
   }
  } else {


   VAR_12 =
       VAR_10(VAR_0,
       VAR_16, VAR_14, VAR_11);
   if (FUNC_0(VAR_12)) {
    FUNC_7(VAR_12);
   }





   FUNC_6(&VAR_13, VAR_14);
   VAR_14 = FUNC_3(VAR_16,
        VAR_14->pkg.
        this_target_obj, 0);
   if (!VAR_14) {



    while (VAR_13) {
     VAR_14 =
         FUNC_5
         (&VAR_13);
     FUNC_4(VAR_14);
    }
    FUNC_7(VAR_5);
   }
  }
 }



 FUNC_7(VAR_4);
}

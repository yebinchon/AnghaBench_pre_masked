
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int type; int flags; } ;
struct TYPE_9__ {int os_mutex; void* sync_level; struct acpi_namespace_node* node; } ;
struct TYPE_8__ {int * pointer; int length; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int implementation; int method_flags; void* param_count; } ;
union acpi_operand_object {TYPE_5__ common; TYPE_4__ mutex; TYPE_3__ string; TYPE_2__ integer; TYPE_1__ method; } ;
typedef void* u8 ;
typedef int u32 ;
struct acpi_predefined_names {int type; scalar_t__ name; int * val; } ;
struct acpi_namespace_node {void* value; } ;
typedef int * acpi_string ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 union acpi_operand_object* VAR_12 ;
 int VAR_13 ;
 struct acpi_predefined_names* VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (struct acpi_namespace_node*,union acpi_operand_object*,int ) ;
 int FUNC_10 (int *,char*,int ,int *) ;
 int FUNC_11 (int *,scalar_t__,int,int ,int ,int *,struct acpi_namespace_node**) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,int ,int *) ;
 int FUNC_14 (struct acpi_predefined_names const*,int **) ;
 int FUNC_15 (int ) ;
 union acpi_operand_object* FUNC_16 (int) ;
 int VAR_17 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (union acpi_operand_object*) ;
 int VAR_18 ;
 int FUNC_19 (int ) ;

acpi_status FUNC_20(void)
{
 acpi_status VAR_19;
 const struct acpi_predefined_names *VAR_20 = ((void*)0);
 struct acpi_namespace_node *VAR_21;
 union acpi_operand_object *VAR_22;
 acpi_string VAR_23 = ((void*)0);

 FUNC_4(VAR_18);

 VAR_19 = FUNC_15(VAR_2);
 if (FUNC_3(VAR_19)) {
  FUNC_19(VAR_19);
 }





 if (VAR_15) {
  VAR_19 = VAR_6;
  goto unlock_and_exit;
 }





 VAR_15 = &VAR_16;



 FUNC_0((VAR_0,
     "Entering predefined entries into namespace\n"));

 for (VAR_20 = VAR_14; VAR_20->name; VAR_20++) {



  if (!FUNC_5(VAR_20->name, "_OSI")
      && !VAR_10) {
   continue;
  }

  VAR_19 = FUNC_11(((void*)0), VAR_20->name, VAR_20->type,
     VAR_1,
     VAR_3, ((void*)0), &VAR_21);

  if (FUNC_3(VAR_19) || (!VAR_21)) {
   FUNC_2((VAR_4, VAR_19,
     "Could not create predefined name %s",
     VAR_20->name));
  }





  if (VAR_20->val) {
   VAR_19 = FUNC_14(VAR_20, &VAR_23);
   if (FUNC_3(VAR_19)) {
    FUNC_1((VAR_4,
         "Could not override predefined %s",
         VAR_20->name));
   }

   if (!VAR_23) {
    VAR_23 = VAR_20->val;
   }





   VAR_22 =
       FUNC_16(VAR_20->type);
   if (!VAR_22) {
    VAR_19 = VAR_5;
    goto unlock_and_exit;
   }






   switch (VAR_20->type) {
   case 130:
    VAR_22->method.param_count =
        (u8) FUNC_8(VAR_23);
    VAR_22->common.flags |= VAR_8;
    VAR_22->method.method_flags =
        VAR_7;
    VAR_22->method.implementation =
        VAR_17;

    break;

   case 131:

    VAR_22->integer.value = FUNC_8(VAR_23);
    break;

   case 128:



    VAR_22->string.length =
        (u32) FUNC_6(VAR_23);
    VAR_22->string.pointer = VAR_23;
    VAR_22->common.flags |= VAR_9;
    break;

   case 129:

    VAR_22->mutex.node = VAR_21;
    VAR_22->mutex.sync_level =
        (u8) (FUNC_8(VAR_23) - 1);



    VAR_19 =
        FUNC_12(&VAR_22->mutex.
        os_mutex);
    if (FUNC_3(VAR_19)) {
     FUNC_18(VAR_22);
     goto unlock_and_exit;
    }



    if (FUNC_5(VAR_20->name, "_GL_") == 0) {
     VAR_12 = VAR_22;



     VAR_19 =
         FUNC_13(1, 0,
             &VAR_13);
     if (FUNC_3(VAR_19)) {
      FUNC_18
          (VAR_22);
      goto unlock_and_exit;
     }
    }
    break;

   default:

    FUNC_1((VAR_4,
         "Unsupported initial type value %X",
         VAR_20->type));
    FUNC_18(VAR_22);
    VAR_22 = ((void*)0);
    continue;
   }



   VAR_19 = FUNC_9(VAR_21, VAR_22,
             VAR_22->common.type);



   FUNC_18(VAR_22);
  }
 }

      unlock_and_exit:
 (void)FUNC_17(VAR_2);



 if (FUNC_7(VAR_19)) {
  VAR_19 = FUNC_10(((void*)0), "\\_GPE", VAR_3,
       &VAR_11);
 }

 FUNC_19(VAR_19);
}

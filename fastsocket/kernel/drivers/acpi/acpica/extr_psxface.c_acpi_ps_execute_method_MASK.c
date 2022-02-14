
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
struct acpi_walk_state {TYPE_4__* implicit_return_obj; int method_desc; int parser_state; scalar_t__ return_desc; int parse_flags; } ;
struct acpi_evaluate_info {scalar_t__ return_object; TYPE_7__* obj_desc; int pass_number; TYPE_5__* resolved_node; } ;
typedef int acpi_status ;
struct TYPE_9__ {int flags; int method_flags; int (* implementation ) (struct acpi_walk_state*) ;int aml_length; int aml_start; int owner_id; } ;
struct TYPE_13__ {TYPE_2__ method; } ;
struct TYPE_8__ {int ascii; } ;
struct TYPE_12__ {TYPE_1__ name; } ;
struct TYPE_10__ {scalar_t__ value; } ;
struct TYPE_11__ {TYPE_3__ integer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
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
 int FUNC_4 (TYPE_5__*,TYPE_7__*,int *) ;
 struct acpi_walk_state* FUNC_5 (int ,int *,int *,int *) ;
 int FUNC_6 (struct acpi_walk_state*) ;
 int FUNC_7 (struct acpi_walk_state*,union acpi_parse_object*,TYPE_5__*,int ,int ,struct acpi_evaluate_info*,int ) ;
 int FUNC_8 (struct acpi_walk_state*) ;
 int FUNC_9 (int ,struct acpi_walk_state*) ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int *) ;
 union acpi_parse_object* FUNC_11 () ;
 int FUNC_12 (union acpi_parse_object*) ;
 int FUNC_13 (struct acpi_walk_state*) ;
 int FUNC_14 (struct acpi_evaluate_info*) ;
 int FUNC_15 (struct acpi_evaluate_info*) ;
 int FUNC_16 (struct acpi_evaluate_info*,int ) ;
 TYPE_4__* FUNC_17 (int ) ;
 int VAR_12 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct acpi_walk_state*) ;

acpi_status FUNC_20(struct acpi_evaluate_info *VAR_13)
{
 acpi_status VAR_14;
 union acpi_parse_object *VAR_15;
 struct acpi_walk_state *VAR_16;

 FUNC_3(VAR_12);



 if (!VAR_13 || !VAR_13->resolved_node) {
  FUNC_18(VAR_6);
 }



 VAR_14 =
     FUNC_4(VAR_13->resolved_node, VAR_13->obj_desc,
        ((void*)0));
 if (FUNC_2(VAR_14)) {
  FUNC_18(VAR_14);
 }




 FUNC_16(VAR_13, VAR_10);



 FUNC_14(VAR_13);




 FUNC_0((VAR_0,
     "**** Begin Method Parse/Execute [%4.4s] **** Node=%p Obj=%p\n",
     VAR_13->resolved_node->name.ascii, VAR_13->resolved_node,
     VAR_13->obj_desc));



 VAR_15 = FUNC_11();
 if (!VAR_15) {
  VAR_14 = VAR_5;
  goto cleanup;
 }



 VAR_13->pass_number = VAR_1;
 VAR_16 =
     FUNC_5(VAR_13->obj_desc->method.owner_id, ((void*)0),
          ((void*)0), ((void*)0));
 if (!VAR_16) {
  VAR_14 = VAR_5;
  goto cleanup;
 }

 VAR_14 = FUNC_7(VAR_16, VAR_15, VAR_13->resolved_node,
           VAR_13->obj_desc->method.aml_start,
           VAR_13->obj_desc->method.aml_length, VAR_13,
           VAR_13->pass_number);
 if (FUNC_2(VAR_14)) {
  FUNC_6(VAR_16);
  goto cleanup;
 }

 if (VAR_13->obj_desc->method.flags & VAR_8) {
  VAR_16->parse_flags |= VAR_2;
 }



 if (VAR_13->obj_desc->method.method_flags & VAR_7) {
  VAR_14 = VAR_13->obj_desc->method.implementation(VAR_16);
  VAR_13->return_object = VAR_16->return_desc;



  FUNC_8(VAR_16);
  FUNC_10(&VAR_16->parser_state);
  FUNC_9(VAR_16->method_desc,
       VAR_16);
  FUNC_6(VAR_16);
  goto cleanup;
 }





 if (VAR_11) {
  VAR_16->implicit_return_obj =
      FUNC_17(VAR_3);
  if (!VAR_16->implicit_return_obj) {
   VAR_14 = VAR_5;
   FUNC_6(VAR_16);
   goto cleanup;
  }

  VAR_16->implicit_return_obj->integer.value = 0;
 }



 VAR_14 = FUNC_13(VAR_16);



      cleanup:
 FUNC_12(VAR_15);



 FUNC_15(VAR_13);



 FUNC_16(VAR_13, VAR_9);



 if (FUNC_2(VAR_14)) {
  FUNC_18(VAR_14);
 }





 if (VAR_13->return_object) {
  FUNC_0((VAR_0, "Method returned ObjDesc=%p\n",
      VAR_13->return_object));
  FUNC_1(VAR_13->return_object);

  VAR_14 = VAR_4;
 }

 FUNC_18(VAR_14);
}

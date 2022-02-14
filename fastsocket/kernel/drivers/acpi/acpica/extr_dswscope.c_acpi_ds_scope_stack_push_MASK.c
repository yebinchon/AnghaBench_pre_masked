
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; int descriptor_type; } ;
struct TYPE_3__ {struct acpi_namespace_node* node; } ;
union acpi_generic_state {TYPE_2__ common; TYPE_1__ scope; } ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct acpi_walk_state {union acpi_generic_state* scope_info; scalar_t__ scope_depth; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union acpi_generic_state* FUNC_5 () ;
 int FUNC_6 (struct acpi_namespace_node*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (union acpi_generic_state**,union acpi_generic_state*) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(struct acpi_namespace_node *VAR_7,
    acpi_object_type VAR_8,
    struct acpi_walk_state *VAR_9)
{
 union acpi_generic_state *VAR_10;
 union acpi_generic_state *VAR_11;

 FUNC_3(VAR_6);

 if (!VAR_7) {



  FUNC_2((VAR_3, "Null scope parameter"));
  FUNC_10(VAR_2);
 }



 if (!FUNC_9(VAR_8)) {
  FUNC_4((VAR_3, "Invalid object type: 0x%X", VAR_8));
 }



 VAR_10 = FUNC_5();
 if (!VAR_10) {
  FUNC_10(VAR_4);
 }



 VAR_10->common.descriptor_type = VAR_1;
 VAR_10->scope.node = VAR_7;
 VAR_10->common.value = (u16) VAR_8;

 VAR_9->scope_depth++;

 FUNC_0((VAR_0,
     "[%.2d] Pushed scope ",
     (u32) VAR_9->scope_depth));

 VAR_11 = VAR_9->scope_info;
 if (VAR_11) {
  FUNC_1((VAR_0,
          "[%4.4s] (%s)",
          FUNC_6(VAR_11->
           scope.node),
          FUNC_7(VAR_11->
           common.value)));
 } else {
  FUNC_1((VAR_0, "[\\___] (%s)", "ROOT"));
 }

 FUNC_1((VAR_0,
         ", New scope -> [%4.4s] (%s)\n",
         FUNC_6(VAR_10->scope.node),
         FUNC_7(VAR_10->common.value)));



 FUNC_8(&VAR_9->scope_info, VAR_10);
 FUNC_10(VAR_5);
}

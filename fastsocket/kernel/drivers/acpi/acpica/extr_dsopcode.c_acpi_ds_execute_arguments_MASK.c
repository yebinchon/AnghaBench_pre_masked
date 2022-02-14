
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct acpi_namespace_node* node; } ;
union acpi_parse_object {TYPE_1__ common; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {struct acpi_namespace_node* deferred_node; int parse_flags; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct acpi_walk_state* FUNC_2 (int ,int *,int *,int *) ;
 int FUNC_3 (struct acpi_walk_state*) ;
 int FUNC_4 (struct acpi_walk_state*,union acpi_parse_object*,int *,int *,int ,int *,int ) ;
 union acpi_parse_object* FUNC_5 (int ) ;
 int FUNC_6 (union acpi_parse_object*) ;
 int FUNC_7 (struct acpi_walk_state*) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static acpi_status
FUNC_9(struct acpi_namespace_node *VAR_6,
     struct acpi_namespace_node *VAR_7,
     u32 VAR_8, u8 * VAR_9)
{
 acpi_status VAR_10;
 union acpi_parse_object *VAR_11;
 struct acpi_walk_state *VAR_12;

 FUNC_1(VAR_5);




 VAR_11 = FUNC_5(VAR_4);
 if (!VAR_11) {
  FUNC_8(VAR_3);
 }



 VAR_11->common.node = VAR_7;



 VAR_12 = FUNC_2(0, ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_12) {
  VAR_10 = VAR_3;
  goto cleanup;
 }

 VAR_10 = FUNC_4(VAR_12, VAR_11, ((void*)0), VAR_9,
           VAR_8, ((void*)0), VAR_1);
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_12);
  goto cleanup;
 }



 VAR_12->parse_flags = VAR_2;
 VAR_12->deferred_node = VAR_6;



 VAR_10 = FUNC_7(VAR_12);
 if (FUNC_0(VAR_10)) {
  goto cleanup;
 }



 VAR_11->common.node = VAR_6;
 FUNC_6(VAR_11);



 VAR_11 = FUNC_5(VAR_4);
 if (!VAR_11) {
  FUNC_8(VAR_3);
 }

 VAR_11->common.node = VAR_7;



 VAR_12 = FUNC_2(0, ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_12) {
  VAR_10 = VAR_3;
  goto cleanup;
 }



 VAR_10 = FUNC_4(VAR_12, VAR_11, ((void*)0), VAR_9,
           VAR_8, ((void*)0), VAR_0);
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_12);
  goto cleanup;
 }



 VAR_12->deferred_node = VAR_6;
 VAR_10 = FUNC_7(VAR_12);

      cleanup:
 FUNC_6(VAR_11);
 FUNC_8(VAR_10);
}

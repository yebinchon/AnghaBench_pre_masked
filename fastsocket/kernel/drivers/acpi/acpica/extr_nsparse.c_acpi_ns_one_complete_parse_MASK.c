
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {int dummy; } ;
struct acpi_table_header {int length; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_owner_id ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_walk_state* FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (struct acpi_walk_state*) ;
 int FUNC_5 (struct acpi_walk_state*,union acpi_parse_object*,int *,int *,int,int *,int ) ;
 int FUNC_6 (struct acpi_namespace_node*,int ,struct acpi_walk_state*) ;
 struct acpi_namespace_node* VAR_4 ;
 int FUNC_7 (int,struct acpi_table_header**) ;
 union acpi_parse_object* FUNC_8 () ;
 int FUNC_9 (union acpi_parse_object*) ;
 int FUNC_10 (union acpi_parse_object*) ;
 int FUNC_11 (struct acpi_walk_state*) ;
 int FUNC_12 (int,int *) ;
 int VAR_5 ;
 int FUNC_13 (int ) ;

acpi_status
FUNC_14(u32 VAR_6,
      u32 VAR_7,
      struct acpi_namespace_node *VAR_8)
{
 union acpi_parse_object *VAR_9;
 acpi_status VAR_10;
       u32 VAR_11;
 u8 *VAR_12;
 struct acpi_walk_state *VAR_13;
 struct acpi_table_header *VAR_14;
 acpi_owner_id VAR_15;

 FUNC_2(VAR_5);

 VAR_10 = FUNC_12(VAR_7, &VAR_15);
 if (FUNC_1(VAR_10)) {
  FUNC_13(VAR_10);
 }



 VAR_9 = FUNC_8();
 if (!VAR_9) {
  FUNC_13(VAR_3);
 }



 VAR_13 = FUNC_3(VAR_15, ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_13) {
  FUNC_10(VAR_9);
  FUNC_13(VAR_3);
 }

 VAR_10 = FUNC_7(VAR_7, &VAR_14);
 if (FUNC_1(VAR_10)) {
  FUNC_4(VAR_13);
  FUNC_10(VAR_9);
  FUNC_13(VAR_10);
 }



 if (VAR_14->length < sizeof(struct acpi_table_header)) {
  VAR_10 = VAR_2;
 } else {
  VAR_12 = (u8 *) VAR_14 + sizeof(struct acpi_table_header);
  VAR_11 = VAR_14->length - sizeof(struct acpi_table_header);
  VAR_10 = FUNC_5(VAR_13, VAR_9, ((void*)0),
            VAR_12, VAR_11, ((void*)0),
            (u8) VAR_6);
 }

 if (FUNC_1(VAR_10)) {
  FUNC_4(VAR_13);
  goto cleanup;
 }



 if (VAR_8 && VAR_8 != VAR_4) {
  VAR_10 =
      FUNC_6(VAR_8, VAR_1,
          VAR_13);
  if (FUNC_1(VAR_10)) {
   FUNC_4(VAR_13);
   goto cleanup;
  }
 }



 FUNC_0((VAR_0, "*PARSE* pass %d parse\n",
     (unsigned)VAR_6));
 VAR_10 = FUNC_11(VAR_13);

      cleanup:
 FUNC_9(VAR_9);
 FUNC_13(VAR_10);
}

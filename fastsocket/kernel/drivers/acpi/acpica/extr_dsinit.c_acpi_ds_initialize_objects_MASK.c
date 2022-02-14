
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int signature; } ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_init_walk_info {scalar_t__ op_region_count; scalar_t__ method_count; scalar_t__ device_count; scalar_t__ object_count; int owner_id; int table_index; } ;
typedef int acpi_status ;
typedef int acpi_owner_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,struct acpi_table_header**) ;
 int FUNC_6 (int ,struct acpi_namespace_node*,int ,int ,int ,struct acpi_init_walk_info*,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_9 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(u32 VAR_10,
      struct acpi_namespace_node * VAR_11)
{
 acpi_status VAR_12;
 struct acpi_init_walk_info VAR_13;
 struct acpi_table_header *VAR_14;
 acpi_owner_id VAR_15;

 FUNC_4(VAR_9);

 VAR_12 = FUNC_7(VAR_10, &VAR_15);
 if (FUNC_3(VAR_12)) {
  FUNC_10(VAR_12);
 }

 FUNC_0((VAR_0,
     "**** Starting initialization of namespace objects ****\n"));
 FUNC_1((VAR_1, "Parsing all Control Methods:"));

 VAR_13.method_count = 0;
 VAR_13.op_region_count = 0;
 VAR_13.object_count = 0;
 VAR_13.device_count = 0;
 VAR_13.table_index = VAR_10;
 VAR_13.owner_id = VAR_15;



 VAR_12 = FUNC_8(VAR_2);
 if (FUNC_3(VAR_12)) {
  FUNC_10(VAR_12);
 }





 VAR_12 =
     FUNC_6(VAR_4, VAR_11, VAR_5,
       VAR_3, VAR_8,
       &VAR_13, ((void*)0));
 if (FUNC_3(VAR_12)) {
  FUNC_2((VAR_6, VAR_12, "During WalkNamespace"));
 }
 (void)FUNC_9(VAR_2);

 VAR_12 = FUNC_5(VAR_10, &VAR_14);
 if (FUNC_3(VAR_12)) {
  FUNC_10(VAR_12);
 }

 FUNC_1((VAR_1,
         "\nTable [%4.4s](id %4.4X) - %hd Objects with %hd Devices %hd Methods %hd Regions\n",
         VAR_14->signature, VAR_15, VAR_13.object_count,
         VAR_13.device_count, VAR_13.method_count,
         VAR_13.op_region_count));

 FUNC_0((VAR_0,
     "%hd Methods, %hd Regions\n", VAR_13.method_count,
     VAR_13.op_region_count));

 FUNC_10(VAR_7);
}

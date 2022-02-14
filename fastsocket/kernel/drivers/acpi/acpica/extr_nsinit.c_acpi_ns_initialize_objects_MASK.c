
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_init_walk_info {int op_region_count; int method_count; int object_count; int package_count; int package_init; int buffer_count; int buffer_init; int field_count; int field_init; int op_region_init; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct acpi_init_walk_info*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int ,int ,struct acpi_init_walk_info*,int *) ;
 int VAR_8 ;
 int FUNC_7 (int ) ;

acpi_status FUNC_8(void)
{
 acpi_status VAR_9;
 struct acpi_init_walk_info VAR_10;

 FUNC_4(VAR_8);

 FUNC_0((VAR_0,
     "**** Starting initialization of namespace objects ****\n"));
 FUNC_1((VAR_1,
         "Completing Region/Field/Buffer/Package initialization:"));



 FUNC_5(&VAR_10, 0, sizeof(struct acpi_init_walk_info));



 VAR_9 = FUNC_6(VAR_3, VAR_2,
         VAR_4, VAR_7,
         &VAR_10, ((void*)0));
 if (FUNC_3(VAR_9)) {
  FUNC_2((VAR_5, VAR_9, "During WalkNamespace"));
 }

 FUNC_1((VAR_1,
         "\nInitialized %hd/%hd Regions %hd/%hd Fields %hd/%hd "
         "Buffers %hd/%hd Packages (%hd nodes)\n",
         VAR_10.op_region_init, VAR_10.op_region_count,
         VAR_10.field_init, VAR_10.field_count,
         VAR_10.buffer_init, VAR_10.buffer_count,
         VAR_10.package_init, VAR_10.package_count,
         VAR_10.object_count));

 FUNC_0((VAR_0,
     "%hd Control Methods found\n", VAR_10.method_count));
 FUNC_0((VAR_0,
     "%hd Op Regions found\n", VAR_10.op_region_count));

 FUNC_7(VAR_6);
}

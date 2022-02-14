
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namespace_node {scalar_t__ owner_id; } ;
struct acpi_init_walk_info {scalar_t__ owner_id; int device_count; int method_count; int op_region_count; int object_count; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;
typedef scalar_t__ acpi_handle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static acpi_status
FUNC_6(acpi_handle VAR_2,
   u32 VAR_3, void *VAR_4, void **VAR_5)
{
 struct acpi_init_walk_info *VAR_6 =
     (struct acpi_init_walk_info *)VAR_4;
 struct acpi_namespace_node *VAR_7 =
     (struct acpi_namespace_node *)VAR_2;
 acpi_object_type VAR_8;
 acpi_status VAR_9;

 FUNC_2();





 if (VAR_7->owner_id != VAR_6->owner_id) {
  return (VAR_1);
 }

 VAR_6->object_count++;



 VAR_8 = FUNC_4(VAR_2);

 switch (VAR_8) {
 case 128:

  VAR_9 = FUNC_3(VAR_2);
  if (FUNC_1(VAR_9)) {
   FUNC_0((VAR_0, VAR_9,
     "During Region initialization %p [%4.4s]",
     VAR_2,
     FUNC_5(VAR_2)));
  }

  VAR_6->op_region_count++;
  break;

 case 129:

  VAR_6->method_count++;
  break;

 case 130:

  VAR_6->device_count++;
  break;

 default:
  break;
 }





 return (VAR_1);
}

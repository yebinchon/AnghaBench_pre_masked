
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int type; scalar_t__ count1; scalar_t__ count2; int object_type1; int object_type2; } ;
struct TYPE_5__ {scalar_t__ count; int * object_type; } ;
union acpi_predefined_info {TYPE_3__ ret_info; TYPE_1__ ret_info2; } ;
struct TYPE_8__ {scalar_t__ count; union acpi_operand_object** elements; } ;
struct TYPE_6__ {int value; } ;
union acpi_operand_object {TYPE_4__ package; TYPE_2__ integer; } ;
typedef scalar_t__ u32 ;
struct acpi_predefined_data {int node_flags; int pathname; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct acpi_predefined_data*,union acpi_operand_object**,int ,scalar_t__) ;
 int FUNC_3 (struct acpi_predefined_data*,union acpi_operand_object**,int ,scalar_t__,int ,scalar_t__,int) ;

__attribute__((used)) static acpi_status
FUNC_4(struct acpi_predefined_data *VAR_6,
      const union acpi_predefined_info *VAR_7,
      union acpi_operand_object **VAR_8, u32 VAR_9)
{
 union acpi_operand_object *VAR_10;
 union acpi_operand_object **VAR_11;
 acpi_status VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  VAR_10 = *VAR_8;
  VAR_11 = VAR_10->package.elements;



  VAR_12 = FUNC_2(VAR_6, &VAR_10,
         VAR_1, VAR_14);
  if (FUNC_0(VAR_12)) {
   return (VAR_12);
  }



  switch (VAR_7->ret_info.type) {
  case 133:
  case 129:
  case 128:



   VAR_13 =
       VAR_7->ret_info.count1 + VAR_7->ret_info.count2;
   if (VAR_10->package.count < VAR_13) {
    goto package_too_small;
   }

   VAR_12 =
       FUNC_3(VAR_6, VAR_11,
          VAR_7->ret_info.
          object_type1,
          VAR_7->ret_info.
          count1,
          VAR_7->ret_info.
          object_type2,
          VAR_7->ret_info.
          count2, 0);
   if (FUNC_0(VAR_12)) {
    return (VAR_12);
   }
   break;

  case 131:



   VAR_13 = VAR_7->ret_info2.count;
   if (VAR_10->package.count < VAR_13) {
    goto package_too_small;
   }



   for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
    VAR_12 =
        FUNC_2(VAR_6,
             &VAR_11[VAR_15],
             VAR_7->
             ret_info2.
             object_type[VAR_15],
             VAR_15);
    if (FUNC_0(VAR_12)) {
     return (VAR_12);
    }
   }
   break;

  case 130:



   VAR_13 = VAR_7->ret_info.count1;
   if (VAR_10->package.count < VAR_13) {
    goto package_too_small;
   }



   VAR_12 =
       FUNC_3(VAR_6, VAR_11,
          VAR_7->ret_info.
          object_type1,
          VAR_10->package.
          count, 0, 0, 0);
   if (FUNC_0(VAR_12)) {
    return (VAR_12);
   }
   break;

  case 132:





   VAR_12 = FUNC_2(VAR_6, VAR_11,
          VAR_0,
          0);
   if (FUNC_0(VAR_12)) {
    return (VAR_12);
   }





   VAR_13 = (u32)(*VAR_11)->integer.value;
   if (VAR_10->package.count < VAR_13) {
    goto package_too_small;
   }
   if (VAR_10->package.count <
       VAR_7->ret_info.count1) {
    VAR_13 = VAR_7->ret_info.count1;
    goto package_too_small;
   }



   VAR_12 =
       FUNC_3(VAR_6,
          (VAR_11 + 1),
          VAR_7->ret_info.
          object_type1,
          (VAR_13 - 1),
          0, 0, 1);
   if (FUNC_0(VAR_12)) {
    return (VAR_12);
   }
   break;

  default:

   return (VAR_2);
  }

  VAR_8++;
 }

 return (VAR_5);

package_too_small:



 FUNC_1((VAR_4, VAR_6->pathname, VAR_6->node_flags,
         "Return Sub-Package[%u] is too small - found %u elements, expected %u",
         VAR_14, VAR_10->package.count, VAR_13));

 return (VAR_3);
}

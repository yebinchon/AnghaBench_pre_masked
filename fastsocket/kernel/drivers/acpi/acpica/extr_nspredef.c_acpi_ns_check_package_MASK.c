
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int type; size_t count1; size_t count2; int object_type1; int object_type2; } ;
struct TYPE_6__ {size_t count; int tail_object_type; int * object_type; } ;
union acpi_predefined_info {TYPE_5__ ret_info; TYPE_1__ ret_info3; } ;
struct TYPE_9__ {size_t count; union acpi_operand_object** elements; } ;
struct TYPE_8__ {int type; } ;
struct TYPE_7__ {int value; } ;
union acpi_operand_object {TYPE_4__ package; TYPE_3__ common; TYPE_2__ integer; } ;
typedef size_t u32 ;
struct acpi_predefined_data {int node_flags; int pathname; union acpi_predefined_info* predefined; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct acpi_predefined_data*,union acpi_operand_object**,int ,size_t) ;
 int FUNC_5 (struct acpi_predefined_data*,union acpi_operand_object**,int ,size_t,int ,size_t,int ) ;
 int FUNC_6 (struct acpi_predefined_data*,union acpi_predefined_info const*,union acpi_operand_object**,size_t) ;
 int FUNC_7 (struct acpi_predefined_data*,int,union acpi_operand_object*) ;
 int FUNC_8 (struct acpi_predefined_data*,union acpi_operand_object**) ;
 int VAR_7 ;

__attribute__((used)) static acpi_status
FUNC_9(struct acpi_predefined_data *VAR_8,
        union acpi_operand_object **VAR_9)
{
 union acpi_operand_object *VAR_10 = *VAR_9;
 const union acpi_predefined_info *VAR_11;
 union acpi_operand_object **VAR_12;
 acpi_status VAR_13 = VAR_6;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 FUNC_2(VAR_7);



 VAR_11 = VAR_8->predefined + 1;

 FUNC_0((VAR_0,
     "%s Validating return Package of Type %X, Count %X\n",
     VAR_8->pathname, VAR_11->ret_info.type,
     VAR_10->package.count));





 FUNC_7(VAR_8, VAR_11->ret_info.type,
         VAR_10);



 VAR_12 = VAR_10->package.elements;
 VAR_15 = VAR_10->package.count;



 if (!VAR_15) {
  FUNC_3((VAR_5, VAR_8->pathname, VAR_8->node_flags,
          "Return Package has no elements (empty)"));

  return (VAR_4);
 }







 switch (VAR_11->ret_info.type) {
 case 136:







  VAR_14 =
      VAR_11->ret_info.count1 + VAR_11->ret_info.count2;
  if (VAR_15 < VAR_14) {
   goto package_too_small;
  } else if (VAR_15 > VAR_14) {
   FUNC_3((VAR_5, VAR_8->pathname,
           VAR_8->node_flags,
           "Return Package is larger than needed - "
           "found %u, expected %u", VAR_15,
           VAR_14));
  }



  VAR_13 = FUNC_5(VAR_8, VAR_12,
       VAR_11->ret_info.
       object_type1,
       VAR_11->ret_info.
       count1,
       VAR_11->ret_info.
       object_type2,
       VAR_11->ret_info.
       count2, 0);
  break;

 case 134:





  for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
   VAR_13 = FUNC_4(VAR_8, VAR_12,
          VAR_11->ret_info.
          object_type1, VAR_16);
   if (FUNC_1(VAR_13)) {
    return (VAR_13);
   }
   VAR_12++;
  }
  break;

 case 135:
  VAR_14 = VAR_11->ret_info3.count;
  if (VAR_15 < VAR_14) {
   goto package_too_small;
  }



  for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
   if (VAR_16 < VAR_11->ret_info3.count) {



    VAR_13 =
        FUNC_4(VAR_8, VAR_12,
             VAR_11->
             ret_info3.
             object_type[VAR_16],
             VAR_16);
    if (FUNC_1(VAR_13)) {
     return (VAR_13);
    }
   } else {


    VAR_13 =
        FUNC_4(VAR_8, VAR_12,
             VAR_11->
             ret_info3.
             tail_object_type,
             VAR_16);
    if (FUNC_1(VAR_13)) {
     return (VAR_13);
    }
   }
   VAR_12++;
  }
  break;

 case 128:



  VAR_13 = FUNC_4(VAR_8, VAR_12,
         VAR_1, 0);
  if (FUNC_1(VAR_13)) {
   return (VAR_13);
  }

  VAR_12++;
  VAR_15--;



  VAR_13 =
      FUNC_6(VAR_8, VAR_11, VAR_12, VAR_15);
  break;

 case 129:



  VAR_13 = FUNC_4(VAR_8, VAR_12,
         VAR_1, 0);
  if (FUNC_1(VAR_13)) {
   return (VAR_13);
  }





  VAR_14 = (u32) (*VAR_12)->integer.value;
  if (VAR_14 >= VAR_15) {
   goto package_too_small;
  }

  VAR_15 = VAR_14;
  VAR_12++;



  VAR_13 =
      FUNC_6(VAR_8, VAR_11, VAR_12, VAR_15);
  break;

 case 133:
 case 131:
 case 130:
 case 132:
  if ((*VAR_12)->common.type != VAR_2) {



   VAR_13 =
       FUNC_8(VAR_8,
       VAR_9);
   if (FUNC_1(VAR_13)) {
    return (VAR_13);
   }



   VAR_10 = *VAR_9;
   VAR_12 = VAR_10->package.elements;
   VAR_15 = 1;
  }



  VAR_13 =
      FUNC_6(VAR_8, VAR_11, VAR_12, VAR_15);
  break;

 default:



  FUNC_3((VAR_5, VAR_8->pathname, VAR_8->node_flags,
          "Invalid internal return type in table entry: %X",
          VAR_11->ret_info.type));

  return (VAR_3);
 }

 return (VAR_13);

package_too_small:



 FUNC_3((VAR_5, VAR_8->pathname, VAR_8->node_flags,
         "Return Package is too small - found %u elements, expected %u",
         VAR_15, VAR_14));

 return (VAR_4);
}

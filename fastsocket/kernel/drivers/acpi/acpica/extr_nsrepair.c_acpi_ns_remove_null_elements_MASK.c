
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_1__ package; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct acpi_predefined_data {int pathname; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

void
FUNC_2(struct acpi_predefined_data *VAR_2,
        u8 VAR_3,
        union acpi_operand_object *VAR_4)
{
 union acpi_operand_object **VAR_5;
 union acpi_operand_object **VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_1);






 switch (VAR_3) {
 case 134:
 case 133:
 case 132:
 case 129:
 case 131:
 case 130:
 case 128:
  break;

 default:
 case 136:
 case 135:
  return;
 }

 VAR_7 = VAR_4->package.count;
 VAR_8 = VAR_7;

 VAR_5 = VAR_4->package.elements;
 VAR_6 = VAR_5;



 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  if (!*VAR_5) {
   VAR_8--;
  } else {
   *VAR_6 = *VAR_5;
   VAR_6++;
  }
  VAR_5++;
 }



 if (VAR_8 < VAR_7) {
  FUNC_0((VAR_0,
      "%s: Found and removed %u NULL elements\n",
      VAR_2->pathname, (VAR_7 - VAR_8)));



  *VAR_6 = ((void*)0);
  VAR_4->package.count = VAR_8;
 }
}

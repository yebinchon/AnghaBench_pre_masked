
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef int u8 ;
typedef int u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int FUNC_1 (int ,union acpi_operand_object*,union acpi_operand_object*,int *) ;

__attribute__((used)) static u8
FUNC_2(u32 VAR_5,
   union acpi_operand_object *VAR_6,
   union acpi_operand_object *VAR_7)
{
 u8 VAR_8 = VAR_4;
 acpi_status VAR_9;
 switch (VAR_5) {
 case 128:



  break;

 case 133:





  VAR_9 =
      FUNC_1(VAR_0, VAR_7, VAR_6,
       &VAR_8);
  if (FUNC_0(VAR_9)) {
   return (VAR_3);
  }
  break;

 case 130:





  VAR_9 =
      FUNC_1(VAR_2, VAR_7, VAR_6,
       &VAR_8);
  if (FUNC_0(VAR_9)) {
   return (VAR_3);
  }
  VAR_8 = (u8) ! VAR_8;
  break;

 case 129:





  VAR_9 =
      FUNC_1(VAR_1, VAR_7,
       VAR_6, &VAR_8);
  if (FUNC_0(VAR_9)) {
   return (VAR_3);
  }
  break;

 case 132:





  VAR_9 =
      FUNC_1(VAR_1, VAR_7,
       VAR_6, &VAR_8);
  if (FUNC_0(VAR_9)) {
   return (VAR_3);
  }
  VAR_8 = (u8) ! VAR_8;
  break;

 case 131:





  VAR_9 =
      FUNC_1(VAR_2, VAR_7, VAR_6,
       &VAR_8);
  if (FUNC_0(VAR_9)) {
   return (VAR_3);
  }
  break;

 default:



  return (VAR_3);
 }

 return VAR_8;
}

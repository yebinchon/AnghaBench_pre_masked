
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int acpi_integer ;


 int FUNC_0 () ;
 int VAR_0 ;

acpi_integer
FUNC_1(u16 VAR_1, acpi_integer VAR_2, acpi_integer VAR_3)
{

 FUNC_0();

 switch (VAR_1) {
 case 137:

  return (VAR_2 + VAR_3);

 case 136:

  return (VAR_2 & VAR_3);

 case 135:

  return (~(VAR_2 & VAR_3));

 case 133:

  return (VAR_2 | VAR_3);

 case 134:

  return (~(VAR_2 | VAR_3));

 case 132:

  return (VAR_2 ^ VAR_3);

 case 131:

  return (VAR_2 * VAR_3);

 case 130:





  if (VAR_3 >= VAR_0) {
   return (0);
  }
  return (VAR_2 << VAR_3);

 case 129:





  if (VAR_3 >= VAR_0) {
   return (0);
  }
  return (VAR_2 >> VAR_3);

 case 128:

  return (VAR_2 - VAR_3);

 default:

  return (0);
 }
}

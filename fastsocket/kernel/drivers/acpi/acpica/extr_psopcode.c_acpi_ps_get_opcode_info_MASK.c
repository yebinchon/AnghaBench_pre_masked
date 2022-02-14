
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct acpi_opcode_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct acpi_opcode_info const* VAR_4 ;
 size_t* VAR_5 ;
 size_t* VAR_6 ;
 int VAR_7 ;

const struct acpi_opcode_info *FUNC_2(u16 VAR_8)
{
 FUNC_1(VAR_7);




 if (!(VAR_8 & 0xFF00)) {



  return (&VAR_4
   [VAR_6[(u8) VAR_8]]);
 }

 if (((VAR_8 & 0xFF00) == VAR_1) &&
     (((u8) VAR_8) <= VAR_2)) {



  return (&VAR_4
   [VAR_5[(u8) VAR_8]]);
 }



 FUNC_0((VAR_0,
     "Unknown AML opcode [%4.4X]\n", VAR_8));

 return (&VAR_4[VAR_3]);
}

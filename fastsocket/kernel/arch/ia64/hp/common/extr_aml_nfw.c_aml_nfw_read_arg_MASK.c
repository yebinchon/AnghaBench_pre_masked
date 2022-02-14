
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
typedef int acpi_integer ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u32 VAR_1, acpi_integer *VAR_2)
{
 switch (VAR_1) {
 case 8:
  *VAR_2 = *(u8 *)VAR_0;
  break;
 case 16:
  *VAR_2 = *(u16 *)VAR_0;
  break;
 case 32:
  *VAR_2 = *(u32 *)VAR_0;
  break;
 case 64:
  *VAR_2 = *(u64 *)VAR_0;
  break;
 }
}

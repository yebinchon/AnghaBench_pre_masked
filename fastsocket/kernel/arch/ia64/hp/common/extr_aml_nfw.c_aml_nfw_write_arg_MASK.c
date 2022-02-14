
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u64 ;
typedef int u32 ;
typedef void* u16 ;
typedef void* acpi_integer ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u32 VAR_1, acpi_integer *VAR_2)
{
 switch (VAR_1) {
 case 8:
  *(u8 *) VAR_0 = *VAR_2;
  break;
 case 16:
  *(u16 *) VAR_0 = *VAR_2;
  break;
 case 32:
  *(u32 *) VAR_0 = *VAR_2;
  break;
 case 64:
  *(u64 *) VAR_0 = *VAR_2;
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 () ;

u32 FUNC_1(u32 VAR_0)
{
 union {
  u32 value;
  u8 bytes[4];
 } VAR_1;
 union {
  u32 value;
  u8 bytes[4];
 } VAR_2;

 FUNC_0();

 VAR_2.value = VAR_0;

 VAR_1.bytes[0] = VAR_2.bytes[3];
 VAR_1.bytes[1] = VAR_2.bytes[2];
 VAR_1.bytes[2] = VAR_2.bytes[1];
 VAR_1.bytes[3] = VAR_2.bytes[0];

 return (VAR_1.value);
}

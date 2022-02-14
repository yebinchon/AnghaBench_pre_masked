
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u64_t ;
typedef int u32_t ;


 int VAR_0 ;
 int VAR_1 ;

u8_t FUNC_0(u32_t VAR_2, u64_t *VAR_3)
{
 u32_t VAR_4, VAR_5;
 u64_t VAR_6;

 VAR_4 = VAR_2/64;
 VAR_5 = VAR_2 - VAR_4*64;
 VAR_6 = ((u64_t) 1) << VAR_5;
 if (VAR_3[VAR_4] & VAR_6)
  return VAR_1;
 else
  return VAR_0;
}

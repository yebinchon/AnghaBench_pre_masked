
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u64_t ;
typedef size_t u16_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u8_t FUNC_0(u64_t *VAR_3)
{
 u16_t VAR_4;

 for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
  if (VAR_3[VAR_4] != 0)
   return VAR_1;
 }
 return VAR_2;
}

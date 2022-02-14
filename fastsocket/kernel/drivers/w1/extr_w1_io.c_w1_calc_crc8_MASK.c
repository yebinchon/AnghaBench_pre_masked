
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 size_t* VAR_0 ;

u8 FUNC_0(u8 * VAR_1, int VAR_2)
{
 u8 VAR_3 = 0;

 while (VAR_2--)
  VAR_3 = VAR_0[VAR_3 ^ *VAR_1++];

 return VAR_3;
}

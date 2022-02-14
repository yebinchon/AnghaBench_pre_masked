
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;



__attribute__((used)) static bool FUNC_0(u8 *VAR_0, int VAR_1)
{
 int VAR_2;
 u32 *VAR_3 = (u32 *)VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1 / 4; VAR_2++)
  if (*(VAR_3 + VAR_2) != 0)
   return 0;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



unsigned FUNC_0(u32 VAR_0)
{
 unsigned VAR_1 = 0;
 int VAR_2;




 for (VAR_2 = 0; VAR_2 < 22; ++VAR_2)
  if (VAR_0 & (1 << (VAR_2 + 10)))
   VAR_1 |= 1 << (VAR_2 ^ 7);

 return VAR_1;
}

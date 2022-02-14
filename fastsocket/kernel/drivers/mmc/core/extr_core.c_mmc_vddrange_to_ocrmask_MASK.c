
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;

u32 FUNC_1(int VAR_0, int VAR_1)
{
 u32 VAR_2 = 0;

 if (VAR_1 < VAR_0)
  return 0;


 VAR_1 = FUNC_0(VAR_1, 0);
 if (VAR_1 < 0)
  return 0;


 VAR_0 = FUNC_0(VAR_0, 1);
 if (VAR_0 < 0)
  return 0;


 while (VAR_1 >= VAR_0)
  VAR_2 |= 1 << VAR_1--;

 return VAR_2;
}

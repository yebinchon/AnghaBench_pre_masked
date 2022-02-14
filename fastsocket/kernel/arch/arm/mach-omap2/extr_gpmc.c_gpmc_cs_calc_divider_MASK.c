
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;

int FUNC_1(int VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 VAR_3 = VAR_1 * 1000 + (FUNC_0() - 1);
 VAR_2 = VAR_3 / FUNC_0();
 if (VAR_2 > 4)
  return -1;
 if (VAR_2 <= 0)
  VAR_2 = 1;

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned VAR_0, unsigned char *VAR_1, unsigned char *VAR_2, unsigned char *VAR_3)
{
   if (!VAR_1 || !VAR_2 || !VAR_3)
      return;

   *VAR_3 = VAR_0 % 75;
   VAR_0 /= 75;
   *VAR_2 = VAR_0 % 60;
   VAR_0 /= 60;
   *VAR_1 = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1, unsigned char *VAR_2)
{
   if (!VAR_0 || !VAR_1 || !VAR_2)
      return;

   *VAR_0 = (*VAR_2 == 74) ? (*VAR_1 < 59 ? *VAR_0 : *VAR_0 + 1) : *VAR_0;
   *VAR_1 = (*VAR_2 == 74) ? (*VAR_1 < 59 ? (*VAR_1 + 1) : 0) : *VAR_1;
   *VAR_2 = (*VAR_2 < 74) ? (*VAR_2 + 1) : 0;
}

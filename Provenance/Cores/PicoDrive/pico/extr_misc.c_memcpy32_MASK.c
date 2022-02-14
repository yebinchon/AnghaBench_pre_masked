
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intblock ;



void FUNC_0(int *VAR_0, int *VAR_1, int VAR_2)
{
 intblock *VAR_3 = (intblock *) VAR_0, *VAR_4 = (intblock *) VAR_1;

 for (; VAR_2 >= sizeof(*VAR_3)/4; VAR_2 -= sizeof(*VAR_3)/4)
  *VAR_3++ = *VAR_4++;

 VAR_0 = (int *)VAR_3; VAR_1 = (int *)VAR_4;
 while (VAR_2--)
  *VAR_0++ = *VAR_1++;
}

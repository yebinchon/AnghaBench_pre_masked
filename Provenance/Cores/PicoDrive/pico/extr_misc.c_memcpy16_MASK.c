
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int*,int) ;

void FUNC_1(unsigned short *VAR_0, unsigned short *VAR_1, int VAR_2)
{
 if ((((long)VAR_0 | (long)VAR_1) & 3) == 0)
 {
  if (VAR_2 >= 32) {
   FUNC_0((int *)VAR_0, (int *)VAR_1, VAR_2/2);
   VAR_2&=1;
  } else {
   for (; VAR_2 >= 2; VAR_2 -= 2, VAR_0+=2, VAR_1+=2)
    *(int *)VAR_0 = *(int *)VAR_1;
  }
 }
 while (VAR_2--)
  *VAR_0++ = *VAR_1++;
}

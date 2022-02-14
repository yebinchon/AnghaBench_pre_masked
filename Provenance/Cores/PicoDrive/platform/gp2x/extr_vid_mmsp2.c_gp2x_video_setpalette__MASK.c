
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short* VAR_0 ;

__attribute__((used)) static void FUNC_0(int *VAR_1, int VAR_2)
{
 unsigned short *VAR_3 = (unsigned short *)VAR_1;
 volatile unsigned short *VAR_4 = &VAR_0[0x295A>>1];

 VAR_0[0x2958>>1] = 0;

 VAR_2 *= 2;
 while (VAR_2--)
  *VAR_4 = *VAR_3++;
}

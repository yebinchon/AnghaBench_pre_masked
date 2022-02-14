
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(void *VAR_0, const void *VAR_1, int VAR_2, int VAR_3)
{
 unsigned int *VAR_4 = VAR_0;
 const unsigned int *VAR_5 = VAR_1;
 VAR_2 /= 2;
 if (VAR_3)
 {
  while (VAR_2--)
  {
   unsigned int VAR_6 = *VAR_5++;
   *VAR_4++ = ((VAR_6&0xf79ef79e)>>1) - ((VAR_6&0xc618c618)>>3);
  }
 }
 else
 {
  while (VAR_2--)
  {
   unsigned int VAR_7 = *VAR_5++;
   *VAR_4++ = (VAR_7&0xf79ef79e)>>1;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int VAR_0 ;

void FUNC_0 (byte *VAR_1, byte *VAR_2)
{
 int VAR_3;
 byte *VAR_4;
 int VAR_5;

 VAR_5 = (VAR_0+7)>>3;
 VAR_4 = VAR_2;

 do
 {
  if (*VAR_1)
  {
   *VAR_4++ = *VAR_1++;
   continue;
  }

  VAR_3 = VAR_1[1];
  VAR_1 += 2;
  while (VAR_3)
  {
   *VAR_4++ = 0;
   VAR_3--;
  }
 } while (VAR_4 - VAR_2 < VAR_5);
}

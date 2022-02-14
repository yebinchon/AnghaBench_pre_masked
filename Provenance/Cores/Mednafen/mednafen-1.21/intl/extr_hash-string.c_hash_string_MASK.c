
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

unsigned long int
FUNC_0 (const char *VAR_1)
{
  unsigned long int VAR_2, VAR_3;
  const char *VAR_4 = VAR_1;


  VAR_2 = 0;
  while (*VAR_4 != '\0')
    {
      VAR_2 <<= 4;
      VAR_2 += (unsigned char) *VAR_4++;
      VAR_3 = VAR_2 & ((unsigned long int) 0xf << (VAR_0 - 4));
      if (VAR_3 != 0)
 {
   VAR_2 ^= VAR_3 >> (VAR_0 - 8);
   VAR_2 ^= VAR_3;
 }
    }
  return VAR_2;
}

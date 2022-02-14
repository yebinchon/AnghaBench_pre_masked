
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned char*
FUNC_0 (unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned char *VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {


  if (*VAR_1 == 0x7d) {
   VAR_4 = VAR_1 + 1;
   if (*VAR_4 == 0x3 || *VAR_4 == 0x4 || *VAR_4 == 0x5D)
    {
     VAR_1++;
     *VAR_1 += 0x20;
    }
  }
  *VAR_0++ = *VAR_1++;
 }
 return (VAR_0);
}

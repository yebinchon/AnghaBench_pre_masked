
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned char const *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = 0;
 while (VAR_1--) {
  VAR_3 ^= *VAR_0++;
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
   VAR_3 = (VAR_3 >> 1) ^ ((VAR_3 & 1) ? 0xedb88320 : 0);
 }
 return VAR_3;
}

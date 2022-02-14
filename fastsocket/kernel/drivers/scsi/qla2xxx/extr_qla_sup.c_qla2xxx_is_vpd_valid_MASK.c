
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int
FUNC_0(uint8_t *VAR_0, uint8_t *VAR_1)
{
 if (VAR_0 >= VAR_1 || *VAR_0 != 0x82)
  return 0;

 VAR_0 += 3 + VAR_0[1];
 if (VAR_0 >= VAR_1 || *VAR_0 != 0x90)
  return 0;

 VAR_0 += 3 + VAR_0[1];
 if (VAR_0 >= VAR_1 || *VAR_0 != 0x78)
  return 0;

 return 1;
}

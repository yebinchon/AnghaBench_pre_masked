
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static bool FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const uint32_t *VAR_2 = VAR_0;
 const uint32_t *VAR_3 = VAR_1;


 return !((VAR_2[0] ^ VAR_3[0]) |
   (VAR_2[1] ^ VAR_3[1]) |
   (VAR_2[2] ^ VAR_3[2]) | (VAR_2[3] ^ VAR_3[3]) |
   (VAR_2[4] ^ VAR_3[4]));
}

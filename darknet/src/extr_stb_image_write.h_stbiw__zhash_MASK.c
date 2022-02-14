
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbiw_uint32 ;



__attribute__((used)) static unsigned int FUNC_0(unsigned char *VAR_0)
{
   stbiw_uint32 VAR_1 = VAR_0[0] + (VAR_0[1] << 8) + (VAR_0[2] << 16);
   VAR_1 ^= VAR_1 << 3;
   VAR_1 += VAR_1 >> 5;
   VAR_1 ^= VAR_1 << 4;
   VAR_1 += VAR_1 >> 17;
   VAR_1 ^= VAR_1 << 25;
   VAR_1 += VAR_1 >> 6;
   return VAR_1;
}

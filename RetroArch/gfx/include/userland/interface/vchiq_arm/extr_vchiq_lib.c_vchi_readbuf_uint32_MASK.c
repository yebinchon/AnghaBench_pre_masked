
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char const uint32_t ;



uint32_t
FUNC_0( const void *VAR_0 )
{
   const unsigned char *VAR_1 = VAR_0;
   return VAR_1[0] | (VAR_1[1] << 8) | (VAR_1[2] << 16) | (VAR_1[3] << 24);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



void
FUNC_0( void *VAR_0, uint32_t VAR_1 )
{
   unsigned char *VAR_2 = VAR_0;
   VAR_2[0] = (unsigned char)((VAR_1 >> 0) & 0xFF);
   VAR_2[1] = (unsigned char)((VAR_1 >> 8) & 0xFF);
   VAR_2[2] = (unsigned char)((VAR_1 >> 16) & 0xFF);
   VAR_2[3] = (unsigned char)((VAR_1 >> 24) & 0xFF);
}

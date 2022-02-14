
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t FUNC_0(const char *VAR_0)
{
   const unsigned char *VAR_1 = (const unsigned char*)VAR_0;
   uint32_t VAR_2 = 5381;

   while ( *VAR_1 )
      VAR_2 = ( VAR_2 << 5 ) + VAR_2 + *VAR_1++;

   return VAR_2;
}

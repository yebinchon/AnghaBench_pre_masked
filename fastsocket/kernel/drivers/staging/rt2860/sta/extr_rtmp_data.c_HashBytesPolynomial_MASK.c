
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int ULONG ;
typedef unsigned char UCHAR ;



ULONG FUNC_0(UCHAR *VAR_0, unsigned int VAR_1)
{
   unsigned char *VAR_2 = VAR_0;
   unsigned int VAR_3 = 0;
   unsigned int VAR_4;

   for(VAR_4=0; VAR_4 < VAR_1; VAR_4++)
   {
   int VAR_5 = VAR_4 % 32;
   VAR_3 ^=(unsigned int) (VAR_2[VAR_4]) << VAR_5;
   VAR_3 ^=(unsigned int) (VAR_2[VAR_4]) >> (32 - VAR_5);
   }
   return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

char* FUNC_1(const void* VAR_1, int VAR_2, int *VAR_3)
{
   const unsigned char* VAR_4 = (const unsigned char*) VAR_1;
   char* VAR_5;

   int VAR_6 = 0;
   int VAR_7;

   int VAR_8 = VAR_2 % 3 ;


   int VAR_9 = ((VAR_8&1)<<1) + ((VAR_8&2)>>1);

   *VAR_3 = 4*(VAR_2 + VAR_9)/3;
   VAR_5 = (char*) FUNC_0(*VAR_3 + 1);
   if (!VAR_5)
   {

      return 0;
   }

   for (VAR_7=0; VAR_7 <= VAR_2-3; VAR_7+=3)
   {
      unsigned char VAR_10 = VAR_4[VAR_7];
      unsigned char VAR_11 = VAR_4[VAR_7+1];
      unsigned char VAR_12 = VAR_4[VAR_7+2];

      VAR_5[VAR_6++] = VAR_0[VAR_10 >> 2];
      VAR_5[VAR_6++] = VAR_0[((0x3&VAR_10)<<4) + (VAR_11 >> 4)];
      VAR_5[VAR_6++] = VAR_0[((0x0f&VAR_11)<<2) + (VAR_12>>6)];
      VAR_5[VAR_6++] = VAR_0[0x3f&VAR_12];
   }

   if (VAR_9==2)
   {
      VAR_5[VAR_6++] = VAR_0[VAR_4[VAR_7] >> 2];
      VAR_5[VAR_6++] = VAR_0[(0x3&VAR_4[VAR_7])<<4];
      VAR_5[VAR_6++] = '=';
      VAR_5[VAR_6++] = '=';
   }
   else if (VAR_9==1)
   {
      VAR_5[VAR_6++] = VAR_0[VAR_4[VAR_7] >> 2];
      VAR_5[VAR_6++] = VAR_0[((0x3&VAR_4[VAR_7])<<4) + (VAR_4[VAR_7+1] >> 4)];
      VAR_5[VAR_6++] = VAR_0[(0x0f&VAR_4[VAR_7+1])<<2];
      VAR_5[VAR_6++] = '=';
   }

   VAR_5[VAR_6]=0;
   return VAR_5;
}

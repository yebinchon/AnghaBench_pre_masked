
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int* VAR_0 ;

unsigned char* FUNC_1(const char* VAR_1, int VAR_2, int *VAR_3)
{
   const unsigned char *VAR_4 = (const unsigned char*) VAR_1;
   unsigned char *VAR_5;
   int VAR_6 = 0;
   int VAR_7;
   int VAR_8 = 0;

   if (VAR_2 < 2) {




      *VAR_3 = 0;
      return 0;
   }

   if(VAR_4[VAR_2-1]=='=')
      ++VAR_8;
   if(VAR_4[VAR_2-2]=='=')
      ++VAR_8;

   *VAR_3 = 3*VAR_2/4 - VAR_8;
   VAR_5 = (unsigned char*)FUNC_0(*VAR_3);

   if (!VAR_5)
   {

      return 0;
   }

   for (VAR_7=0; VAR_7 <= VAR_2-4-VAR_8; VAR_7+=4)
   {
      int VAR_9 = VAR_0[VAR_4[VAR_7]];
      int VAR_10 = VAR_0[VAR_4[VAR_7+1]];
      int VAR_11 = VAR_0[VAR_4[VAR_7+2]];
      int VAR_12 = VAR_0[VAR_4[VAR_7+3]];

      VAR_5[VAR_6++] = (VAR_9<<2) | (VAR_10>>4);
      VAR_5[VAR_6++] = (VAR_10<<4) | (VAR_11>>2);
      VAR_5[VAR_6++] = (VAR_11<<6) | (VAR_12);
   }

   if (VAR_8==1)
   {
      int VAR_13 = VAR_0[VAR_4[VAR_7]];
      int VAR_14 = VAR_0[VAR_4[VAR_7+1]];
      int VAR_15 = VAR_0[VAR_4[VAR_7+2]];

      VAR_5[VAR_6++] = (VAR_13<<2) | (VAR_14>>4);
      VAR_5[VAR_6++] = (VAR_14<<4) | (VAR_15>>2);
   }
   else if (VAR_8==2)
   {
      int VAR_16 = VAR_0[VAR_4[VAR_7]];
      int VAR_17 = VAR_0[VAR_4[VAR_7+1]];

      VAR_5[VAR_6++] = (VAR_16<<2) | (VAR_17>>4);
   }

   return VAR_5;
}

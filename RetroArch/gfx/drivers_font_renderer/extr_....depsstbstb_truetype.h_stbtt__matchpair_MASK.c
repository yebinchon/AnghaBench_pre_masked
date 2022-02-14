
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char stbtt_uint8 ;
typedef int stbtt_uint32 ;
typedef int stbtt_int32 ;


 scalar_t__ FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(stbtt_uint8 *VAR_0, stbtt_uint32 VAR_1, stbtt_uint8 *VAR_2,
      stbtt_int32 VAR_3, stbtt_int32 VAR_4, stbtt_int32 VAR_5)
{
   stbtt_int32 VAR_6;
   stbtt_int32 VAR_7 = FUNC_2(VAR_0+VAR_1+2);
   stbtt_int32 VAR_8 = VAR_1 + FUNC_2(VAR_0+VAR_1+4);

   for (VAR_6=0; VAR_6 < VAR_7; ++VAR_6)
   {
      stbtt_uint32 VAR_9 = VAR_1 + 6 + 12 * VAR_6;
      stbtt_int32 VAR_10 = FUNC_2(VAR_0+VAR_9+6);
      if (VAR_10 == VAR_4)
      {

         stbtt_int32 VAR_11 = FUNC_2(VAR_0+VAR_9+0), VAR_12 = FUNC_2(VAR_0+VAR_9+2), VAR_13 = FUNC_2(VAR_0+VAR_9+4);


         if (VAR_11 == 0 || (VAR_11 == 3 && VAR_12 == 1) || (VAR_11 == 3 && VAR_12 == 10))
         {
            stbtt_int32 VAR_14 = FUNC_2(VAR_0+VAR_9+8);
            stbtt_int32 VAR_15 = FUNC_2(VAR_0+VAR_9+10);


            stbtt_int32 VAR_16 = FUNC_1(VAR_2, VAR_3, VAR_0+VAR_8+VAR_15,VAR_14);
            if (VAR_16 >= 0)
            {

               if (VAR_6+1 < VAR_7 && FUNC_2(VAR_0+VAR_9+12+6) == VAR_5
                     && FUNC_2(VAR_0+VAR_9+12) == VAR_11 && FUNC_2(VAR_0+VAR_9+12+2) == VAR_12
                     && FUNC_2(VAR_0+VAR_9+12+4) == VAR_13)
               {
                  VAR_14 = FUNC_2(VAR_0+VAR_9+12+8);
                  VAR_15 = FUNC_2(VAR_0+VAR_9+12+10);

                  if (VAR_14 == 0)
                  {
                     if (VAR_16 == VAR_3)
                        return 1;
                  }
                  else if (VAR_16 < VAR_3 && VAR_2[VAR_16] == ' ')
                  {
                     ++VAR_16;
                     if (FUNC_0((char*)(VAR_2+VAR_16),
                              VAR_3-VAR_16, (char*)(VAR_0+VAR_8+VAR_15),VAR_14))
                        return 1;
                  }
               }
               else
               {

                  if (VAR_16 == VAR_3)
                     return 1;
               }
            }
         }


      }
   }
   return 0;
}

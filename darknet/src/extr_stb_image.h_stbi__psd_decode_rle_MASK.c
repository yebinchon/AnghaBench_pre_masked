
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* stbi_uc ;
typedef int stbi__context ;


 void* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(stbi__context *VAR_0, stbi_uc *VAR_1, int VAR_2)
{
   int VAR_3, VAR_4, VAR_5;

   VAR_3 = 0;
   while ((VAR_4 = VAR_2 - VAR_3) > 0) {
      VAR_5 = FUNC_0(VAR_0);
      if (VAR_5 == 128) {

      } else if (VAR_5 < 128) {

         VAR_5++;
         if (VAR_5 > VAR_4) return 0;
         VAR_3 += VAR_5;
         while (VAR_5) {
            *VAR_1 = FUNC_0(VAR_0);
            VAR_1 += 4;
            VAR_5--;
         }
      } else if (VAR_5 > 128) {
         stbi_uc VAR_6;


         VAR_5 = 257 - VAR_5;
         if (VAR_5 > VAR_4) return 0;
         VAR_6 = FUNC_0(VAR_0);
         VAR_3 += VAR_5;
         while (VAR_5) {
            *VAR_1 = VAR_6;
            VAR_1 += 4;
            VAR_5--;
         }
      }
   }

   return 1;
}

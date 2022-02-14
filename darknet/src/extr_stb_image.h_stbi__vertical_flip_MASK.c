
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
typedef int stbi_uc ;


 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
   int VAR_4;
   size_t VAR_5 = (size_t)VAR_1 * VAR_3;
   stbi_uc VAR_6[2048];
   stbi_uc *VAR_7 = (stbi_uc *)VAR_0;

   for (VAR_4 = 0; VAR_4 < (VAR_2>>1); VAR_4++) {
      stbi_uc *VAR_8 = VAR_7 + VAR_4*VAR_5;
      stbi_uc *VAR_9 = VAR_7 + (VAR_2 - VAR_4 - 1)*VAR_5;

      size_t VAR_10 = VAR_5;
      while (VAR_10) {
         size_t VAR_11 = (VAR_10 < sizeof(VAR_6)) ? VAR_10 : sizeof(VAR_6);
         FUNC_0(VAR_6, VAR_8, VAR_11);
         FUNC_0(VAR_8, VAR_9, VAR_11);
         FUNC_0(VAR_9, VAR_6, VAR_11);
         VAR_8 += VAR_11;
         VAR_9 += VAR_11;
         VAR_10 -= VAR_11;
      }
   }
}

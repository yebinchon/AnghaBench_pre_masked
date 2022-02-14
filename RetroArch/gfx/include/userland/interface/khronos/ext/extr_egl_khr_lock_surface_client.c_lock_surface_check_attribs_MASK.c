
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int EGLint ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_0(const EGLint *VAR_5, bool *VAR_6, uint32_t *VAR_7)
{
   if (!VAR_5)
      return VAR_3;

   while (1) {
      int VAR_8 = *VAR_5++;
      if (VAR_8 == VAR_1)
         return VAR_3;
      else {
         int VAR_9 = *VAR_5++;
         switch (VAR_8) {
         case 128:
            *VAR_6 = VAR_9 ? 1 : 0;
            break;
         case 129:
            if (VAR_9 & ~(VAR_2 | VAR_4))
               return VAR_0;

            *VAR_7 = VAR_9;
            break;
         default:
            return VAR_0;
         }
      }
   }
}

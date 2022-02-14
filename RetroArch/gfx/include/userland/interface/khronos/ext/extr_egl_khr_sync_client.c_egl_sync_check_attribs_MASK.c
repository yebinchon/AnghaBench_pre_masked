
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EGLint ;
typedef int EGLenum ;
typedef int EGLBoolean ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static EGLBoolean FUNC_0(const EGLint *VAR_4, EGLenum VAR_5,
      EGLint *VAR_6, EGLint *VAR_7, EGLint *VAR_8)
{
   switch (VAR_5) {
   case 128:
      *VAR_6 = VAR_2;
      *VAR_7 = 0;
      *VAR_8 = VAR_3;
      break;
   default :
      *VAR_6 = VAR_1;
      *VAR_7 = 0;
      *VAR_8 = 0;
      break;
   }

   if (VAR_4) {
      while (1) {
         int VAR_9 = *VAR_4++;
         if (VAR_9 == VAR_1)
            break;
         else {
                               VAR_4++;
            switch (VAR_9) {
            default:
               return VAR_0;
            }
         }
      }
   }

   return ((VAR_5 == 128) || (VAR_5 == 0));
}

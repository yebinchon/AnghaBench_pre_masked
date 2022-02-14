
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EGLint ;
typedef int EGLBoolean ;



 int VAR_0 ;

 int VAR_1 ;

EGLBoolean FUNC_0(const EGLint *VAR_2, EGLint VAR_3, EGLint *VAR_4)
{
   if (!VAR_2)
      return VAR_1;

   while (1) {
      switch (*VAR_2++) {
      case 129:
      {
         EGLint VAR_5 = *VAR_2++;

         if (VAR_5 < 1 || VAR_5 > VAR_3)
            return VAR_0;
         else
            *VAR_4 = VAR_5;

         break;
      }
      case 128:
         return VAR_1;
      default:
         return VAR_0;
      }
   }
}

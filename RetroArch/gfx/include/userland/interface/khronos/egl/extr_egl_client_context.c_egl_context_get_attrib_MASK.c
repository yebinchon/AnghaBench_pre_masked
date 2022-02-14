
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int renderbuffer; int type; int configname; } ;
typedef int EGLint ;
typedef TYPE_1__ EGL_CONTEXT_T ;
typedef int EGLBoolean ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;



 int FUNC_0 () ;

EGLBoolean FUNC_1(EGL_CONTEXT_T *VAR_4, EGLint VAR_5, EGLint *VAR_6)
{
   switch (VAR_5) {
   case 134:
      *VAR_6 = (int)(intptr_t)VAR_4->configname;
      return VAR_3;
   case 133:
      switch (VAR_4->type) {
      case 130:
      case 129:
         *VAR_6 = VAR_1;
         break;
      case 128:
         *VAR_6 = VAR_2;
         break;
      default:
         FUNC_0();
         break;
      }
      return VAR_3;
   case 132:
      switch (VAR_4->type) {
      case 130:
      case 128:
         *VAR_6 = 1;
         break;
      case 129:
         *VAR_6 = 2;
         break;
      default:
         FUNC_0();
         break;
      }
      return VAR_3;
   case 131:
   {

      *VAR_6 = VAR_4->renderbuffer;
      return VAR_3;
   }
   default:
      return VAR_0;
   }
}

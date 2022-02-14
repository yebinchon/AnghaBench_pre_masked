
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int buffers; } ;
typedef int EGLint ;
typedef TYPE_1__ EGL_SURFACE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 () ;


EGLint FUNC_1(EGL_SURFACE_T *VAR_3)
{
   switch (VAR_3->type) {
   case 128:
      if (VAR_3->buffers == 1)
         return VAR_2;
      else
         return VAR_0;
   case 130:
      return VAR_0;
   case 129:
      return VAR_2;
   default:
      FUNC_0();
      return VAR_1;
   }
}

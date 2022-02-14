
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int status; int condition; } ;
typedef int EGLint ;
typedef TYPE_1__ EGL_SYNC_T ;
typedef int EGLBoolean ;


 int VAR_0 ;



 int VAR_1 ;

__attribute__((used)) static EGLBoolean FUNC_0(EGL_SYNC_T *VAR_2, EGLint VAR_3, EGLint *VAR_4)
{
   switch (VAR_3) {
   case 128:
      *VAR_4 = VAR_2->type;
      return VAR_1;
   case 129:
      *VAR_4 = VAR_2->status;
      return VAR_1;
   case 130:
      *VAR_4 = VAR_2->condition;
      return VAR_1;
   default:
      return VAR_0;
   }
}

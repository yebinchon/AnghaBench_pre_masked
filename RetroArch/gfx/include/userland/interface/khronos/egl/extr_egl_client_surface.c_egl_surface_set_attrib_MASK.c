
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mipmap_level; int swap_behavior; int multisample_resolve; int serverbuffer; int type; } ;
typedef int EGLint ;
typedef TYPE_1__ EGL_SURFACE_T ;
typedef int CLIENT_THREAD_STATE_T ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;

 int VAR_4 ;
 int FUNC_1 (int ,int *,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;

EGLint FUNC_4(EGL_SURFACE_T *VAR_6, EGLint VAR_7, EGLint VAR_8)
{
   CLIENT_THREAD_STATE_T *VAR_9 = FUNC_0();
   switch (VAR_7) {
   case 132:
      if (VAR_6->type == VAR_4) {
         FUNC_1(VAR_5,
                   VAR_9,
                   VAR_0,
                   FUNC_3(VAR_6->serverbuffer),
                   FUNC_2(VAR_8));

         VAR_6->mipmap_level = VAR_8;
      }
      return VAR_3;
   case 128:
      switch (VAR_8) {
      case 133:
      case 134:
         VAR_6->swap_behavior = VAR_8;
         return VAR_3;
      default:
         return VAR_2;
      }
   case 131:
      switch (VAR_8) {
      case 129:
      case 130:
         VAR_6->multisample_resolve = VAR_8;
         return VAR_3;
      default:
         return VAR_2;
      }
   default:
      return VAR_1;
   }
}

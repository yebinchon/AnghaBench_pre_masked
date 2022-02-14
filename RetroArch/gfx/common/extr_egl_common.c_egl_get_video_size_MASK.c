
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dpy; scalar_t__ surf; } ;
typedef TYPE_1__ egl_ctx_data_t ;
typedef unsigned int EGLint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,unsigned int*) ;

void FUNC_1(egl_ctx_data_t *VAR_4, unsigned *VAR_5, unsigned *VAR_6)
{
   *VAR_5 = 0;
   *VAR_6 = 0;

   if (VAR_4->dpy != VAR_1 && VAR_4->surf != VAR_2)
   {
      EGLint VAR_7, VAR_8;

      FUNC_0(VAR_4->dpy, VAR_4->surf, VAR_3, &VAR_7);
      FUNC_0(VAR_4->dpy, VAR_4->surf, VAR_0, &VAR_8);
      *VAR_5 = VAR_7;
      *VAR_6 = VAR_8;
   }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ctx; scalar_t__ hw_ctx; scalar_t__ surf; scalar_t__ config; scalar_t__ dpy; } ;
typedef TYPE_1__ egl_ctx_data_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(egl_ctx_data_t *VAR_4)
{
   if (VAR_4->dpy)
   {
      FUNC_2(VAR_4->dpy,
            VAR_2, VAR_2, VAR_0);
      if (VAR_4->ctx != VAR_0)
         FUNC_0(VAR_4->dpy, VAR_4->ctx);

      if (VAR_4->hw_ctx != VAR_0)
         FUNC_0(VAR_4->dpy, VAR_4->hw_ctx);

      if (VAR_4->surf != VAR_2)
         FUNC_1(VAR_4->dpy, VAR_4->surf);
      FUNC_3(VAR_4->dpy);
   }





   VAR_4->ctx = VAR_0;
   VAR_4->hw_ctx = VAR_0;
   VAR_4->surf = VAR_2;
   VAR_4->dpy = VAR_1;
   VAR_4->config = 0;
   VAR_3 = 0;

   FUNC_4();
}

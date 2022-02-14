
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dpy; scalar_t__ surf; } ;
typedef TYPE_1__ egl_ctx_data_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

void FUNC_1(void *VAR_2)
{
   egl_ctx_data_t *VAR_3 = (egl_ctx_data_t*)VAR_2;
   if ( VAR_3 &&
         VAR_3->dpy != VAR_0 &&
         VAR_3->surf != VAR_1
         )
      FUNC_0(VAR_3->dpy, VAR_3->surf);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use_hw_ctx; scalar_t__ dpy; scalar_t__ surf; int ctx; int hw_ctx; } ;
typedef TYPE_1__ egl_ctx_data_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ) ;

void FUNC_1(egl_ctx_data_t *VAR_2, bool VAR_3)
{
   VAR_2->use_hw_ctx = VAR_3;

   if (VAR_2->dpy == VAR_0)
      return;
   if (VAR_2->surf == VAR_1)
      return;

   FUNC_0(VAR_2->dpy, VAR_2->surf,
         VAR_2->surf,
         VAR_3 ? VAR_2->hw_ctx : VAR_2->ctx);
}

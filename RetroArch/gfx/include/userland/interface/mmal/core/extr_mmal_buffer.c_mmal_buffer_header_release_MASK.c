
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {scalar_t__ refcount; int pre_release_userdata; scalar_t__ (* pf_pre_release ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

void FUNC_3(MMAL_BUFFER_HEADER_T *VAR_0)
{




   if(--VAR_0->priv->refcount != 0)
      return;

   if (VAR_0->priv->pf_pre_release)
   {
      if (VAR_0->priv->pf_pre_release(VAR_0, VAR_0->priv->pre_release_userdata))
         return;
   }
   FUNC_1(VAR_0);
}

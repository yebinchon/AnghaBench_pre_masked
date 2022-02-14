
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {void* pre_release_userdata; int pf_pre_release; } ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BH_PRE_RELEASE_CB_T ;



void FUNC_0(MMAL_BUFFER_HEADER_T *VAR_0, MMAL_BH_PRE_RELEASE_CB_T VAR_1, void *VAR_2)
{
   VAR_0->priv->pf_pre_release = VAR_1;
   VAR_0->priv->pre_release_userdata = VAR_2;
}

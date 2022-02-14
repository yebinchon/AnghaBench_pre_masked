
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {TYPE_2__* reference; } ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;



MMAL_BUFFER_HEADER_T *FUNC_0(MMAL_BUFFER_HEADER_T *VAR_0)
{
   return VAR_0->priv->reference;
}

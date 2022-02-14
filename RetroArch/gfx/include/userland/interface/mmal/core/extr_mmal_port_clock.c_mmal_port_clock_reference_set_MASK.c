
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {TYPE_1__* clock; } ;
struct TYPE_5__ {int is_reference; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MMAL_BOOL_T ;


 int VAR_0 ;

MMAL_STATUS_T FUNC_0(MMAL_PORT_T *VAR_1, MMAL_BOOL_T VAR_2)
{
   VAR_1->priv->clock->is_reference = VAR_2;
   return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_13__ {unsigned int output_num; TYPE_4__* priv; TYPE_2__** output; TYPE_1__** input; } ;
struct TYPE_12__ {scalar_t__ type; int index; TYPE_6__* component; scalar_t__ buffer_size; } ;
struct TYPE_11__ {TYPE_3__* module; } ;
struct TYPE_10__ {int enabled_flags; } ;
struct TYPE_9__ {void* buffer_size; void* buffer_num; } ;
struct TYPE_8__ {void* buffer_size; void* buffer_num; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef int MMAL_PORT_BH_CB_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;


 void* FUNC_0 (void*,void*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_2, MMAL_PORT_BH_CB_T VAR_3)
{
   FUNC_1(VAR_3);
   if (VAR_2->buffer_size)
   if (VAR_2->type == VAR_0)
      VAR_2->component->priv->module->enabled_flags |= (1<<VAR_2->index);
   return VAR_1;
}

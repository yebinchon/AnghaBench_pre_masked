
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int flags; scalar_t__ length; } ;
struct TYPE_10__ {int queue_out; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {TYPE_3__* module; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_COMPONENT_T *VAR_3, MMAL_PORT_T *VAR_4)
{
   MMAL_COMPONENT_MODULE_T *VAR_5 = VAR_3->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_6 = FUNC_1(VAR_5->queue_out);

   if (!VAR_6)
      return VAR_1;

   VAR_6->length = 0;
   VAR_6->flags = VAR_0;
   FUNC_0(VAR_4, VAR_6);
   return VAR_2;
}

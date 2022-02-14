
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int queue_in; int queue_out; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__* component; } ;
struct TYPE_7__ {TYPE_4__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef TYPE_4__ MMAL_COMPONENT_MODULE_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
   MMAL_COMPONENT_T *VAR_5 = VAR_3->component;
   MMAL_COMPONENT_MODULE_T *VAR_6 = VAR_5->priv->module;

   if(VAR_3->type == VAR_1) FUNC_1(VAR_6->queue_out, VAR_4);
   if(VAR_3->type == VAR_0) FUNC_1(VAR_6->queue_in, VAR_4);
   FUNC_0(VAR_3->component);

   return VAR_2;
}

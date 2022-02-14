
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * queue_in; int * queue_out; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__* component; } ;
struct TYPE_7__ {TYPE_4__* module; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_QUEUE_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef TYPE_4__ MMAL_COMPONENT_MODULE_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_4)
{
   MMAL_COMPONENT_T *VAR_5 = VAR_4->component;
   MMAL_COMPONENT_MODULE_T *VAR_6 = VAR_5->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_7;
   MMAL_QUEUE_T *VAR_8;

   if(VAR_4->type == VAR_2)
      VAR_8 = VAR_6->queue_out;
   else if(VAR_4->type == VAR_1)
      VAR_8 = VAR_6->queue_in;
   else
      return VAR_0;




   while((VAR_7 = FUNC_1(VAR_8)))
      FUNC_0(VAR_4, VAR_7);

   return VAR_3;
}

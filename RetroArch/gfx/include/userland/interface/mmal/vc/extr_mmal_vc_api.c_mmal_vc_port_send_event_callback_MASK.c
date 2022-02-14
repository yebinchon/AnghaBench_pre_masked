
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* priv; } ;
struct TYPE_14__ {TYPE_1__* priv; } ;
struct TYPE_13__ {TYPE_9__* component; } ;
struct TYPE_12__ {TYPE_2__* module; } ;
struct TYPE_11__ {int callback_queue; } ;
struct TYPE_10__ {void* component_data; } ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int ,TYPE_5__*) ;

__attribute__((used)) static void FUNC_2(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{

   VAR_1->priv->component_data = (void *)VAR_0;
   FUNC_1(VAR_0->component->priv->module->callback_queue, VAR_1);
   FUNC_0(VAR_0->component);
}

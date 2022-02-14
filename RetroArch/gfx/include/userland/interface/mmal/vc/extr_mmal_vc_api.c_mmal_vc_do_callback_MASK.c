
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_25__ {int flags; int data; TYPE_1__* priv; } ;
struct TYPE_24__ {int event_ctx; int callback_queue; } ;
struct TYPE_23__ {TYPE_4__* priv; } ;
struct TYPE_22__ {TYPE_3__* priv; int component; } ;
struct TYPE_21__ {TYPE_7__* module; } ;
struct TYPE_20__ {TYPE_2__* module; } ;
struct TYPE_19__ {int zero_copy_workaround; } ;
struct TYPE_18__ {scalar_t__ component_data; } ;
struct TYPE_17__ {int * client_context; } ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;
typedef TYPE_7__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_8__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_15__* FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_8__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_8__*) ;
 TYPE_8__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(MMAL_COMPONENT_T *VAR_2)
{
   MMAL_COMPONENT_MODULE_T *VAR_3 = VAR_2->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_4;
   MMAL_PORT_T *VAR_5;


   VAR_4 = FUNC_4(VAR_3->callback_queue);
   if (!VAR_4)
      return;

   VAR_5 = (MMAL_PORT_T *)VAR_4->priv->component_data;


   if (VAR_4->flags & VAR_0)
       FUNC_1(VAR_5->component, VAR_1);


   if (FUNC_0(VAR_4)->client_context ==
       &VAR_2->priv->module->event_ctx)
   {
      FUNC_3(VAR_5, VAR_4);
      return;
   }

   VAR_4->data = FUNC_5(VAR_4->data, VAR_5->priv->module->zero_copy_workaround);
   FUNC_2(VAR_5, VAR_4);
}

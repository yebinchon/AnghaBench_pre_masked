
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int reply ;
typedef int msg ;
struct TYPE_15__ {scalar_t__ status; } ;
typedef TYPE_4__ mmal_worker_reply ;
struct TYPE_16__ {int header; int port_handle; int action; int component_handle; } ;
typedef TYPE_5__ mmal_worker_port_action ;
struct TYPE_18__ {scalar_t__ connected; scalar_t__ has_pool; int pool; int port_handle; int component_handle; } ;
struct TYPE_17__ {scalar_t__ buffer_num; TYPE_10__* component; TYPE_1__* priv; } ;
struct TYPE_14__ {TYPE_2__* module; } ;
struct TYPE_13__ {int callback_queue; } ;
struct TYPE_12__ {TYPE_7__* module; } ;
struct TYPE_11__ {TYPE_3__* priv; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_PORT_MODULE_T ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *,int,int ,TYPE_4__*,size_t*,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_9(MMAL_PORT_T *VAR_4)
{
   MMAL_PORT_MODULE_T *VAR_5 = VAR_4->priv->module;
   MMAL_STATUS_T VAR_6;
   mmal_worker_reply VAR_7;
   mmal_worker_port_action VAR_8;
   size_t VAR_9 = sizeof(VAR_7);

   VAR_8.component_handle = VAR_5->component_handle;
   VAR_8.action = VAR_3;
   VAR_8.port_handle = VAR_5->port_handle;

   VAR_6 = FUNC_5(FUNC_3(), &VAR_8.header, sizeof(VAR_8),
                                     VAR_2, &VAR_7, &VAR_9, VAR_0);
   if (VAR_6 == VAR_1)
   {
      FUNC_6(VAR_9 == sizeof(VAR_7));
      VAR_6 = VAR_7.status;
   }
   if (VAR_6 != VAR_1)
      FUNC_0("failed to disable port - reason %d", VAR_6);

   if (VAR_5->has_pool)
   {


      FUNC_6(FUNC_7(&VAR_5->pool) == VAR_4->buffer_num);
      FUNC_8(&VAR_5->pool);
      VAR_5->has_pool = 0;
   }


   while (FUNC_1(VAR_4->component->priv->module->callback_queue))
      FUNC_2(VAR_4->component);

   if (VAR_5->connected)
      FUNC_4(VAR_5->connected);

   return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int reply ;
typedef int msg ;
struct TYPE_14__ {scalar_t__ status; } ;
typedef TYPE_4__ mmal_worker_reply ;
struct TYPE_11__ {int port_handle; int component_handle; } ;
struct TYPE_12__ {TYPE_1__ connect; } ;
struct TYPE_15__ {int header; TYPE_2__ param; int port_handle; int action; int component_handle; } ;
typedef TYPE_5__ mmal_worker_port_action ;
struct TYPE_17__ {TYPE_6__* connected; int port_handle; int component_handle; } ;
struct TYPE_16__ {TYPE_3__* priv; } ;
struct TYPE_13__ {scalar_t__ pf_enable; TYPE_7__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_PORT_MODULE_T ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *,int,int ,TYPE_4__*,size_t*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_PORT_T *VAR_6, MMAL_PORT_T *VAR_7)
{
   MMAL_PORT_MODULE_T *VAR_8 = VAR_6->priv->module;
   MMAL_STATUS_T VAR_9;
   mmal_worker_reply VAR_10;
   mmal_worker_port_action VAR_11;
   size_t VAR_12 = sizeof(VAR_10);


   if (VAR_7 && VAR_6->priv->pf_enable != VAR_7->priv->pf_enable)
      return VAR_0;


   VAR_11.component_handle = VAR_8->component_handle;
   VAR_11.action = VAR_7 ? VAR_4 : VAR_5;
   VAR_11.port_handle = VAR_8->port_handle;
   if (VAR_7)
   {
      VAR_11.param.connect.component_handle = VAR_7->priv->module->component_handle;
      VAR_11.param.connect.port_handle = VAR_7->priv->module->port_handle;
   }

   VAR_9 = FUNC_3(FUNC_2(), &VAR_11.header, sizeof(VAR_11),
                                     VAR_3, &VAR_10, &VAR_12, VAR_1);
   if (VAR_9 == VAR_2)
   {
      FUNC_4(VAR_12 == sizeof(VAR_10));
      VAR_9 = VAR_10.status;
   }

   if (VAR_9 != VAR_2)
   {
      FUNC_0("failed to connect ports: %s", FUNC_1(VAR_9));
      return VAR_9;
   }

   if (VAR_7)
   {

      VAR_8->connected = VAR_7;
      VAR_7->priv->module->connected = VAR_6;
   }
   else
   {

      if (VAR_8->connected)
         VAR_8->connected->priv->module->connected = ((void*)0);
      VAR_8->connected = ((void*)0);
   }

   return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int core_owns_connection; TYPE_2__* connected_port; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_1__* priv; scalar_t__ is_enabled; int name; } ;
struct TYPE_12__ {scalar_t__ (* pf_connect ) (TYPE_2__*,TYPE_2__*) ;TYPE_3__* core; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PORT_PRIVATE_CORE_T ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,TYPE_2__*,int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_2__*) ;

MMAL_STATUS_T FUNC_5(MMAL_PORT_T *VAR_6, MMAL_PORT_T *VAR_7)
{
   MMAL_PORT_PRIVATE_CORE_T* VAR_8;
   MMAL_PORT_PRIVATE_CORE_T* VAR_9;
   MMAL_STATUS_T VAR_10 = VAR_5;
   MMAL_PORT_T* VAR_11 = ((void*)0);

   if (!VAR_6 || !VAR_6->priv || !VAR_7 || !VAR_7->priv)
   {
      FUNC_1("invalid port");
      return VAR_0;
   }

   if ((VAR_6->type == VAR_3) && (VAR_6->type != VAR_7->type))
   {
      FUNC_1("invalid port connection");
      return VAR_0;
   }

   FUNC_2("connecting %s(%p) to %s(%p)", VAR_6->name, VAR_6, VAR_7->name, VAR_7);

   if (!VAR_6->priv->pf_connect || !VAR_7->priv->pf_connect)
   {
      FUNC_1("at least one pf_connect is NULL");
      return VAR_2;
   }

   VAR_8 = VAR_6->priv->core;
   VAR_9 = VAR_7->priv->core;

   FUNC_0(VAR_6);
   if (VAR_8->connected_port)
   {
      FUNC_1("port %p is already connected", VAR_6);
      FUNC_3(VAR_6);
      return VAR_1;
   }
   if (VAR_6->is_enabled)
   {
      FUNC_1("port %p should not be enabled", VAR_6);
      FUNC_3(VAR_6);
      return VAR_0;
   }

   FUNC_0(VAR_7);
   if (VAR_9->connected_port)
   {
      FUNC_1("port %p is already connected", VAR_7);
      VAR_10 = VAR_1;
      goto finish;
   }
   if (VAR_7->is_enabled)
   {
      FUNC_1("port %p should not be enabled", VAR_7);
      VAR_10 = VAR_0;
      goto finish;
   }

   VAR_8->connected_port = VAR_7;
   VAR_9->connected_port = VAR_6;

   VAR_8->core_owns_connection = 0;
   VAR_9->core_owns_connection = 0;



   VAR_11 = VAR_6->type == VAR_4 ? VAR_6 : VAR_7;
   if (VAR_11->priv->pf_connect(VAR_6, VAR_7) == VAR_5)
      goto finish;

   VAR_8->core_owns_connection = 1;
   VAR_9->core_owns_connection = 1;

finish:
   FUNC_3(VAR_7);
   FUNC_3(VAR_6);
   return VAR_10;
}

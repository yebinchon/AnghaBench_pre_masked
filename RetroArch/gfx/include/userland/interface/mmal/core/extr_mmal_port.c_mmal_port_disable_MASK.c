
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_3__* connected_port; } ;
struct TYPE_15__ {scalar_t__ type; int name; int is_enabled; TYPE_2__* priv; scalar_t__ index; TYPE_1__* component; } ;
struct TYPE_14__ {TYPE_4__* core; int pf_disable; } ;
struct TYPE_13__ {int name; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_PORT_PRIVATE_CORE_T ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int ,TYPE_3__*,...) ;
 int FUNC_2 (char*,int ,int,int,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__) ;

MMAL_STATUS_T FUNC_7(MMAL_PORT_T *VAR_4)
{
   MMAL_STATUS_T VAR_5;
   MMAL_PORT_T *VAR_6;
   MMAL_PORT_PRIVATE_CORE_T *VAR_7;

   if (!VAR_4 || !VAR_4->priv)
      return VAR_0;

   FUNC_2("%s(%i:%i) port %p", VAR_4->component->name,
             (int)VAR_4->type, (int)VAR_4->index, VAR_4);

   if (!VAR_4->priv->pf_disable)
      return VAR_1;

   VAR_7 = VAR_4->priv->core;
   FUNC_0(VAR_4);
   VAR_6 = VAR_7->connected_port;


   if (!VAR_4->is_enabled)
   {
      FUNC_3(VAR_4);
      FUNC_1("port %s(%p) is not enabled", VAR_4->name, VAR_4);
      return VAR_0;
   }

   if (VAR_6)
      FUNC_0(VAR_6);


   if (VAR_6 && VAR_6->type != VAR_2)
   {
      VAR_5 = FUNC_5(VAR_6);
      if (VAR_5 != VAR_3)
      {
         FUNC_1("failed to disable connected port (%s)%p (%s)", VAR_6->name,
            VAR_6, FUNC_6(VAR_5));
         goto end;
      }
   }

   VAR_5 = FUNC_5(VAR_4);
   if (VAR_5 != VAR_3)
   {
      FUNC_1("failed to disable port (%s)%p", VAR_4->name, VAR_4);
      goto end;
   }


   if (VAR_6 && VAR_6->type == VAR_2)
   {
      VAR_5 = FUNC_5(VAR_6);
      if (VAR_5 != VAR_3)
      {
         FUNC_1("failed to disable connected port (%s)%p (%s)", VAR_6->name,
            VAR_6, FUNC_6(VAR_5));
         goto end;
      }
   }

   if (VAR_6)
   {
      VAR_5 = FUNC_4(VAR_4, VAR_6);
      if (VAR_5 != VAR_3)
         FUNC_1("failed to disable connection (%s)%p (%s)", VAR_4->name,
            VAR_4, FUNC_6(VAR_5));
   }

end:
   if (VAR_6)
      FUNC_3(VAR_6);
   FUNC_3(VAR_4);

   return VAR_5;
}

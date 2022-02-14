
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {struct TYPE_18__* next; } ;
struct TYPE_17__ {int * buffer_header_callback; TYPE_4__* queue_first; TYPE_4__** queue_last; scalar_t__ pool_for_connection; } ;
struct TYPE_16__ {int is_enabled; TYPE_1__* priv; int name; int component; } ;
struct TYPE_15__ {scalar_t__ (* pf_disable ) (TYPE_2__*) ;TYPE_3__* core; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PORT_PRIVATE_CORE_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int *,int *) ;
 int FUNC_11 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_14(MMAL_PORT_T *VAR_1)
{
   MMAL_PORT_PRIVATE_CORE_T* VAR_2 = VAR_1->priv->core;
   MMAL_STATUS_T VAR_3 = VAR_0;
   MMAL_BUFFER_HEADER_T *VAR_4;

   FUNC_2(VAR_1);

   if (!VAR_1->is_enabled)
      goto end;

   FUNC_3(VAR_1);
   VAR_1->is_enabled = 0;
   FUNC_7(VAR_1);

   FUNC_8(VAR_1->component);

   if (VAR_2->pool_for_connection)
      FUNC_10(VAR_2->pool_for_connection, ((void*)0), ((void*)0));

   VAR_3 = VAR_1->priv->pf_disable(VAR_1);

   FUNC_9(VAR_1->component);

   if (VAR_3 != VAR_0)
   {
      FUNC_5("port %p could not be disabled (%s)", VAR_1->name, FUNC_12(VAR_3));
      FUNC_3(VAR_1);
      VAR_1->is_enabled = 1;
      FUNC_7(VAR_1);
      goto end;
   }


   VAR_4 = VAR_1->priv->core->queue_first;
   while (VAR_4)
   {
      MMAL_BUFFER_HEADER_T *VAR_5 = VAR_4->next;
      FUNC_11(VAR_1, VAR_4);
      VAR_4 = VAR_5;
   }
   VAR_1->priv->core->queue_first = 0;
   VAR_1->priv->core->queue_last = &VAR_1->priv->core->queue_first;


   FUNC_4("%s waiting for %i buffers left in transit", VAR_1->name, (int)FUNC_0(VAR_1));
   FUNC_1(VAR_1);
   FUNC_4("%s has no buffers left in transit", VAR_1->name);

   VAR_1->priv->core->buffer_header_callback = ((void*)0);

 end:
   FUNC_6(VAR_1);
   return VAR_3;
}

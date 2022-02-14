
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int name; } ;
struct TYPE_17__ {struct TYPE_17__* next; } ;
struct TYPE_16__ {TYPE_9__* component; TYPE_2__* priv; int is_enabled; scalar_t__ index; scalar_t__ type; } ;
struct TYPE_15__ {scalar_t__ (* pf_flush ) (TYPE_3__*) ;TYPE_1__* core; } ;
struct TYPE_14__ {TYPE_4__* queue_first; TYPE_4__** queue_last; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int ,int,int,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;

MMAL_STATUS_T FUNC_7(MMAL_PORT_T *VAR_3)
{
   MMAL_BUFFER_HEADER_T *VAR_4 = 0;
   MMAL_STATUS_T VAR_5;

   if (!VAR_3 || !VAR_3->priv)
      return VAR_0;

   FUNC_1("%s(%i:%i) port %p", VAR_3->component->name,
             (int)VAR_3->type, (int)VAR_3->index, VAR_3);

   if (!VAR_3->priv->pf_flush)
      return VAR_1;


   FUNC_3(VAR_3->component);
   FUNC_0(VAR_3);

   if (!VAR_3->is_enabled)
   {
      FUNC_2(VAR_3);
      FUNC_4(VAR_3->component);
      return VAR_2;
   }

   VAR_5 = VAR_3->priv->pf_flush(VAR_3);
   if (VAR_5 == VAR_2)
   {

      VAR_4 = VAR_3->priv->core->queue_first;
      VAR_3->priv->core->queue_first = 0;
      VAR_3->priv->core->queue_last = &VAR_3->priv->core->queue_first;
   }

   FUNC_2(VAR_3);
   FUNC_4(VAR_3->component);

   while (VAR_4)
   {
      MMAL_BUFFER_HEADER_T *VAR_6 = VAR_4->next;
      FUNC_5(VAR_3, VAR_4);
      VAR_4 = VAR_6;
   }
   return VAR_5;
}

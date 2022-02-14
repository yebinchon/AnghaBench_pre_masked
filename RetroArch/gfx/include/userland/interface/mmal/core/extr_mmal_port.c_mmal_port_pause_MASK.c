
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {struct TYPE_13__* next; } ;
struct TYPE_12__ {TYPE_2__* priv; scalar_t__ is_enabled; } ;
struct TYPE_11__ {scalar_t__ (* pf_send ) (TYPE_3__*,TYPE_4__*) ;TYPE_1__* core; } ;
struct TYPE_10__ {scalar_t__ is_paused; TYPE_4__* queue_first; TYPE_4__** queue_last; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;
typedef scalar_t__ MMAL_BOOL_T ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_4__*) ;

MMAL_STATUS_T FUNC_3(MMAL_PORT_T *VAR_1, MMAL_BOOL_T VAR_2)
{
   MMAL_STATUS_T VAR_3 = VAR_0;

   FUNC_0(VAR_1);


   if (!VAR_2 && VAR_1->is_enabled)
   {
      MMAL_BUFFER_HEADER_T *VAR_4 = VAR_1->priv->core->queue_first;
      while (VAR_4)
      {
         MMAL_BUFFER_HEADER_T *VAR_5 = VAR_4->next;
         VAR_3 = VAR_1->priv->pf_send(VAR_1, VAR_4);
         if (VAR_3 != VAR_0)
         {
            VAR_4->next = VAR_5;
            break;
         }
         VAR_4 = VAR_5;
      }



      if (VAR_3 != VAR_0)
      {
         VAR_1->priv->core->queue_first = VAR_4;
      }
      else
      {
         VAR_1->priv->core->queue_first = 0;
         VAR_1->priv->core->queue_last = &VAR_1->priv->core->queue_first;
      }
   }

   if (VAR_3 == VAR_0)
      VAR_1->priv->core->is_paused = VAR_2;

   FUNC_1(VAR_1);
   return VAR_3;
}

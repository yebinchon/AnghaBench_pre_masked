
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VCOS_THREAD_ATTR_T ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_8__ {int priority; } ;
struct TYPE_10__ {void (* pf_action ) (TYPE_2__*) ;int action_event; int action_mutex; int action_thread; TYPE_1__ private; } ;
struct TYPE_9__ {int name; scalar_t__ priv; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_4__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int *,int ,TYPE_2__*) ;

MMAL_STATUS_T FUNC_7(MMAL_COMPONENT_T *VAR_5,
                                             void (*VAR_6)(MMAL_COMPONENT_T *) )
{
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_7 = (MMAL_COMPONENT_CORE_PRIVATE_T *)VAR_5->priv;
   VCOS_THREAD_ATTR_T VAR_8;
   VCOS_STATUS_T VAR_9;

   if (VAR_7->pf_action)
      return VAR_0;

   VAR_9 = FUNC_0(&VAR_7->action_event, VAR_5->name);
   if (VAR_9 != VAR_3)
      return VAR_1;

   VAR_9 = FUNC_2(&VAR_7->action_mutex, VAR_5->name);
   if (VAR_9 != VAR_3)
   {
      FUNC_1(&VAR_7->action_event);
      return VAR_1;
   }

   FUNC_4(&VAR_8);
   FUNC_5(&VAR_8,
                                VAR_7->private.priority);
   VAR_9 = FUNC_6(&VAR_7->action_thread, VAR_5->name, &VAR_8,
                               VAR_4, VAR_5);
   if (VAR_9 != VAR_3)
   {
      FUNC_3(&VAR_7->action_mutex);
      FUNC_1(&VAR_7->action_event);
      return VAR_1;
   }

   VAR_7->pf_action = VAR_6;
   return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int lock; } ;
struct TYPE_9__ {struct TYPE_9__* port; scalar_t__ control; TYPE_1__* priv; int id; int name; } ;
struct TYPE_8__ {scalar_t__ (* pf_destroy ) (TYPE_2__*) ;scalar_t__ event_pool; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_9(MMAL_COMPONENT_T *VAR_1)
{
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_2 = (MMAL_COMPONENT_CORE_PRIVATE_T *)VAR_1->priv;
   MMAL_STATUS_T VAR_3;

   FUNC_0("%s %d", VAR_1->name, VAR_1->id);

   FUNC_1(VAR_1);




   if (VAR_1->priv->pf_destroy)
   {
      VAR_3 = VAR_1->priv->pf_destroy(VAR_1);
      if(!FUNC_8(VAR_3 == VAR_0))
         return VAR_3;
   }

   if (VAR_1->priv->event_pool)
      FUNC_3(VAR_1->priv->event_pool);

   if (VAR_1->control)
      FUNC_4(VAR_1->control);

   if (VAR_1->port)
      FUNC_6(VAR_1->port);

   FUNC_7(&VAR_2->lock);
   FUNC_6(VAR_1);
   FUNC_2();
   return VAR_0;
}

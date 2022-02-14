
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int lock; scalar_t__ destruction_pending; } ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int name; TYPE_3__* component; } ;
struct TYPE_8__ {scalar_t__ refcount_ports; scalar_t__ refcount; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef TYPE_4__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 int FUNC_0 (char*,int ,TYPE_2__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

MMAL_STATUS_T FUNC_5(MMAL_PORT_T *VAR_2)
{
   MMAL_COMPONENT_T *VAR_3 = VAR_2->component;
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_4 = (MMAL_COMPONENT_CORE_PRIVATE_T *)VAR_3->priv;

   FUNC_0("port %s(%p), refcount %i", VAR_2->name, VAR_2,
             VAR_3->priv->refcount_ports);


   if (!FUNC_4(VAR_3->priv->refcount_ports > 0))
      return VAR_0;

   FUNC_2(&VAR_4->lock);
   if (--VAR_3->priv->refcount_ports ||
       VAR_3->priv->refcount || VAR_4->destruction_pending)
   {
      FUNC_3(&VAR_4->lock);
      return VAR_1;
   }
   FUNC_3(&VAR_4->lock);

   return FUNC_1(VAR_3);
}

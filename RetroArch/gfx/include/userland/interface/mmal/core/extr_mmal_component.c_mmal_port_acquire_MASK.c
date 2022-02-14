
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int lock; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int name; TYPE_3__* component; } ;
struct TYPE_7__ {int refcount_ports; } ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef TYPE_4__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 int FUNC_0 (char*,int ,TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(MMAL_PORT_T *VAR_0)
{
   MMAL_COMPONENT_T *VAR_1 = VAR_0->component;
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_2 = (MMAL_COMPONENT_CORE_PRIVATE_T *)VAR_1->priv;

   FUNC_0("port %s(%p), refcount %i", VAR_0->name, VAR_0,
             VAR_1->priv->refcount_ports);

   FUNC_1(&VAR_2->lock);
   VAR_1->priv->refcount_ports++;
   FUNC_2(&VAR_2->lock);
}

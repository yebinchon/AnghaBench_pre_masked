
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lock; } ;
struct TYPE_6__ {TYPE_1__* priv; int id; int name; } ;
struct TYPE_5__ {int refcount; } ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(MMAL_COMPONENT_T *VAR_0)
{
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_1 = (MMAL_COMPONENT_CORE_PRIVATE_T *)VAR_0->priv;

   FUNC_0("component %s(%d), refcount %i", VAR_0->name, VAR_0->id,
             VAR_0->priv->refcount);

   FUNC_1(&VAR_1->lock);
   VAR_0->priv->refcount++;
   FUNC_2(&VAR_1->lock);
}

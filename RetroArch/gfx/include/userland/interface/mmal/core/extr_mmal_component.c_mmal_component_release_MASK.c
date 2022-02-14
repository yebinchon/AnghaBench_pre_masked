
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; int id; int name; } ;
struct TYPE_5__ {int refcount; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

MMAL_STATUS_T FUNC_2(MMAL_COMPONENT_T *VAR_1)
{
   if(!VAR_1)
      return VAR_0;

   FUNC_0("component %s(%d), refcount %i", VAR_1->name, VAR_1->id,
             VAR_1->priv->refcount);

   return FUNC_1(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* priv; } ;
struct TYPE_11__ {int (* cb ) (TYPE_2__*,TYPE_4__*,int ) ;int userdata; } ;
struct TYPE_10__ {int queue; } ;
struct TYPE_9__ {int refcount; scalar_t__ owner; } ;
typedef TYPE_2__ MMAL_POOL_T ;
typedef TYPE_3__ MMAL_POOL_PRIVATE_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_2(MMAL_BUFFER_HEADER_T *VAR_0)
{
   MMAL_POOL_T *VAR_1 = (MMAL_POOL_T *)VAR_0->priv->owner;
   MMAL_POOL_PRIVATE_T *VAR_2 = (MMAL_POOL_PRIVATE_T *)VAR_1;
   MMAL_BOOL_T VAR_3 = 1;

   VAR_0->priv->refcount = 1;
   if(VAR_2->cb)
      VAR_3 = VAR_2->cb(VAR_1, VAR_0, VAR_2->userdata);
   if (VAR_3)
      FUNC_0(VAR_1->queue, VAR_0);
}

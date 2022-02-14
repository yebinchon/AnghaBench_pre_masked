
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int mmal_pool_allocator_free_t ;
typedef int mmal_pool_allocator_alloc_t ;
struct TYPE_6__ {scalar_t__ index; scalar_t__ type; TYPE_1__* component; int priv; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;


 int FUNC_0 (char*,int ,int,int,TYPE_2__*,unsigned int,int) ;
 int * FUNC_1 (unsigned int,scalar_t__,void*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

MMAL_POOL_T *FUNC_2(MMAL_PORT_T *VAR_2, unsigned int VAR_3, uint32_t VAR_4)
{
   if (!VAR_2 || !VAR_2->priv)
      return ((void*)0);

   FUNC_0("%s(%i:%i) port %p, headers %u, size %i", VAR_2->component->name,
             (int)VAR_2->type, (int)VAR_2->index, VAR_2, VAR_3, (int)VAR_4);


   return FUNC_1(VAR_3, VAR_4, (void *)VAR_2,
                                          (mmal_pool_allocator_alloc_t)VAR_0,
                                          (mmal_pool_allocator_free_t)VAR_1);
}

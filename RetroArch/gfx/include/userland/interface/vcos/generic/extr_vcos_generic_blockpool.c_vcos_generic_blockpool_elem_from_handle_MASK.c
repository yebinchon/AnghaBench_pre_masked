
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_9__ {size_t num_subpools; size_t block_size; int mutex; TYPE_3__* subpools; } ;
typedef TYPE_2__ VCOS_BLOCKPOOL_T ;
struct TYPE_10__ {scalar_t__ magic; size_t num_blocks; scalar_t__ start; scalar_t__ mem; } ;
typedef TYPE_3__ VCOS_BLOCKPOOL_SUBPOOL_T ;
struct TYPE_8__ {TYPE_3__* subpool; } ;
struct TYPE_11__ {TYPE_1__ owner; } ;
typedef TYPE_4__ VCOS_BLOCKPOOL_HEADER_T ;


 int FUNC_0 (TYPE_2__*) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,TYPE_2__*,size_t,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void *FUNC_6(
      VCOS_BLOCKPOOL_T *VAR_2, uint32_t VAR_3)
{
   VCOS_BLOCKPOOL_SUBPOOL_T *VAR_4;
   uint32_t VAR_5;
   uint32_t VAR_6;
   void *VAR_7 = ((void*)0);

   FUNC_0(VAR_2);
   FUNC_4(&VAR_2->mutex);
   VAR_5 = FUNC_2(VAR_3);

   if (VAR_5 < VAR_2->num_subpools)
   {
      VAR_6 = FUNC_1(VAR_3);
      VAR_4 = &VAR_2->subpools[VAR_5];
      if (VAR_2->subpools[VAR_5].magic == VAR_0 &&
            VAR_2->subpools[VAR_5].mem && VAR_6 < VAR_4->num_blocks)
      {
         VCOS_BLOCKPOOL_HEADER_T *VAR_8 = (VCOS_BLOCKPOOL_HEADER_T*)
            ((size_t) VAR_4->start + (VAR_6 * VAR_2->block_size));

         if (VAR_8->owner.subpool == VAR_4)
            VAR_7 = VAR_8 + 1;
      }
   }
   FUNC_5(&VAR_2->mutex);

   FUNC_3("%s: pool %p handle 0x%08x elem %p", VAR_1, VAR_2,
         VAR_3, VAR_7);
   return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t VCOS_UNSIGNED ;
struct TYPE_9__ {size_t num_subpools; int block_size; int mutex; TYPE_3__* subpools; } ;
typedef TYPE_2__ VCOS_BLOCKPOOL_T ;
struct TYPE_10__ {int num_blocks; TYPE_2__* owner; scalar_t__ start; scalar_t__ mem; } ;
typedef TYPE_3__ VCOS_BLOCKPOOL_SUBPOOL_T ;
struct TYPE_8__ {TYPE_3__* subpool; } ;
struct TYPE_11__ {TYPE_1__ owner; } ;
typedef TYPE_4__ VCOS_BLOCKPOOL_HEADER_T ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

uint32_t FUNC_4(
      VCOS_BLOCKPOOL_T *VAR_0, const void *VAR_1)
{
   uint32_t VAR_2 = 0;
   const char *VAR_3;
   VCOS_UNSIGNED VAR_4 = 0;

   FUNC_0(VAR_0);
   if (((size_t) VAR_1) & 0x3)
      return 0;

   FUNC_2(&VAR_0->mutex);

   for (VAR_4 = 0; VAR_4 < VAR_0->num_subpools; ++VAR_4)
   {
      VCOS_BLOCKPOOL_SUBPOOL_T *VAR_5 = &VAR_0->subpools[VAR_4];
      FUNC_1(VAR_5);

      if (VAR_5->mem && VAR_5->start)
      {
         VAR_3 = (const char*)VAR_5->start +
            (VAR_5->num_blocks * VAR_0->block_size);

         if ((const char*)VAR_1 > (const char*)VAR_5->start &&
               (const char*)VAR_1 < VAR_3)
         {
            const VCOS_BLOCKPOOL_HEADER_T *VAR_6 = (
                  const VCOS_BLOCKPOOL_HEADER_T*) VAR_1 - 1;



            VAR_2 = (VAR_6->owner.subpool == VAR_5 && VAR_5->owner == VAR_0);
            break;
         }
      }
   }
   FUNC_3(&VAR_0->mutex);
   return VAR_2;
}

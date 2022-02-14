
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t VCOS_UNSIGNED ;
struct TYPE_6__ {size_t num_subpools; int mutex; scalar_t__ num_extension_blocks; TYPE_2__* subpools; } ;
typedef TYPE_1__ VCOS_BLOCKPOOL_T ;
struct TYPE_7__ {scalar_t__ available_blocks; scalar_t__ start; } ;
typedef TYPE_2__ VCOS_BLOCKPOOL_SUBPOOL_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

VCOS_UNSIGNED FUNC_4(VCOS_BLOCKPOOL_T *VAR_0)
{
   VCOS_UNSIGNED VAR_1 = 0;
   VCOS_UNSIGNED VAR_2;

   FUNC_0(VAR_0);
   FUNC_2(&VAR_0->mutex);
   for (VAR_2 = 0; VAR_2 < VAR_0->num_subpools; ++VAR_2)
   {
      VCOS_BLOCKPOOL_SUBPOOL_T *VAR_3 = &VAR_0->subpools[VAR_2];
      FUNC_1(VAR_3);


      if (VAR_3->start)
         VAR_1 += VAR_3->available_blocks;
      else
         VAR_1 += VAR_0->num_extension_blocks;
   }
   FUNC_3(&VAR_0->mutex);
   return VAR_1;
}

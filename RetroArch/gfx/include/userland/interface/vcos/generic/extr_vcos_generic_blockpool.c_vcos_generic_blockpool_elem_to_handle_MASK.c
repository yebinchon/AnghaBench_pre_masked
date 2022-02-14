
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {size_t block_size; int num_subpools; int mutex; int * subpools; } ;
typedef TYPE_2__ VCOS_BLOCKPOOL_T ;
struct TYPE_9__ {int num_blocks; scalar_t__ start; TYPE_2__* owner; } ;
typedef TYPE_3__ VCOS_BLOCKPOOL_SUBPOOL_T ;
struct TYPE_7__ {TYPE_3__* subpool; } ;
struct TYPE_10__ {TYPE_1__ owner; } ;
typedef TYPE_4__ VCOS_BLOCKPOOL_HEADER_T ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

uint32_t FUNC_7(void *VAR_2)
{
   uint32_t VAR_3 = -1;
   uint32_t VAR_4 = -1;
   VCOS_BLOCKPOOL_HEADER_T *VAR_5 = ((void*)0);
   VCOS_BLOCKPOOL_T *VAR_6 = ((void*)0);
   VCOS_BLOCKPOOL_SUBPOOL_T *VAR_7 = ((void*)0);
   uint32_t VAR_8;

   FUNC_3(VAR_2);
   VAR_5 = (VCOS_BLOCKPOOL_HEADER_T*) VAR_2 - 1;
   VAR_7 = VAR_5->owner.subpool;
   FUNC_1(VAR_7);

   VAR_6 = VAR_7->owner;
   FUNC_0(VAR_6);
   FUNC_5(&VAR_6->mutex);




   VAR_4 = ((size_t) VAR_5 - (size_t) VAR_7->start) / VAR_6->block_size;
   FUNC_3(VAR_4 < VAR_7->num_blocks);

   VAR_8 = ((char*) VAR_7 - (char*) &VAR_6->subpools[0]) /
      sizeof(VCOS_BLOCKPOOL_SUBPOOL_T);

   FUNC_3(VAR_8 < VAR_0);
   FUNC_3(VAR_8 < VAR_6->num_subpools);
   VAR_3 = FUNC_2(VAR_4, VAR_8);

   FUNC_4("%s: index %d subpool_id %d handle 0x%08x",
         VAR_1, VAR_4, VAR_8, VAR_3);

   FUNC_6(&VAR_6->mutex);
   return VAR_3;
}

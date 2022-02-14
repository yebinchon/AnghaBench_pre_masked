
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int mutex; int block_data_size; } ;
typedef TYPE_2__ VCOS_BLOCKPOOL_T ;
struct TYPE_9__ {scalar_t__ available_blocks; unsigned int num_blocks; int flags; int * start; int * mem; TYPE_4__* free_list; TYPE_2__* owner; } ;
typedef TYPE_3__ VCOS_BLOCKPOOL_SUBPOOL_T ;
struct TYPE_7__ {TYPE_4__* next; TYPE_3__* subpool; } ;
struct TYPE_10__ {TYPE_1__ owner; } ;
typedef TYPE_4__ VCOS_BLOCKPOOL_HEADER_T ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,void*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (void*,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void *VAR_3)
{
   FUNC_2("block %p", VAR_3);
   if (VAR_3)
   {
      VCOS_BLOCKPOOL_HEADER_T* VAR_4 = (VCOS_BLOCKPOOL_HEADER_T*) VAR_3 - 1;
      VCOS_BLOCKPOOL_SUBPOOL_T *VAR_5 = VAR_4->owner.subpool;
      VCOS_BLOCKPOOL_T *VAR_6 = ((void*)0);

      FUNC_1(VAR_5);
      VAR_6 = VAR_5->owner;
      FUNC_0(VAR_6);

      FUNC_6(&VAR_6->mutex);
      FUNC_4((unsigned) VAR_5->available_blocks < VAR_5->num_blocks);


      VAR_4->owner.next = VAR_5->free_list;
      VAR_5->free_list = VAR_4;
      ++(VAR_5->available_blocks);

      if (VAR_0)
         FUNC_3(VAR_3, 0xBD, VAR_6->block_data_size);

      if ( (VAR_5->flags & VAR_1) &&
            VAR_5->available_blocks == VAR_5->num_blocks)
      {
         FUNC_2("%s: freeing subpool %p mem %p", VAR_2,
               VAR_5, VAR_5->mem);

         FUNC_5(VAR_5->mem);
         VAR_5->mem = ((void*)0);
         VAR_5->start = ((void*)0);
      }
      FUNC_7(&VAR_6->mutex);
   }
}

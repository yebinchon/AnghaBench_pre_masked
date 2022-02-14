
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t VCOS_UNSIGNED ;
struct TYPE_9__ {size_t num_subpools; int mutex; int align; int block_data_size; TYPE_2__* subpools; } ;
typedef TYPE_1__ VCOS_BLOCKPOOL_T ;
struct TYPE_10__ {int flags; int * start; TYPE_1__* mem; int num_blocks; } ;
typedef TYPE_2__ VCOS_BLOCKPOOL_SUBPOOL_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int ,TYPE_1__*) ;
 int FUNC_6 (int *) ;

void FUNC_7(VCOS_BLOCKPOOL_T *VAR_2)
{
   FUNC_5("%s: pool %p", VAR_1, VAR_2);

   if (VAR_2)
   {
      VCOS_UNSIGNED VAR_3;

      FUNC_0(VAR_2);
      for (VAR_3 = 0; VAR_3 < VAR_2->num_subpools; ++VAR_3)
      {
         VCOS_BLOCKPOOL_SUBPOOL_T *VAR_4 = &VAR_2->subpools[VAR_3];
         FUNC_1(VAR_4);
         if (VAR_4->mem)
         {

            FUNC_3(VAR_4->mem,
                  0xBE,
                  FUNC_2(VAR_4->num_blocks,
                     VAR_2->block_data_size, VAR_2->align));

            if (VAR_4->flags & VAR_0)
               FUNC_4(VAR_4->mem);
            VAR_4->mem = ((void*)0);
            VAR_4->start = ((void*)0);
         }
      }
      FUNC_6(&VAR_2->mutex);
      FUNC_3(VAR_2, 0xBE, sizeof(VCOS_BLOCKPOOL_T));
   }
}

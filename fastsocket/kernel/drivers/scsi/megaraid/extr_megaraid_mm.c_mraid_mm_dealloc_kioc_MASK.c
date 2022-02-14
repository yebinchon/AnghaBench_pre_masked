
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pool_index; int free_buf; int list; int buf_paddr; int buf_vaddr; } ;
typedef TYPE_1__ uioc_t ;
struct TYPE_7__ {int kioc_semaphore; int kioc_pool_lock; int kioc_pool; TYPE_3__* dma_pool_list; } ;
typedef TYPE_2__ mraid_mmadp_t ;
struct TYPE_8__ {int lock; scalar_t__ in_use; int handle; } ;
typedef TYPE_3__ mm_dmapool_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(mraid_mmadp_t *VAR_0, uioc_t *VAR_1)
{
 mm_dmapool_t *VAR_2;
 unsigned long VAR_3;

 if (VAR_1->pool_index != -1) {
  VAR_2 = &VAR_0->dma_pool_list[VAR_1->pool_index];


  FUNC_2(&VAR_2->lock, VAR_3);
  if (VAR_1->free_buf == 1)
   FUNC_1(VAR_2->handle, VAR_1->buf_vaddr,
       VAR_1->buf_paddr);
  else
   VAR_2->in_use = 0;

  FUNC_3(&VAR_2->lock, VAR_3);
 }


 FUNC_2(&VAR_0->kioc_pool_lock, VAR_3);
 FUNC_0(&VAR_1->list, &VAR_0->kioc_pool);
 FUNC_3(&VAR_0->kioc_pool_lock, VAR_3);


 FUNC_4(&VAR_0->kioc_semaphore);

 return;
}

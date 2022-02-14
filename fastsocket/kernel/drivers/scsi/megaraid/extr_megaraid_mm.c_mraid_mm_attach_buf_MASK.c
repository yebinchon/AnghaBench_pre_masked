
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pool_index; int free_buf; int * buf_vaddr; int buf_paddr; } ;
typedef TYPE_1__ uioc_t ;
struct TYPE_7__ {TYPE_3__* dma_pool_list; } ;
typedef TYPE_2__ mraid_mmadp_t ;
struct TYPE_8__ {int buf_size; int in_use; int lock; int handle; int paddr; int * vaddr; } ;
typedef TYPE_3__ mm_dmapool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_3(mraid_mmadp_t *VAR_4, uioc_t *VAR_5, int VAR_6)
{
 mm_dmapool_t *VAR_7;
 int VAR_8 = -1;
 unsigned long VAR_9;
 int VAR_10;

 VAR_5->pool_index = -1;
 VAR_5->buf_vaddr = ((void*)0);
 VAR_5->buf_paddr = 0;
 VAR_5->free_buf = 0;






 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {

  VAR_7 = &VAR_4->dma_pool_list[VAR_10];

  if (VAR_6 > VAR_7->buf_size)
   continue;

  if (VAR_8 == -1)
   VAR_8 = VAR_10;

  FUNC_1(&VAR_7->lock, VAR_9);

  if (!VAR_7->in_use) {

   VAR_7->in_use = 1;
   VAR_5->pool_index = VAR_10;
   VAR_5->buf_vaddr = VAR_7->vaddr;
   VAR_5->buf_paddr = VAR_7->paddr;

   FUNC_2(&VAR_7->lock, VAR_9);
   return 0;
  }
  else {
   FUNC_2(&VAR_7->lock, VAR_9);
   continue;
  }
 }




 if (VAR_8 == -1)
  return -VAR_0;





 VAR_7 = &VAR_4->dma_pool_list[VAR_8];

 FUNC_1(&VAR_7->lock, VAR_9);

 VAR_5->pool_index = VAR_8;
 VAR_5->free_buf = 1;
 VAR_5->buf_vaddr = FUNC_0(VAR_7->handle, VAR_2,
       &VAR_5->buf_paddr);
 FUNC_2(&VAR_7->lock, VAR_9);

 if (!VAR_5->buf_vaddr)
  return -VAR_1;

 return 0;
}

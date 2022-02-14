
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pdev; TYPE_2__* dma_pool_list; } ;
typedef TYPE_1__ mraid_mmadp_t ;
struct TYPE_6__ {int buf_size; int vaddr; int paddr; int handle; int lock; } ;
typedef TYPE_2__ mm_dmapool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*,int ,int,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(mraid_mmadp_t *VAR_4)
{
 mm_dmapool_t *VAR_5;
 int VAR_6;
 int VAR_7;




 VAR_6 = VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++){

  VAR_5 = &VAR_4->dma_pool_list[VAR_7];

  VAR_5->buf_size = VAR_6;
  FUNC_3(&VAR_5->lock);

  VAR_5->handle = FUNC_2("megaraid mm data buffer",
      VAR_4->pdev, VAR_6, 16, 0);

  if (!VAR_5->handle) {
   goto dma_pool_setup_error;
  }

  VAR_5->vaddr = FUNC_1(VAR_5->handle, VAR_1,
       &VAR_5->paddr);

  if (!VAR_5->vaddr)
   goto dma_pool_setup_error;

  VAR_6 = VAR_6 * 2;
 }

 return 0;

dma_pool_setup_error:

 FUNC_0(VAR_4);
 return (-VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ttm_mem_global {int kobj; } ;
struct TYPE_6__ {unsigned int max_size; int alloc_size; int small; } ;
struct TYPE_7__ {int kobj; TYPE_1__ options; int pools; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (int *,int *,int *,char*) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct ttm_mem_global *VAR_6, unsigned VAR_7)
{
 int VAR_8 = -VAR_0;

 FUNC_1(VAR_4);

 FUNC_6("Initializing DMA pool allocator\n");

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto err;

 FUNC_5(&VAR_4->lock);
 FUNC_0(&VAR_4->pools);

 VAR_4->options.max_size = VAR_7;
 VAR_4->options.small = VAR_3;
 VAR_4->options.alloc_size = VAR_2;


 VAR_8 = FUNC_2(&VAR_4->kobj, &VAR_5,
       &VAR_6->kobj, "dma_pool");
 if (FUNC_8(VAR_8 != 0)) {
  FUNC_3(&VAR_4->kobj);
  goto err;
 }
 FUNC_7(VAR_4);
 return 0;
err:
 return VAR_8;
}

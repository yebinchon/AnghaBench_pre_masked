
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ttm_mem_global {int kobj; } ;
struct TYPE_6__ {unsigned int max_size; int alloc_size; int small; } ;
struct TYPE_7__ {int kobj; TYPE_1__ options; int uc_pool_dma32; int wc_pool_dma32; int uc_pool; int wc_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (int *,int *,int *,char*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int,char*) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct ttm_mem_global *VAR_8, unsigned VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_6);

 FUNC_4("Initializing pool allocator\n");

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);

 FUNC_5(&VAR_6->wc_pool, VAR_1, "wc");

 FUNC_5(&VAR_6->uc_pool, VAR_1, "uc");

 FUNC_5(&VAR_6->wc_pool_dma32,
      VAR_3 | VAR_0, "wc dma");

 FUNC_5(&VAR_6->uc_pool_dma32,
      VAR_3 | VAR_0, "uc dma");

 VAR_6->options.max_size = VAR_9;
 VAR_6->options.small = VAR_5;
 VAR_6->options.alloc_size = VAR_4;

 VAR_10 = FUNC_1(&VAR_6->kobj, &VAR_7,
       &VAR_8->kobj, "pool");
 if (FUNC_7(VAR_10 != 0)) {
  FUNC_2(&VAR_6->kobj);
  VAR_6 = ((void*)0);
  return VAR_10;
 }

 FUNC_6(VAR_6);

 return 0;
}

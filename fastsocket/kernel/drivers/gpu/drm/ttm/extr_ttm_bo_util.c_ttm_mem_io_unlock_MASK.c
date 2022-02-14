
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int io_reserve_mutex; int io_reserve_fastpath; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ttm_mem_type_manager *VAR_0)
{
 if (FUNC_0(VAR_0->io_reserve_fastpath))
  return;

 FUNC_1(&VAR_0->io_reserve_mutex);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct be_dma_mem {unsigned long dma; scalar_t__ size; void* va; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0,
    u64 VAR_1, u32 VAR_2,
    struct be_dma_mem *VAR_3)
{
 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);
 FUNC_0(!(VAR_2 > 0));
 FUNC_0(!VAR_3);

 VAR_3->va = VAR_0;
 VAR_3->dma = (unsigned long)VAR_1;
 VAR_3->size = VAR_2;

 return 0;
}

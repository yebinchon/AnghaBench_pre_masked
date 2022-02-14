
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* va; } ;
struct be_queue_info {int head; int entry_size; TYPE_1__ dma_mem; } ;



__attribute__((used)) static inline void *FUNC_0(struct be_queue_info *VAR_0)
{
 return VAR_0->dma_mem.va + VAR_0->head * VAR_0->entry_size;
}

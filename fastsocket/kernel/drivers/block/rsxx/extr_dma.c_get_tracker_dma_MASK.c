
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsxx_dma {int dummy; } ;
struct dma_tracker_list {TYPE_1__* list; } ;
struct TYPE_2__ {struct rsxx_dma* dma; } ;



__attribute__((used)) static struct rsxx_dma *FUNC_0(struct dma_tracker_list *VAR_0,
         int VAR_1)
{
 return VAR_0->list[VAR_1].dma;
}

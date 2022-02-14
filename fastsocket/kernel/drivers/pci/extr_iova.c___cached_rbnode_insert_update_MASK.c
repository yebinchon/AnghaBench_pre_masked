
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {unsigned long dma_32bit_pfn; int * cached32_node; } ;
struct iova {int node; } ;



__attribute__((used)) static void
FUNC_0(struct iova_domain *VAR_0,
 unsigned long VAR_1, struct iova *VAR_2)
{
 if (VAR_1 != VAR_0->dma_32bit_pfn)
  return;
 VAR_0->cached32_node = &VAR_2->node;
}

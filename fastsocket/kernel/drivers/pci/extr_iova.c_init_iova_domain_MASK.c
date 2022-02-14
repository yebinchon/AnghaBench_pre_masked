
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {unsigned long dma_32bit_pfn; int * cached32_node; int rbroot; int iova_rbtree_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct iova_domain *VAR_1, unsigned long VAR_2)
{
 FUNC_0(&VAR_1->iova_rbtree_lock);
 VAR_1->rbroot = VAR_0;
 VAR_1->cached32_node = ((void*)0);
 VAR_1->dma_32bit_pfn = VAR_2;
}

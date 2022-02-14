
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnx4008_dma_ll {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int count; int dma_addr; void* vaddr; scalar_t__ cur; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct pnx4008_dma_ll*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct pnx4008_dma_ll *FUNC_3(dma_addr_t * VAR_2)
{
 struct pnx4008_dma_ll *VAR_3 = ((void*)0);
 unsigned long VAR_4;

 FUNC_1(&VAR_0, VAR_4);
 if (VAR_1.count > 4) {
  VAR_3 = *(struct pnx4008_dma_ll **) VAR_1.cur;
  *VAR_2 = VAR_1.dma_addr + ((void *)VAR_3 - VAR_1.vaddr);
  *(void **)VAR_1.cur = **(void ***)VAR_1.cur;
  FUNC_0(VAR_3, 0, sizeof(*VAR_3));
  VAR_1.count--;
 }
 FUNC_2(&VAR_0, VAR_4);

 return VAR_3;
}

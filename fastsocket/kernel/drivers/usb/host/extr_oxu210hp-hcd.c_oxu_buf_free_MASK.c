
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxu_hcd {int mem_lock; scalar_t__* db_used; TYPE_1__* mem; } ;
struct ehci_qtd {void* buffer; scalar_t__ buffer_dma; scalar_t__ qtd_buffer_len; } ;
struct TYPE_2__ {int * db_pool; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct oxu_hcd *VAR_1, struct ehci_qtd *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->mem_lock);

 VAR_3 = (VAR_2->buffer - (void *) &VAR_1->mem->db_pool[0])
        / VAR_0;
 VAR_1->db_used[VAR_3] = 0;
 VAR_2->qtd_buffer_len = 0;
 VAR_2->buffer_dma = 0;
 VAR_2->buffer = ((void*)0);

 FUNC_1(&VAR_1->mem_lock);

 return;
}

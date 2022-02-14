
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ibmveth_buff_pool {scalar_t__ threshold; int available; scalar_t__ active; } ;
struct ibmveth_adapter {scalar_t__ buffer_list_addr; int rx_no_buffer; struct ibmveth_buff_pool* rx_buff_pool; int replenish_task_cycles; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ibmveth_adapter*,struct ibmveth_buff_pool*) ;

__attribute__((used)) static void FUNC_2(struct ibmveth_adapter *VAR_1)
{
 int VAR_2;

 VAR_1->replenish_task_cycles++;

 for (VAR_2 = (VAR_0 - 1); VAR_2 >= 0; VAR_2--) {
  struct ibmveth_buff_pool *VAR_3 = &VAR_1->rx_buff_pool[VAR_2];

  if (VAR_3->active &&
      (FUNC_0(&VAR_3->available) < VAR_3->threshold))
   FUNC_1(VAR_1, VAR_3);
 }

 VAR_1->rx_no_buffer = *(u64 *)(((char*)VAR_1->buffer_list_addr) +
      4096 - 8);
}

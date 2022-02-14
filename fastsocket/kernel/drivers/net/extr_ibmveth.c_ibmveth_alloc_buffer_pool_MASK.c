
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ibmveth_buff_pool {int* free_map; int size; int* dma_addr; int* skbuff; scalar_t__ consumer_index; scalar_t__ producer_index; int available; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ibmveth_buff_pool *VAR_1)
{
 int VAR_2;

 VAR_1->free_map = FUNC_2(sizeof(u16) * VAR_1->size, VAR_0);

 if (!VAR_1->free_map)
  return -1;

 VAR_1->dma_addr = FUNC_2(sizeof(dma_addr_t) * VAR_1->size, VAR_0);
 if (!VAR_1->dma_addr) {
  FUNC_1(VAR_1->free_map);
  VAR_1->free_map = ((void*)0);
  return -1;
 }

 VAR_1->skbuff = FUNC_2(sizeof(void*) * VAR_1->size, VAR_0);

 if (!VAR_1->skbuff) {
  FUNC_1(VAR_1->dma_addr);
  VAR_1->dma_addr = ((void*)0);

  FUNC_1(VAR_1->free_map);
  VAR_1->free_map = ((void*)0);
  return -1;
 }

 FUNC_3(VAR_1->skbuff, 0, sizeof(void*) * VAR_1->size);
 FUNC_3(VAR_1->dma_addr, 0, sizeof(dma_addr_t) * VAR_1->size);

 for (VAR_2 = 0; VAR_2 < VAR_1->size; ++VAR_2)
  VAR_1->free_map[VAR_2] = VAR_2;

 FUNC_0(&VAR_1->available, 0);
 VAR_1->producer_index = 0;
 VAR_1->consumer_index = 0;

 return 0;
}

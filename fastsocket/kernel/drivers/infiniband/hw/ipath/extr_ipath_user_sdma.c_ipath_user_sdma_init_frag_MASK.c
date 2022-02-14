
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct ipath_user_sdma_pkt {TYPE_1__* addr; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {size_t offset; size_t length; int put_page; int dma_mapped; int addr; void* kvaddr; struct page* page; } ;



__attribute__((used)) static void FUNC_0(struct ipath_user_sdma_pkt *VAR_0,
          int VAR_1, size_t VAR_2, size_t VAR_3,
          int VAR_4, int VAR_5,
          struct page *VAR_6,
          void *VAR_7, dma_addr_t VAR_8)
{
 VAR_0->addr[VAR_1].offset = VAR_2;
 VAR_0->addr[VAR_1].length = VAR_3;
 VAR_0->addr[VAR_1].put_page = VAR_4;
 VAR_0->addr[VAR_1].dma_mapped = VAR_5;
 VAR_0->addr[VAR_1].page = VAR_6;
 VAR_0->addr[VAR_1].kvaddr = VAR_7;
 VAR_0->addr[VAR_1].addr = VAR_8;
}

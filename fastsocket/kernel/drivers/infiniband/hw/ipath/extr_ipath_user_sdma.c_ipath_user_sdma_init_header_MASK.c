
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {int dummy; } ;
struct ipath_user_sdma_pkt {int naddr; int counter; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct ipath_user_sdma_pkt*,int ,size_t,size_t,int ,int,struct page*,void*,int ) ;

__attribute__((used)) static void FUNC_1(struct ipath_user_sdma_pkt *VAR_0,
     u32 VAR_1, size_t VAR_2,
     size_t VAR_3, int VAR_4,
     struct page *VAR_5,
     void *VAR_6, dma_addr_t VAR_7)
{
 VAR_0->naddr = 1;
 VAR_0->counter = VAR_1;
 FUNC_0(VAR_0, 0, VAR_2, VAR_3, 0, VAR_4, VAR_5,
      VAR_6, VAR_7);
}

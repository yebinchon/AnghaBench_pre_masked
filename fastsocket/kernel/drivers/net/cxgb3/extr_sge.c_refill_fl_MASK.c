
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {void* data; } ;
struct sge_fl {size_t pidx; int gen; size_t size; unsigned int credits; unsigned int pend_cred; struct rx_desc* desc; struct rx_sw_desc* sdesc; scalar_t__ buf_size; int alloc_failed; int order; scalar_t__ use_pages; } ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ mapping; } ;
struct rx_sw_desc {struct sk_buff* skb; TYPE_1__ pg_chunk; } ;
struct rx_desc {int dummy; } ;
struct adapter {int pdev; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,scalar_t__,struct rx_desc*,struct rx_sw_desc*,int,int ) ;
 int FUNC_1 (scalar_t__,struct rx_desc*,int) ;
 int FUNC_2 (struct adapter*,struct sge_fl*,struct rx_sw_desc*,int ,int ) ;
 struct sk_buff* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,struct sge_fl*,struct rx_sw_desc*) ;
 int VAR_2 ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (struct rx_sw_desc*,int ,scalar_t__) ;
 int FUNC_7 (struct adapter*,struct sge_fl*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct adapter *VAR_3, struct sge_fl *VAR_4, int VAR_5, gfp_t VAR_6)
{
 struct rx_sw_desc *VAR_7 = &VAR_4->sdesc[VAR_4->pidx];
 struct rx_desc *VAR_8 = &VAR_4->desc[VAR_4->pidx];
 unsigned int VAR_9 = 0;

 while (VAR_5--) {
  dma_addr_t VAR_10;
  int VAR_11;

  if (VAR_4->use_pages) {
   if (FUNC_8(FUNC_2(VAR_3, VAR_4, VAR_7, VAR_6,
          VAR_4->order))) {
nomem: VAR_4->alloc_failed++;
    break;
   }
   VAR_10 = VAR_7->pg_chunk.mapping + VAR_7->pg_chunk.offset;
   FUNC_6(VAR_7, VAR_2, VAR_10);

   FUNC_1(VAR_10, VAR_8, VAR_4->gen);
   FUNC_5(VAR_3->pdev, VAR_10,
      VAR_4->buf_size - VAR_1,
      VAR_0);
  } else {
   void *VAR_12;

   struct sk_buff *VAR_13 = FUNC_3(VAR_4->buf_size, VAR_6);
   if (!VAR_13)
    goto nomem;

   VAR_7->skb = VAR_13;
   VAR_12 = VAR_13->data;
   VAR_11 = FUNC_0(VAR_12, VAR_4->buf_size, VAR_8, VAR_7,
          VAR_4->gen, VAR_3->pdev);
   if (FUNC_8(VAR_11)) {
    FUNC_4(VAR_3->pdev, VAR_4, VAR_7);
    break;
   }
  }

  VAR_8++;
  VAR_7++;
  if (++VAR_4->pidx == VAR_4->size) {
   VAR_4->pidx = 0;
   VAR_4->gen ^= 1;
   VAR_7 = VAR_4->sdesc;
   VAR_8 = VAR_4->desc;
  }
  VAR_9++;
 }

 VAR_4->credits += VAR_9;
 VAR_4->pend_cred += VAR_9;
 FUNC_7(VAR_3, VAR_4);

 return VAR_9;
}

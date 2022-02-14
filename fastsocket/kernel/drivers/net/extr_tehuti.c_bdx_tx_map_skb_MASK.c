
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct txdb {TYPE_2__* wptr; } ;
struct txd_desc {struct pbl* pbl; } ;
struct skb_frag_struct {scalar_t__ size; int page_offset; int page; } ;
struct sk_buff {int data; scalar_t__ data_len; scalar_t__ len; } ;
struct pbl {void* pa_hi; void* pa_lo; void* len; } ;
struct bdx_priv {int pdev; struct txdb txdb; } ;
struct TYPE_8__ {int nr_frags; struct skb_frag_struct* frags; } ;
struct TYPE_7__ {scalar_t__ bytes; } ;
struct TYPE_5__ {struct sk_buff* skb; int dma; } ;
struct TYPE_6__ {TYPE_1__ addr; scalar_t__ len; } ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,void*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct txdb*) ;
 int FUNC_5 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_6 (int ,int ,scalar_t__,int ) ;
 TYPE_4__* FUNC_7 (struct sk_buff*) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static inline void
FUNC_8(struct bdx_priv *VAR_2, struct sk_buff *VAR_3,
        struct txd_desc *VAR_4)
{
 struct txdb *VAR_5 = &VAR_2->txdb;
 struct pbl *VAR_6 = &VAR_4->pbl[0];
 int VAR_7 = FUNC_7(VAR_3)->nr_frags;
 int VAR_8;

 VAR_5->wptr->len = VAR_3->len - VAR_3->data_len;
 VAR_5->wptr->addr.dma = FUNC_6(VAR_2->pdev, VAR_3->data,
         VAR_5->wptr->len, VAR_0);
 VAR_6->len = FUNC_0(VAR_5->wptr->len);
 VAR_6->pa_lo = FUNC_0(FUNC_3(VAR_5->wptr->addr.dma));
 VAR_6->pa_hi = FUNC_0(FUNC_2(VAR_5->wptr->addr.dma));
 FUNC_1("=== pbl   len: 0x%x ================\n", VAR_6->len);
 FUNC_1("=== pbl pa_lo: 0x%x ================\n", VAR_6->pa_lo);
 FUNC_1("=== pbl pa_hi: 0x%x ================\n", VAR_6->pa_hi);
 FUNC_4(VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  struct skb_frag_struct *VAR_9;

  VAR_9 = &FUNC_7(VAR_3)->frags[VAR_8];
  VAR_5->wptr->len = VAR_9->size;
  VAR_5->wptr->addr.dma =
      FUNC_5(VAR_2->pdev, VAR_9->page, VAR_9->page_offset,
     VAR_9->size, VAR_0);

  VAR_6++;
  VAR_6->len = FUNC_0(VAR_5->wptr->len);
  VAR_6->pa_lo = FUNC_0(FUNC_3(VAR_5->wptr->addr.dma));
  VAR_6->pa_hi = FUNC_0(FUNC_2(VAR_5->wptr->addr.dma));
  FUNC_4(VAR_5);
 }


 VAR_5->wptr->len = -VAR_1[VAR_7].bytes;
 VAR_5->wptr->addr.skb = VAR_3;
 FUNC_4(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_data_wr {int dummy; } ;
struct sk_buff {int len; int data_len; int csum; scalar_t__ truesize; int priority; } ;
struct cxgbi_sock {scalar_t__ state; int wr_cred; int wr_una_cred; int wr_max_cred; int snd_nxt; int l2t; TYPE_1__* cdev; int tid; int write_queue; int flags; } ;
struct TYPE_4__ {int nr_frags; } ;
struct TYPE_3__ {int lldev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int *) ;
 int VAR_8 ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct cxgbi_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int,char*,struct cxgbi_sock*,scalar_t__,...) ;
 int FUNC_10 (struct cxgbi_sock*,struct sk_buff*,int,int) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (struct sk_buff*) ;
 int* VAR_9 ;
 scalar_t__ FUNC_14 (int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_15(struct cxgbi_sock *VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 struct sk_buff *VAR_14;

 if (FUNC_14(VAR_11->state < VAR_3 ||
  VAR_11->state == VAR_2 || VAR_11->state >= VAR_1)) {
   FUNC_9(1 << VAR_5 | 1 << VAR_4,
    "csk 0x%p,%u,0x%lx,%u, in closing state.\n",
    VAR_11, VAR_11->state, VAR_11->flags, VAR_11->tid);
  return 0;
 }

 while (VAR_11->wr_cred && (VAR_14 = FUNC_12(&VAR_11->write_queue)) != ((void*)0)) {
  int VAR_15 = VAR_14->len;
  int VAR_16 = FUNC_13(VAR_14)->nr_frags + (VAR_15 != VAR_14->data_len);
  int VAR_17 = VAR_9[VAR_16];

  if (VAR_17 > 1 && VAR_15 + sizeof(struct tx_data_wr) <= VAR_10)
   VAR_17 = 1;

  FUNC_0(VAR_16 >= VAR_6 || VAR_17 < 1);

  if (VAR_11->wr_cred < VAR_17) {
   FUNC_9(1 << VAR_4,
    "csk 0x%p, skb len %u/%u, frag %u, wr %d<%u.\n",
    VAR_11, VAR_14->len, VAR_14->data_len, VAR_16,
    VAR_17, VAR_11->wr_cred);
   break;
  }

  FUNC_1(VAR_14, &VAR_11->write_queue);
  VAR_14->priority = VAR_0;
  VAR_14->csum = VAR_17;
  VAR_11->wr_cred -= VAR_17;
  VAR_11->wr_una_cred += VAR_17;
  FUNC_5(VAR_11, VAR_14);

  FUNC_9(1 << VAR_5 | 1 << VAR_4,
   "csk 0x%p, enqueue, skb len %u/%u, frag %u, wr %d, "
   "left %u, unack %u.\n",
   VAR_11, VAR_14->len, VAR_14->data_len, VAR_16, VAR_14->csum,
   VAR_11->wr_cred, VAR_11->wr_una_cred);

  if (FUNC_8(FUNC_3(VAR_14, VAR_7))) {
   if ((VAR_12 &&
    VAR_11->wr_una_cred == VAR_17) ||
        VAR_11->wr_una_cred >= VAR_11->wr_max_cred / 2) {
    VAR_12 = 1;
    VAR_11->wr_una_cred = 0;
   }
   VAR_15 += FUNC_6(FUNC_4(VAR_14));
   FUNC_10(VAR_11, VAR_14, VAR_15, VAR_12);
   VAR_11->snd_nxt += VAR_15;
   FUNC_2(VAR_14, VAR_7);
  }
  VAR_13 += VAR_14->truesize;
  FUNC_9(1 << VAR_5 | 1 << VAR_4,
   "csk 0x%p, tid 0x%x, send skb 0x%p.\n",
   VAR_11, VAR_11->tid, VAR_14);
  FUNC_11(VAR_14, VAR_8);
  FUNC_7(VAR_11->cdev->lldev, VAR_14, VAR_11->l2t);
 }
 return VAR_13;
}

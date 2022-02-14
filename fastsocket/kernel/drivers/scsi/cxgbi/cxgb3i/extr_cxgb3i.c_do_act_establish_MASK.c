
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct t3cdev {int dummy; } ;
struct sk_buff {int csum; } ;
struct TYPE_4__ {int * function; } ;
struct cxgbi_sock {scalar_t__ state; unsigned int tid; int lock; int write_queue; int rcv_wup; int rcv_nxt; int copied_seq; int flags; TYPE_2__ retry_timer; int rss_qid; TYPE_1__* cdev; } ;
struct cpl_act_establish {int tcp_opt; int snd_isn; int rcv_isn; int tos_tid; } ;
struct TYPE_3__ {int lldev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct cpl_act_establish*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct sk_buff*) ;
 struct cpl_act_establish* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int *,struct cxgbi_sock*,unsigned int) ;
 int VAR_6 ;
 int FUNC_6 (struct cxgbi_sock*) ;
 int FUNC_7 (struct cxgbi_sock*,int ,int ) ;
 int FUNC_8 (struct cxgbi_sock*,int ) ;
 int FUNC_9 (struct cxgbi_sock*) ;
 int FUNC_10 (struct cxgbi_sock*,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct cxgbi_sock*) ;
 int FUNC_13 (int,char*,unsigned int,unsigned int,struct cxgbi_sock*,scalar_t__,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,struct cxgbi_sock*,scalar_t__,int ,unsigned int) ;
 int FUNC_17 (struct cxgbi_sock*,int) ;
 int FUNC_18 (struct cxgbi_sock*) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct t3cdev *VAR_8, struct sk_buff *VAR_9, void *VAR_10)
{
 struct cxgbi_sock *VAR_11 = VAR_10;
 struct cpl_act_establish *VAR_12 = FUNC_4(VAR_9);
 unsigned int VAR_13 = FUNC_0(VAR_12);
 unsigned int VAR_14 = FUNC_1(FUNC_14(VAR_12->tos_tid));
 u32 VAR_15 = FUNC_14(VAR_12->rcv_isn);

 FUNC_13(1 << VAR_4 | 1 << VAR_3,
  "atid 0x%x,tid 0x%x, csk 0x%p,%u,0x%lx, isn %u.\n",
  VAR_14, VAR_14, VAR_11, VAR_11->state, VAR_11->flags, VAR_15);

 FUNC_9(VAR_11);
 FUNC_10(VAR_11, VAR_1);
 VAR_11->tid = VAR_13;
 FUNC_5(VAR_11->cdev->lldev, &VAR_7, VAR_11, VAR_13);

 FUNC_12(VAR_11);

 VAR_11->rss_qid = FUNC_2(FUNC_15(VAR_9->csum));

 FUNC_20(&VAR_11->lock);
 if (VAR_11->retry_timer.function) {
  FUNC_11(&VAR_11->retry_timer);
  VAR_11->retry_timer.function = ((void*)0);
 }

 if (FUNC_22(VAR_11->state != VAR_2))
  FUNC_16("csk 0x%p,%u,0x%lx,%u, got EST.\n",
   VAR_11, VAR_11->state, VAR_11->flags, VAR_11->tid);

 VAR_11->copied_seq = VAR_11->rcv_wup = VAR_11->rcv_nxt = VAR_15;
 if (VAR_6 > (VAR_5 << 10))
  VAR_11->rcv_wup -= VAR_6 - (VAR_5 << 10);

 FUNC_7(VAR_11, FUNC_14(VAR_12->snd_isn), FUNC_15(VAR_12->tcp_opt));

 if (FUNC_22(FUNC_8(VAR_11, VAR_0)))

  FUNC_18(VAR_11);
 else {
  if (FUNC_19(&VAR_11->write_queue))
   FUNC_17(VAR_11, 1);
  FUNC_6(VAR_11);
 }

 FUNC_21(&VAR_11->lock);
 FUNC_3(VAR_9);
 return 0;
}

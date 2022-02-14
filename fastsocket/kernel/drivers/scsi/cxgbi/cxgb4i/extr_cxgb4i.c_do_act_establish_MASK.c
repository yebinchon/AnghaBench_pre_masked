
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int * function; } ;
struct cxgbi_sock {unsigned int atid; scalar_t__ state; unsigned int tid; int advmss; int lock; int write_queue; int rcv_wup; int rcv_nxt; int copied_seq; TYPE_1__ retry_timer; int flags; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {int* mtus; struct tid_info* tids; } ;
struct cpl_act_establish {int tcp_opt; int snd_isn; int rcv_isn; int tos_atid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (unsigned short) ;
 scalar_t__ FUNC_1 (unsigned short) ;
 unsigned int FUNC_2 (struct cpl_act_establish*) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tid_info*,struct cxgbi_sock*,unsigned int) ;
 int VAR_6 ;
 struct cxgb4_lld_info* FUNC_7 (struct cxgbi_device*) ;
 int FUNC_8 (struct cxgbi_sock*) ;
 int FUNC_9 (struct cxgbi_sock*,int ,unsigned short) ;
 int FUNC_10 (struct cxgbi_sock*,int ) ;
 int FUNC_11 (struct cxgbi_sock*) ;
 int FUNC_12 (struct cxgbi_sock*,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (struct cxgbi_sock*) ;
 int FUNC_15 (int,char*,struct cxgbi_sock*,size_t,int,...) ;
 struct cxgbi_sock* FUNC_16 (struct tid_info*,unsigned int) ;
 int FUNC_17 (int ) ;
 unsigned short FUNC_18 (int ) ;
 int FUNC_19 (char*,unsigned int,struct cxgbi_sock*,...) ;
 int FUNC_20 (char*,struct cxgbi_sock*,scalar_t__,int ,unsigned int) ;
 int FUNC_21 (struct cxgbi_sock*,int ) ;
 int FUNC_22 (struct cxgbi_sock*) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int) ;

__attribute__((used)) static void FUNC_27(struct cxgbi_device *VAR_7, struct sk_buff *VAR_8)
{
 struct cxgbi_sock *VAR_9;
 struct cpl_act_establish *VAR_10 = (struct cpl_act_establish *)VAR_8->data;
 unsigned short VAR_11 = FUNC_18(VAR_10->tcp_opt);
 unsigned int VAR_12 = FUNC_2(VAR_10);
 unsigned int VAR_13 = FUNC_3(FUNC_17(VAR_10->tos_atid));
 struct cxgb4_lld_info *VAR_14 = FUNC_7(VAR_7);
 struct tid_info *VAR_15 = VAR_14->tids;
 u32 VAR_16 = FUNC_5(VAR_10->rcv_isn);

 VAR_9 = FUNC_16(VAR_15, VAR_13);
 if (FUNC_26(!VAR_9)) {
  FUNC_19("NO conn. for atid %u, cdev 0x%p.\n", VAR_13, VAR_7);
  goto rel_skb;
 }

 if (VAR_9->atid != VAR_13) {
  FUNC_19("bad conn atid %u, csk 0x%p,%u,0x%lx,tid %u, atid %u.\n",
   VAR_13, VAR_9, VAR_9->state, VAR_9->flags, VAR_9->tid, VAR_9->atid);
  goto rel_skb;
 }

 FUNC_15(1 << VAR_4 | 1 << VAR_3,
  "csk 0x%p,%u,0x%lx, tid %u, atid %u, rseq %u.\n",
  VAR_9, VAR_9->state, VAR_9->flags, VAR_12, VAR_13, VAR_16);

 FUNC_11(VAR_9);
 VAR_9->tid = VAR_12;
 FUNC_6(VAR_14->tids, VAR_9, VAR_12);
 FUNC_12(VAR_9, VAR_1);

 FUNC_14(VAR_9);

 FUNC_24(&VAR_9->lock);
 if (FUNC_26(VAR_9->state != VAR_2))
  FUNC_20("csk 0x%p,%u,0x%lx,%u, got EST.\n",
   VAR_9, VAR_9->state, VAR_9->flags, VAR_9->tid);

 if (VAR_9->retry_timer.function) {
  FUNC_13(&VAR_9->retry_timer);
  VAR_9->retry_timer.function = ((void*)0);
 }

 VAR_9->copied_seq = VAR_9->rcv_wup = VAR_9->rcv_nxt = VAR_16;




 if (VAR_6 > (VAR_5 << 10))
  VAR_9->rcv_wup -= VAR_6 - (VAR_5 << 10);

 VAR_9->advmss = VAR_14->mtus[FUNC_0(VAR_11)] - 40;
 if (FUNC_1(VAR_11))
  VAR_9->advmss -= 12;
 if (VAR_9->advmss < 128)
  VAR_9->advmss = 128;

 FUNC_15(1 << VAR_4 | 1 << VAR_3,
  "csk 0x%p, mss_idx %u, advmss %u.\n",
   VAR_9, FUNC_0(VAR_11), VAR_9->advmss);

 FUNC_9(VAR_9, FUNC_17(VAR_10->snd_isn), FUNC_18(VAR_10->tcp_opt));

 if (FUNC_26(FUNC_10(VAR_9, VAR_0)))
  FUNC_22(VAR_9);
 else {
  if (FUNC_23(&VAR_9->write_queue))
   FUNC_21(VAR_9, 0);
  FUNC_8(VAR_9);
 }
 FUNC_25(&VAR_9->lock);

rel_skb:
 FUNC_4(VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct sk_buff {scalar_t__ len; scalar_t__ data_len; struct sk_buff* next; } ;
struct cxgbi_sock {scalar_t__ state; int err; scalar_t__ write_seq; scalar_t__ snd_una; int lock; int write_queue; int tid; int flags; struct cxgbi_device* cdev; } ;
struct cxgbi_device {scalar_t__ snd_win; scalar_t__ skb_tx_rsvd; int (* csk_push_tx_frames ) (struct cxgbi_sock*,int) ;} ;
struct TYPE_2__ {int nr_frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct cxgbi_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int,char*,struct cxgbi_sock*,scalar_t__,int ,int ,...) ;
 int FUNC_6 (char*,struct cxgbi_sock*,int,scalar_t__,...) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct cxgbi_sock*,int) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct cxgbi_sock *VAR_8, struct sk_buff *VAR_9)
{
 struct cxgbi_device *VAR_10 = VAR_8->cdev;
 struct sk_buff *VAR_11;
 int VAR_12, VAR_13 = 0;

 FUNC_10(&VAR_8->lock);

 if (VAR_8->state != VAR_0) {
  FUNC_5(1 << VAR_1,
   "csk 0x%p,%u,0x%lx,%u, EAGAIN.\n",
   VAR_8, VAR_8->state, VAR_8->flags, VAR_8->tid);
  VAR_12 = -VAR_2;
  goto out_err;
 }

 if (VAR_8->err) {
  FUNC_5(1 << VAR_1,
   "csk 0x%p,%u,0x%lx,%u, EPIPE %d.\n",
   VAR_8, VAR_8->state, VAR_8->flags, VAR_8->tid, VAR_8->err);
  VAR_12 = -VAR_5;
  goto out_err;
 }

 if (VAR_8->write_seq - VAR_8->snd_una >= VAR_10->snd_win) {
  FUNC_5(1 << VAR_1,
   "csk 0x%p,%u,0x%lx,%u, FULL %u-%u >= %u.\n",
   VAR_8, VAR_8->state, VAR_8->flags, VAR_8->tid, VAR_8->write_seq,
   VAR_8->snd_una, VAR_10->snd_win);
  VAR_12 = -VAR_4;
  goto out_err;
 }

 while (VAR_9) {
  int VAR_14 = FUNC_9(VAR_9)->nr_frags +
    (VAR_9->len != VAR_9->data_len);

  if (FUNC_13(FUNC_7(VAR_9) < VAR_10->skb_tx_rsvd)) {
   FUNC_6("csk 0x%p, skb head %u < %u.\n",
    VAR_8, FUNC_7(VAR_9), VAR_10->skb_tx_rsvd);
   VAR_12 = -VAR_3;
   goto out_err;
  }

  if (VAR_14 >= VAR_6) {
   FUNC_6("csk 0x%p, frags %d, %u,%u >%u.\n",
    VAR_8, FUNC_9(VAR_9)->nr_frags, VAR_9->len,
    VAR_9->data_len, (uint)(VAR_6));
   VAR_12 = -VAR_3;
   goto out_err;
  }

  VAR_11 = VAR_9->next;
  VAR_9->next = ((void*)0);
  FUNC_0(VAR_9, VAR_7);
  FUNC_2(VAR_8, VAR_9);
  VAR_13 += VAR_9->len;
  VAR_8->write_seq += VAR_9->len +
    FUNC_3(FUNC_1(VAR_9));
  VAR_9 = VAR_11;
 }
done:
 if (FUNC_4(FUNC_8(&VAR_8->write_queue)))
  VAR_10->csk_push_tx_frames(VAR_8, 1);
 FUNC_11(&VAR_8->lock);
 return VAR_13;

out_err:
 if (VAR_13 == 0 && VAR_12 == -VAR_5)
  VAR_13 = VAR_8->err ? VAR_8->err : -VAR_5;
 else
  VAR_13 = VAR_12;
 goto done;
}

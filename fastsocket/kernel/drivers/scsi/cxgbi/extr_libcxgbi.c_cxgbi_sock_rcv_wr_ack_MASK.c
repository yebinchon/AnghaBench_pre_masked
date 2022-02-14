
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int csum; } ;
struct cxgbi_sock {scalar_t__ wr_cred; scalar_t__ wr_una_cred; scalar_t__ wr_max_cred; unsigned int snd_una; int lock; TYPE_1__* cdev; int write_queue; int dst; int tid; int flags; int state; } ;
struct TYPE_2__ {scalar_t__ (* csk_push_tx_frames ) (struct cxgbi_sock*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct cxgbi_sock*) ;
 int FUNC_2 (struct cxgbi_sock*) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 struct sk_buff* FUNC_4 (struct cxgbi_sock*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int,char*,struct cxgbi_sock*,int ,int ,int ,unsigned int,scalar_t__,scalar_t__,unsigned int,int) ;
 int FUNC_8 (char*,struct cxgbi_sock*,int ,int ,int ,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_9 (char*,struct cxgbi_sock*,int ,int ,int ,unsigned int,unsigned int,...) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct cxgbi_sock*,int ) ;
 scalar_t__ FUNC_14 (int) ;

void FUNC_15(struct cxgbi_sock *VAR_2, unsigned int VAR_3,
      unsigned int VAR_4, int VAR_5)
{
 FUNC_7(1 << VAR_1 | 1 << VAR_0,
   "csk 0x%p,%u,0x%lx,%u, cr %u,%u+%u, snd_una %u,%d.\n",
   VAR_2, VAR_2->state, VAR_2->flags, VAR_2->tid, VAR_3,
   VAR_2->wr_cred, VAR_2->wr_una_cred, VAR_4, VAR_5);

 FUNC_11(&VAR_2->lock);

 VAR_2->wr_cred += VAR_3;
 if (VAR_2->wr_una_cred > VAR_2->wr_max_cred - VAR_2->wr_cred)
  VAR_2->wr_una_cred = VAR_2->wr_max_cred - VAR_2->wr_cred;

 while (VAR_3) {
  struct sk_buff *VAR_6 = FUNC_4(VAR_2);

  if (FUNC_14(!VAR_6)) {
   FUNC_8("csk 0x%p,%u,0x%lx,%u, cr %u,%u+%u, empty.\n",
    VAR_2, VAR_2->state, VAR_2->flags, VAR_2->tid, VAR_3,
    VAR_2->wr_cred, VAR_2->wr_una_cred);
   break;
  }

  if (FUNC_14(VAR_3 < VAR_6->csum)) {
   FUNC_9("csk 0x%p,%u,0x%lx,%u, cr %u,%u+%u, < %u.\n",
    VAR_2, VAR_2->state, VAR_2->flags, VAR_2->tid,
    VAR_3, VAR_2->wr_cred, VAR_2->wr_una_cred,
    VAR_6->csum);
   VAR_6->csum -= VAR_3;
   break;
  } else {
   FUNC_3(VAR_2);
   VAR_3 -= VAR_6->csum;
   FUNC_6(VAR_6);
  }
 }

 FUNC_2(VAR_2);

 if (VAR_5) {
  if (FUNC_14(FUNC_0(VAR_4, VAR_2->snd_una))) {
   FUNC_9("csk 0x%p,%u,0x%lx,%u, snd_una %u/%u.",
    VAR_2, VAR_2->state, VAR_2->flags, VAR_2->tid, VAR_4,
    VAR_2->snd_una);
   goto done;
  }

  if (VAR_2->snd_una != VAR_4) {
   VAR_2->snd_una = VAR_4;
   FUNC_5(VAR_2->dst);
  }
 }

 if (FUNC_10(&VAR_2->write_queue)) {
  if (VAR_2->cdev->csk_push_tx_frames(VAR_2, 0))
   FUNC_1(VAR_2);
 } else
  FUNC_1(VAR_2);
done:
 FUNC_12(&VAR_2->lock);
}

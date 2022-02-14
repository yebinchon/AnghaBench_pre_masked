
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct cxgbi_sock {int lock; int err; int tid; int flags; int state; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_abort_req_rss {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct cpl_abort_req_rss*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct cxgbi_sock*,scalar_t__,int*) ;
 struct cxgb4_lld_info* FUNC_3 (struct cxgbi_device*) ;
 int FUNC_4 (struct cxgbi_sock*,int ) ;
 int FUNC_5 (struct cxgbi_sock*) ;
 int FUNC_6 (struct cxgbi_sock*,int ) ;
 int FUNC_7 (struct cxgbi_sock*) ;
 int FUNC_8 (struct cxgbi_sock*) ;
 int FUNC_9 (struct cxgbi_sock*,int ) ;
 int FUNC_10 (struct cxgbi_sock*,int ) ;
 int FUNC_11 (int,char*,struct cxgbi_sock*,int ,int ,int ,scalar_t__) ;
 struct cxgbi_sock* FUNC_12 (struct tid_info*,unsigned int) ;
 int FUNC_13 (char*,unsigned int) ;
 int FUNC_14 (struct cxgbi_sock*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(struct cxgbi_device *VAR_8, struct sk_buff *VAR_9)
{
 struct cxgbi_sock *VAR_10;
 struct cpl_abort_req_rss *VAR_11 = (struct cpl_abort_req_rss *)VAR_9->data;
 unsigned int VAR_12 = FUNC_0(VAR_11);
 struct cxgb4_lld_info *VAR_13 = FUNC_3(VAR_8);
 struct tid_info *VAR_14 = VAR_13->tids;
 int VAR_15 = VAR_0;

 VAR_10 = FUNC_12(VAR_14, VAR_12);
 if (FUNC_17(!VAR_10)) {
  FUNC_13("can't find connection for tid %u.\n", VAR_12);
  goto rel_skb;
 }

 FUNC_11(1 << VAR_7 | 1 << VAR_6,
  "csk 0x%p,%u,0x%lx, tid %u, status 0x%x.\n",
  VAR_10, VAR_10->state, VAR_10->flags, VAR_10->tid, VAR_11->status);

 if (VAR_11->status == VAR_2 ||
     VAR_11->status == VAR_1)
  goto rel_skb;

 FUNC_7(VAR_10);
 FUNC_15(&VAR_10->lock);

 if (!FUNC_6(VAR_10, VAR_3)) {
  FUNC_9(VAR_10, VAR_3);
  FUNC_10(VAR_10, VAR_5);
  goto done;
 }

 FUNC_4(VAR_10, VAR_3);
 FUNC_14(VAR_10, VAR_15);

 if (!FUNC_6(VAR_10, VAR_4)) {
  VAR_10->err = FUNC_2(VAR_10, VAR_11->status, &VAR_15);
  FUNC_5(VAR_10);
 }
done:
 FUNC_16(&VAR_10->lock);
 FUNC_8(VAR_10);
rel_skb:
 FUNC_1(VAR_9);
}

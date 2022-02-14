
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct cxgbi_sock {unsigned long flags; int state; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_abort_rpl_rss {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct cpl_abort_rpl_rss*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct cxgb4_lld_info* FUNC_2 (struct cxgbi_device*) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 int FUNC_4 (int,char*,scalar_t__,struct cxgbi_sock*,int ,unsigned long) ;
 struct cxgbi_sock* FUNC_5 (struct tid_info*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct cxgbi_device *VAR_3, struct sk_buff *VAR_4)
{
 struct cxgbi_sock *VAR_5;
 struct cpl_abort_rpl_rss *VAR_6 = (struct cpl_abort_rpl_rss *)VAR_4->data;
 unsigned int VAR_7 = FUNC_0(VAR_6);
 struct cxgb4_lld_info *VAR_8 = FUNC_2(VAR_3);
 struct tid_info *VAR_9 = VAR_8->tids;

 VAR_5 = FUNC_5(VAR_9, VAR_7);
 if (!VAR_5)
  goto rel_skb;

 FUNC_4(1 << VAR_2 | 1 << VAR_1,
  "status 0x%x, csk 0x%p, s %u, 0x%lx.\n",
  VAR_6->status, VAR_5, VAR_5 ? VAR_5->state : 0,
  VAR_5 ? VAR_5->flags : 0UL);

 if (VAR_6->status == VAR_0)
  goto rel_skb;

 FUNC_3(VAR_5);
rel_skb:
 FUNC_1(VAR_4);
}

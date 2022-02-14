
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cxgbi_sock {unsigned long flags; int state; } ;
struct cpl_abort_rpl_rss {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct cpl_abort_rpl_rss* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct cxgbi_sock*) ;
 int FUNC_3 (int,char*,scalar_t__,struct cxgbi_sock*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct t3cdev *VAR_3, struct sk_buff *VAR_4, void *VAR_5)
{
 struct cpl_abort_rpl_rss *VAR_6 = FUNC_1(VAR_4);
 struct cxgbi_sock *VAR_7 = VAR_5;

 FUNC_3(1 << VAR_2 | 1 << VAR_1,
  "status 0x%x, csk 0x%p, s %u, 0x%lx.\n",
  VAR_6->status, VAR_7, VAR_7 ? VAR_7->state : 0,
  VAR_7 ? VAR_7->flags : 0UL);






 if (VAR_6->status == VAR_0)
  goto rel_skb;







 if (VAR_7)
  FUNC_2(VAR_7);
rel_skb:
 FUNC_0(VAR_4);
 return 0;
}

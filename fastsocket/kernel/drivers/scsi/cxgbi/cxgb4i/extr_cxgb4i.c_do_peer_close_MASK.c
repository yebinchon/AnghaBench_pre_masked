
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct cxgbi_sock {int tid; int flags; int state; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_peer_close {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct cpl_peer_close*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct cxgb4_lld_info* FUNC_2 (struct cxgbi_device*) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 int FUNC_4 (int,char*,struct cxgbi_sock*,int ,int ,int ) ;
 struct cxgbi_sock* FUNC_5 (struct tid_info*,unsigned int) ;
 int FUNC_6 (char*,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct cxgbi_device *VAR_2, struct sk_buff *VAR_3)
{
 struct cxgbi_sock *VAR_4;
 struct cpl_peer_close *VAR_5 = (struct cpl_peer_close *)VAR_3->data;
 unsigned int VAR_6 = FUNC_0(VAR_5);
 struct cxgb4_lld_info *VAR_7 = FUNC_2(VAR_2);
 struct tid_info *VAR_8 = VAR_7->tids;

 VAR_4 = FUNC_5(VAR_8, VAR_6);
 if (FUNC_7(!VAR_4)) {
  FUNC_6("can't find connection for tid %u.\n", VAR_6);
  goto rel_skb;
 }
 FUNC_4(1 << VAR_1 | 1 << VAR_0,
  "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_4, VAR_4->state, VAR_4->flags, VAR_4->tid);
 FUNC_3(VAR_4);
rel_skb:
 FUNC_1(VAR_3);
}

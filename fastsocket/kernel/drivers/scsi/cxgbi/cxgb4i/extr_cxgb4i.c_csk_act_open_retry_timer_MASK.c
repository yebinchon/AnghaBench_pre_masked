
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {struct sock* sk; } ;
struct cxgbi_sock {int lock; int l2t; int tid; int flags; int state; } ;
struct cpl_act_open_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct cxgbi_sock*,int ) ;
 int FUNC_2 (struct cxgbi_sock*) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 int FUNC_4 (int,char*,struct cxgbi_sock*,int ,int ,int ) ;
 int FUNC_5 (struct cxgbi_sock*,struct sk_buff*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*,struct cxgbi_sock*,int ) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_5)
{
 struct sk_buff *VAR_6;
 struct cxgbi_sock *VAR_7 = (struct cxgbi_sock *)VAR_5;

 FUNC_4(1 << VAR_1 | 1 << VAR_0,
  "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_7, VAR_7->state, VAR_7->flags, VAR_7->tid);

 FUNC_2(VAR_7);
 FUNC_6(&VAR_7->lock);
 VAR_6 = FUNC_0(sizeof(struct cpl_act_open_req), 0, VAR_3);
 if (!VAR_6)
  FUNC_1(VAR_7, -VAR_2);
 else {
  VAR_6->sk = (struct sock *)VAR_7;
  FUNC_8(VAR_6, VAR_7,
     VAR_4);
  FUNC_5(VAR_7, VAR_6, VAR_7->l2t);
 }
 FUNC_7(&VAR_7->lock);
 FUNC_3(VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct cxgbi_sock {int tid; int flags; int state; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_set_tcb_rpl {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct cpl_set_tcb_rpl*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct cxgb4_lld_info* FUNC_2 (struct cxgbi_device*) ;
 int FUNC_3 (int,char*,struct cxgbi_sock*,int ,int ,int ,scalar_t__) ;
 struct cxgbi_sock* FUNC_4 (struct tid_info*,unsigned int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(struct cxgbi_device *VAR_3, struct sk_buff *VAR_4)
{
 struct cpl_set_tcb_rpl *VAR_5 = (struct cpl_set_tcb_rpl *)VAR_4->data;
 unsigned int VAR_6 = FUNC_0(VAR_5);
 struct cxgb4_lld_info *VAR_7 = FUNC_2(VAR_3);
 struct tid_info *VAR_8 = VAR_7->tids;
 struct cxgbi_sock *VAR_9;

 VAR_9 = FUNC_4(VAR_8, VAR_6);
 if (!VAR_9)
  FUNC_5("can't find conn. for tid %u.\n", VAR_6);

 FUNC_3(1 << VAR_2 | 1 << VAR_1,
  "csk 0x%p,%u,%lx,%u, status 0x%x.\n",
  VAR_9, VAR_9->state, VAR_9->flags, VAR_9->tid, VAR_5->status);

 if (VAR_5->status != VAR_0)
  FUNC_5("csk 0x%p,%u, SET_TCB_RPL status %u.\n",
   VAR_9, VAR_6, VAR_5->status);

 FUNC_1(VAR_4);
}

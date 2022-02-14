
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrv_uc_queue {int ucq_lock; int ucq_queue; } ;
struct nfsrv_uc_arg {size_t nua_qi; int nua_flags; } ;
struct nfsrv_sock {struct nfsrv_uc_arg* ns_ua; } ;


 int FUNC_0 (struct nfsrv_uc_arg*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct nfsrv_uc_arg*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 struct nfsrv_uc_queue* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,struct nfsrv_uc_arg*) ;

void
FUNC_6(struct nfsrv_sock *VAR_5)
{
 struct nfsrv_uc_arg *VAR_6 = VAR_5->ns_ua;
 struct nfsrv_uc_queue *VAR_7 = &VAR_3[VAR_6->nua_qi];






 if (VAR_6 == ((void*)0) || (VAR_6->nua_flags & VAR_1) == 0)
  return;

 FUNC_3(VAR_7->ucq_lock);
 if (VAR_6->nua_flags & VAR_1) {
  FUNC_5("nfsrv_uc_dequeue remove %p\n", VAR_6);
  FUNC_2(VAR_7->ucq_queue, VAR_6, VAR_4);
  VAR_6->nua_flags &= ~VAR_1;



 }
 FUNC_0(VAR_5->ns_ua, VAR_0);
 VAR_5->ns_ua = ((void*)0);
 FUNC_4(VAR_7->ucq_lock);
}

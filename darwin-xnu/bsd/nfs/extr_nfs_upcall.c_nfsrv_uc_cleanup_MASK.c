
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrv_uc_queue {int ucq_lock; int ucq_queue; } ;
struct nfsrv_uc_arg {int nua_flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct nfsrv_uc_arg* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct nfsrv_uc_arg*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct nfsrv_uc_queue* VAR_2 ;
 int FUNC_6 () ;
 int VAR_3 ;

void
FUNC_7(void)
{
 int VAR_4;

 FUNC_0("Entering nfsrv_uc_cleanup\n");





 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct nfsrv_uc_queue *VAR_5 = &VAR_2[VAR_4];

  FUNC_4(VAR_5->ucq_lock);
  while (!FUNC_1(VAR_5->ucq_queue)) {
   struct nfsrv_uc_arg *VAR_6 = FUNC_2(VAR_5->ucq_queue);
   FUNC_3(VAR_5->ucq_queue, VAR_6, VAR_3);
   VAR_6->nua_flags &= ~VAR_1;
  }
  FUNC_5(VAR_5->ucq_lock);
 }

 FUNC_6();
}

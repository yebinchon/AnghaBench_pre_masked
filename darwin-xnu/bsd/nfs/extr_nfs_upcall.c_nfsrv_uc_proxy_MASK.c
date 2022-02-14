
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nfsrv_uc_queue {int ucq_flags; int ucq_lock; int ucq_queue; } ;
struct nfsrv_uc_arg {int nua_qi; int nua_flags; int nua_waitflag; int nua_so; int nua_slp; } ;
typedef int socket_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,struct nfsrv_uc_arg*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct nfsrv_uc_queue* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct nfsrv_uc_queue*) ;

__attribute__((used)) static void
FUNC_7(socket_t VAR_7, void *VAR_8, int VAR_9)
{
 struct nfsrv_uc_arg *VAR_10 = (struct nfsrv_uc_arg *)VAR_8;
 int VAR_11 = VAR_10->nua_qi;
 struct nfsrv_uc_queue *VAR_12 = &VAR_5[VAR_11];

 FUNC_3(VAR_12->ucq_lock);
 FUNC_0("nfsrv_uc_proxy called for %p (%p)\n", VAR_10, VAR_10->nua_slp);
 FUNC_0("\tUp-call queued on %d for wakeup of %p\n", VAR_11, VAR_12);
 if (VAR_10 == ((void*)0) || VAR_10->nua_flags & VAR_0) {
  FUNC_4(VAR_12->ucq_lock);
  return;
 }

 VAR_10->nua_so = VAR_7;
 VAR_10->nua_waitflag = VAR_9;

 FUNC_2(VAR_12->ucq_queue, VAR_10, VAR_6);

 VAR_10->nua_flags |= VAR_0;
 if (VAR_12->ucq_flags | VAR_1)
  FUNC_6(VAR_12);
 FUNC_4(VAR_12->ucq_lock);
}

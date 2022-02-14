
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint64_t ;
struct nfsmount {scalar_t__ nm_vers; } ;
struct nfs_lock_owner {int nlo_pid; } ;
struct flock {scalar_t__ l_type; void* l_whence; int l_len; int l_start; int l_pid; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int msgreq ;
struct TYPE_10__ {scalar_t__ l_type; int l_len; int l_start; int l_pid; void* l_whence; } ;
struct TYPE_13__ {int lm_flags; TYPE_1__ lm_fl; int lm_cred; int lm_fh_len; int lm_fh; int lm_version; } ;
struct TYPE_12__ {int lmr_errno; TYPE_4__ lmr_msg; } ;
struct TYPE_11__ {int n_fhp; int n_fhsize; } ;
typedef TYPE_3__ LOCKD_MSG_REQUEST ;
typedef TYPE_4__ LOCKD_MSG ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfsmount* FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_6 (struct nfsmount*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(
 nfsnode_t VAR_7,
 struct nfs_lock_owner *VAR_8,
 struct flock *VAR_9,
 uint64_t VAR_10,
 uint64_t VAR_11,
 vfs_context_t VAR_12)
{
 struct nfsmount *VAR_13;
 int VAR_14;
 LOCKD_MSG_REQUEST VAR_15;
 LOCKD_MSG *VAR_16;

 VAR_13 = FUNC_0(VAR_7);
 if (FUNC_6(VAR_13))
  return (VAR_0);


 FUNC_3(&VAR_15, sizeof(VAR_15));
 VAR_16 = &VAR_15.lmr_msg;
 VAR_16->lm_version = VAR_3;
 VAR_16->lm_flags |= VAR_2;
 VAR_16->lm_fh_len = (VAR_13->nm_vers == VAR_5) ? VAR_4 : VAR_7->n_fhsize;
 FUNC_2(VAR_7->n_fhp, VAR_16->lm_fh, VAR_16->lm_fh_len);
 FUNC_4(FUNC_8(VAR_12), &VAR_16->lm_cred);

 VAR_16->lm_fl.l_whence = VAR_6;
 VAR_16->lm_fl.l_start = VAR_10;
 VAR_16->lm_fl.l_len = FUNC_1(VAR_10, VAR_11);
 VAR_16->lm_fl.l_type = VAR_9->l_type;
 VAR_16->lm_fl.l_pid = VAR_8->nlo_pid;

 VAR_14 = FUNC_5(VAR_7, 0, &VAR_15, 0, FUNC_7(VAR_12));

 if (!VAR_14 && (VAR_16->lm_flags & VAR_2) && !VAR_15.lmr_errno) {
  if (VAR_16->lm_fl.l_type != VAR_1) {
   VAR_9->l_type = VAR_16->lm_fl.l_type;
   VAR_9->l_pid = VAR_16->lm_fl.l_pid;
   VAR_9->l_start = VAR_16->lm_fl.l_start;
   VAR_9->l_len = VAR_16->lm_fl.l_len;
   VAR_9->l_whence = VAR_6;
  } else
   VAR_9->l_type = VAR_1;
 }

 return (VAR_14);
}

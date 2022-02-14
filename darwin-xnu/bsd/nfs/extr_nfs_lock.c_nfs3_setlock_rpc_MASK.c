
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int thread_t ;
struct nfsmount {scalar_t__ nm_vers; } ;
struct nfs_open_file {scalar_t__ nof_owner; } ;
struct nfs_lock_owner {int nlo_pid; scalar_t__ nlo_open_owner; } ;
struct nfs_file_lock {int nfl_flags; int nfl_type; int nfl_end; int nfl_start; struct nfs_lock_owner* nfl_owner; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int msgreq ;
typedef int kauth_cred_t ;
struct TYPE_10__ {int l_pid; int l_type; int l_len; int l_start; int l_whence; } ;
struct TYPE_13__ {TYPE_1__ lm_fl; int lm_cred; int lm_fh_len; int lm_fh; int lm_flags; int lm_version; } ;
struct TYPE_12__ {TYPE_4__ lmr_msg; } ;
struct TYPE_11__ {int n_fhp; int n_fhsize; } ;
typedef TYPE_3__ LOCKD_MSG_REQUEST ;
typedef TYPE_4__ LOCKD_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfsmount* FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_3__*,int,int ) ;
 int FUNC_6 (struct nfs_lock_owner*) ;
 int FUNC_7 (struct nfs_lock_owner*,int ) ;
 scalar_t__ FUNC_8 (struct nfsmount*) ;
 int FUNC_9 (scalar_t__) ;

int
FUNC_10(
 nfsnode_t VAR_8,
 struct nfs_open_file *VAR_9,
 struct nfs_file_lock *VAR_10,
 int VAR_11,
 int VAR_12,
 thread_t VAR_13,
 kauth_cred_t VAR_14)
{
 struct nfs_lock_owner *VAR_15 = VAR_10->nfl_owner;
 struct nfsmount *VAR_16;
 int VAR_17;
 LOCKD_MSG_REQUEST VAR_18;
 LOCKD_MSG *VAR_19;

 VAR_16 = FUNC_0(VAR_8);
 if (FUNC_8(VAR_16))
  return (VAR_0);

 if (!VAR_15->nlo_open_owner) {
  FUNC_9(VAR_9->nof_owner);
  VAR_15->nlo_open_owner = VAR_9->nof_owner;
 }
 if ((VAR_17 = FUNC_7(VAR_15, VAR_13)))
  return (VAR_17);


 FUNC_3(&VAR_18, sizeof(VAR_18));
 VAR_19 = &VAR_18.lmr_msg;
 VAR_19->lm_version = VAR_3;
 if ((VAR_10->nfl_flags & VAR_5) && !VAR_11)
  VAR_19->lm_flags |= VAR_1;
 if (VAR_11)
  VAR_19->lm_flags |= VAR_2;
 VAR_19->lm_fh_len = (VAR_16->nm_vers == VAR_6) ? VAR_4 : VAR_8->n_fhsize;
 FUNC_2(VAR_8->n_fhp, VAR_19->lm_fh, VAR_19->lm_fh_len);
 FUNC_4(VAR_14, &VAR_19->lm_cred);

 VAR_19->lm_fl.l_whence = VAR_7;
 VAR_19->lm_fl.l_start = VAR_10->nfl_start;
 VAR_19->lm_fl.l_len = FUNC_1(VAR_10->nfl_start, VAR_10->nfl_end);
 VAR_19->lm_fl.l_type = VAR_10->nfl_type;
 VAR_19->lm_fl.l_pid = VAR_15->nlo_pid;

 VAR_17 = FUNC_5(VAR_8, 0, &VAR_18, VAR_12, VAR_13);

 FUNC_6(VAR_15);
 return (VAR_17);
}

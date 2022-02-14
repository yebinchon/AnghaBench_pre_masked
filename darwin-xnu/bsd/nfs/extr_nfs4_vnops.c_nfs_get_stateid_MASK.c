
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int thread_t ;
struct nfsmount {int dummy; } ;
struct nfs_open_owner {int dummy; } ;
struct TYPE_12__ {int seqid; int* other; } ;
struct nfs_open_file {int nof_flags; TYPE_3__ nof_stateid; scalar_t__ nof_access; } ;
struct nfs_lock_owner {TYPE_3__ nlo_stateid; int nlo_locks; } ;
typedef scalar_t__ proc_t ;
typedef TYPE_2__* nfsnode_t ;
typedef TYPE_3__ nfs_stateid ;
typedef int kauth_cred_t ;
struct TYPE_10__ {int nva_flags; } ;
struct TYPE_11__ {int n_openflags; TYPE_1__ n_vattr; TYPE_3__ n_dstateid; } ;


 struct nfsmount* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct nfs_open_file*,int ) ;
 struct nfs_lock_owner* FUNC_6 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_7 (struct nfs_lock_owner*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,struct nfs_open_owner*,struct nfs_open_file**,int ,int ,int ) ;
 struct nfs_open_owner* FUNC_9 (struct nfsmount*,int ,int ) ;
 int FUNC_10 (struct nfs_open_owner*) ;

void
FUNC_11(nfsnode_t VAR_4, thread_t VAR_5, kauth_cred_t VAR_6, nfs_stateid *VAR_7)
{
 struct nfsmount *VAR_8 = FUNC_0(VAR_4);
 proc_t VAR_9 = VAR_5 ? FUNC_4(VAR_5) : FUNC_3();
 struct nfs_open_owner *VAR_10 = ((void*)0);
 struct nfs_open_file *VAR_11 = ((void*)0);
 struct nfs_lock_owner *VAR_12 = ((void*)0);
 nfs_stateid *VAR_13 = ((void*)0);

 if (VAR_4->n_openflags & VAR_3) {
  VAR_13 = &VAR_4->n_dstateid;
 } else {
  if (VAR_9)
   VAR_12 = FUNC_6(VAR_4, VAR_9, 0);
  if (VAR_12 && !FUNC_2(&VAR_12->nlo_locks)) {

   VAR_13 = &VAR_12->nlo_stateid;
  } else if (((VAR_10 = FUNC_9(VAR_8, VAR_6, 0))) &&
    (FUNC_8(VAR_4, VAR_10, &VAR_11, 0, 0, 0) == 0) &&
    !(VAR_11->nof_flags & VAR_1) &&
    VAR_11->nof_access) {

   if (VAR_11->nof_flags & VAR_2)
    FUNC_5(VAR_11, VAR_5);
   if (!(VAR_11->nof_flags & VAR_1))
    VAR_13 = &VAR_11->nof_stateid;
  }
 }

 if (VAR_13) {
  VAR_7->seqid = VAR_13->seqid;
  VAR_7->other[0] = VAR_13->other[0];
  VAR_7->other[1] = VAR_13->other[1];
  VAR_7->other[2] = VAR_13->other[2];
 } else {

  if (!(VAR_4->n_vattr.nva_flags & VAR_0))
   FUNC_1(VAR_4, "nfs_get_stateid: no stateid");
  VAR_7->seqid = VAR_7->other[0] = VAR_7->other[1] = VAR_7->other[2] = 0xffffffff;
 }
 if (VAR_12)
  FUNC_7(VAR_12);
 if (VAR_10)
  FUNC_10(VAR_10);
}

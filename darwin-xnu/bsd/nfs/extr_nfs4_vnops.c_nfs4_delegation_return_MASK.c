
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int thread_t ;
struct nfsmount {int nm_lock; int nm_dreturnq; int nm_delegations; } ;
typedef TYPE_3__* nfsnode_t ;
typedef int nfs_stateid ;
typedef int kauth_cred_t ;
struct TYPE_15__ {int fh_len; int fh_data; } ;
typedef TYPE_4__ fhandle_t ;
struct TYPE_13__ {scalar_t__ tqe_next; } ;
struct TYPE_12__ {scalar_t__ tqe_next; } ;
struct TYPE_14__ {int n_openflags; int n_openlock; TYPE_2__ n_dreturn; TYPE_1__ n_dlink; int n_fhp; int n_fhsize; int n_dstateid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct nfsmount* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (struct nfsmount*,int ,int ,int *,int,int ,int ) ;
 scalar_t__ FUNC_8 (struct nfsmount*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct nfsmount*) ;
 int FUNC_12 (struct nfsmount*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int *) ;

int
FUNC_15(nfsnode_t VAR_11, int VAR_12, thread_t VAR_13, kauth_cred_t VAR_14)
{
 struct nfsmount *VAR_15;
 fhandle_t VAR_16;
 nfs_stateid VAR_17;
 int VAR_18;

 VAR_15 = FUNC_0(VAR_11);
 if (FUNC_8(VAR_15))
  return (VAR_0);


 FUNC_4(&VAR_11->n_openlock);
 VAR_11->n_openflags |= (VAR_7|VAR_8);
 FUNC_5(&VAR_11->n_openlock);


 if ((VAR_18 = FUNC_14(VAR_11, ((void*)0))))
  goto out;


 if ((VAR_18 = FUNC_6(VAR_11, VAR_12)))
  goto out;


 FUNC_4(&VAR_11->n_openlock);
 VAR_17 = VAR_11->n_dstateid;
 VAR_16.fh_len = VAR_11->n_fhsize;
 FUNC_3(VAR_11->n_fhp, &VAR_16.fh_data, VAR_16.fh_len);
 FUNC_5(&VAR_11->n_openlock);
 VAR_18 = FUNC_7(FUNC_0(VAR_11), VAR_16.fh_data, VAR_16.fh_len, &VAR_17, VAR_12, VAR_13, VAR_14);

 if ((VAR_18 != VAR_1) && (VAR_18 != VAR_4) && (VAR_18 != VAR_3)) {
  FUNC_4(&VAR_11->n_openlock);
  VAR_11->n_openflags &= ~VAR_6;
  FUNC_4(&VAR_15->nm_lock);
  if (VAR_11->n_dlink.tqe_next != VAR_5) {
   FUNC_2(&VAR_15->nm_delegations, VAR_11, VAR_9);
   VAR_11->n_dlink.tqe_next = VAR_5;
  }
  FUNC_5(&VAR_15->nm_lock);
  FUNC_5(&VAR_11->n_openlock);
 }

out:

 FUNC_4(&VAR_15->nm_lock);
 if (VAR_11->n_dreturn.tqe_next != VAR_5) {
  FUNC_2(&VAR_15->nm_dreturnq, VAR_11, VAR_10);
  VAR_11->n_dreturn.tqe_next = VAR_5;
 }
 FUNC_5(&VAR_15->nm_lock);
 FUNC_4(&VAR_11->n_openlock);
 VAR_11->n_openflags &= ~(VAR_7|VAR_8);
 FUNC_5(&VAR_11->n_openlock);

 if (VAR_18) {
  FUNC_1(VAR_11, "nfs4_delegation_return, error %d", VAR_18);
  if (VAR_18 == VAR_1)
   FUNC_11(VAR_15);
  if (FUNC_10(VAR_18)) {

   FUNC_4(&VAR_15->nm_lock);
   FUNC_12(VAR_15, FUNC_9(VAR_18) ? VAR_2 : 0);
   FUNC_5(&VAR_15->nm_lock);
  }
 }

 FUNC_13(VAR_11);

 return (VAR_18);
}

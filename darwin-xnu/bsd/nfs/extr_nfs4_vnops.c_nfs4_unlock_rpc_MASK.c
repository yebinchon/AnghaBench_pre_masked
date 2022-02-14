
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int thread_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_lock_owner {int nlo_stateid; int nlo_seqid; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_11__ {int nva_flags; } ;
struct TYPE_12__ {int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct nfs_lock_owner*) ;
 int FUNC_4 (struct nfs_lock_owner*,int *) ;
 scalar_t__ FUNC_5 (struct nfsmount*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,struct nfs_lock_owner*,int) ;
 int FUNC_9 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int,struct nfsm_chain*,int *,int*) ;
 int FUNC_10 (int,int,int ) ;
 int FUNC_11 (int,struct nfsm_chain*,int ) ;
 int FUNC_12 (int,struct nfsm_chain*,int ) ;
 int FUNC_13 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_14 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_15 (int,struct nfsm_chain*,int ,int ,int ) ;
 int FUNC_16 (int,struct nfsm_chain*,int *) ;
 int FUNC_17 (int,struct nfsm_chain*,int) ;
 int FUNC_18 (int,struct nfsm_chain*) ;
 int FUNC_19 (struct nfsm_chain*) ;
 int FUNC_20 (int,struct nfsm_chain*,int) ;
 int FUNC_21 (int,struct nfsm_chain*,int *) ;
 int FUNC_22 (int,struct nfsm_chain*,TYPE_2__*,int ,int *) ;
 int FUNC_23 (struct nfsm_chain*) ;
 int FUNC_24 (int,struct nfsm_chain*,int ) ;
 int FUNC_25 (int,struct nfsm_chain*) ;
 int FUNC_26 (int) ;

int
FUNC_27(
 nfsnode_t VAR_16,
 struct nfs_lock_owner *VAR_17,
 int VAR_18,
 uint64_t VAR_19,
 uint64_t VAR_20,
 int VAR_21,
 thread_t VAR_22,
 kauth_cred_t VAR_23)
{
 struct nfsmount *VAR_24;
 struct nfsm_chain VAR_25, VAR_26;
 uint64_t VAR_27;
 int VAR_28 = 0, VAR_29 = VAR_1, VAR_30, VAR_31;
 struct nfsreq_secinfo_args VAR_32;

 VAR_24 = FUNC_1(VAR_16);
 if (FUNC_5(VAR_24))
  return (VAR_2);
 if (VAR_16->n_vattr.nva_flags & VAR_7)
  return (VAR_0);

 VAR_28 = FUNC_4(VAR_17, ((void*)0));
 if (VAR_28)
  return (VAR_28);

 FUNC_0(&VAR_32, VAR_16, ((void*)0), 0, ((void*)0), 0);
 FUNC_23(&VAR_25);
 FUNC_23(&VAR_26);


 VAR_30 = 3;
 FUNC_17(VAR_28, &VAR_25, 26 * VAR_6);
 FUNC_14(VAR_28, &VAR_25, "unlock", VAR_24->nm_minor_vers, VAR_30);
 VAR_30--;
 FUNC_11(VAR_28, &VAR_25, VAR_12);
 FUNC_15(VAR_28, &VAR_25, VAR_13, VAR_16->n_fhp, VAR_16->n_fhsize);
 VAR_30--;
 FUNC_11(VAR_28, &VAR_25, VAR_10);
 FUNC_13(VAR_28, &VAR_25, VAR_15, VAR_24, VAR_16);
 VAR_30--;
 FUNC_11(VAR_28, &VAR_25, VAR_11);
 FUNC_11(VAR_28, &VAR_25, (VAR_18 == VAR_4) ? VAR_9 : VAR_8);
 FUNC_11(VAR_28, &VAR_25, VAR_17->nlo_seqid);
 FUNC_16(VAR_28, &VAR_25, &VAR_17->nlo_stateid);
 FUNC_12(VAR_28, &VAR_25, VAR_19);
 FUNC_12(VAR_28, &VAR_25, FUNC_2(VAR_19, VAR_20));
 FUNC_18(VAR_28, &VAR_25);
 FUNC_10(VAR_28, (VAR_30 == 0), VAR_3);
 FUNC_26(VAR_28);

 VAR_28 = FUNC_9(VAR_16, ((void*)0), &VAR_25, VAR_5, VAR_22, VAR_23, &VAR_32, VAR_21|VAR_14, &VAR_26, &VAR_27, &VAR_31);

 if ((VAR_29 = FUNC_6(VAR_16)))
  VAR_28 = VAR_29;
 FUNC_25(VAR_28, &VAR_26);
 FUNC_20(VAR_28, &VAR_26, VAR_30);
 FUNC_24(VAR_28, &VAR_26, VAR_12);
 FUNC_26(VAR_28);
 FUNC_24(VAR_28, &VAR_26, VAR_10);
 FUNC_22(VAR_28, &VAR_26, VAR_16, VAR_13, &VAR_27);
 FUNC_26(VAR_28);
 FUNC_24(VAR_28, &VAR_26, VAR_11);
 FUNC_8(((void*)0), VAR_17, VAR_28);
 FUNC_21(VAR_28, &VAR_26, &VAR_17->nlo_stateid);
nfsmout:
 if (!VAR_29)
  FUNC_7(VAR_16);
 FUNC_3(VAR_17);
 FUNC_19(&VAR_25);
 FUNC_19(&VAR_26);
 return (VAR_28);
}

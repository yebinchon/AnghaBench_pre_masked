
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int thread_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {scalar_t__ nm_stategenid; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_open_file {TYPE_6__* nof_owner; int nof_stateid; } ;
struct nfs_lock_owner {scalar_t__ nlo_stategenid; int nlo_seqid; int nlo_stateid; TYPE_6__* nlo_open_owner; } ;
struct nfs_file_lock {int nfl_flags; scalar_t__ nfl_type; int nfl_end; int nfl_start; struct nfs_lock_owner* nfl_owner; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_17__ {int noo_seqid; } ;
struct TYPE_15__ {int nva_flags; } ;
struct TYPE_16__ {int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct nfs_lock_owner*) ;
 int FUNC_4 (struct nfs_lock_owner*,int ) ;
 scalar_t__ FUNC_5 (struct nfsmount*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct nfs_open_file*) ;
 int FUNC_9 (struct nfs_open_file*,int ) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,int ) ;
 int FUNC_13 (TYPE_6__*,struct nfs_lock_owner*,int) ;
 int FUNC_14 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int,struct nfsm_chain*,int *,int*) ;
 int FUNC_15 (int,int,int ) ;
 int FUNC_16 (int,struct nfsm_chain*,int) ;
 int FUNC_17 (int,struct nfsm_chain*,int ) ;
 int FUNC_18 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_19 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_20 (int,struct nfsm_chain*,int ,int ,int ) ;
 int FUNC_21 (int,struct nfsm_chain*,struct nfsmount*,struct nfs_lock_owner*) ;
 int FUNC_22 (int,struct nfsm_chain*,int *) ;
 int FUNC_23 (int,struct nfsm_chain*,int) ;
 int FUNC_24 (int,struct nfsm_chain*) ;
 int FUNC_25 (struct nfsm_chain*) ;
 int FUNC_26 (int,struct nfsm_chain*,int) ;
 int FUNC_27 (int,struct nfsm_chain*,int *) ;
 int FUNC_28 (int,struct nfsm_chain*,TYPE_2__*,int ,int *) ;
 int FUNC_29 (struct nfsm_chain*) ;
 int FUNC_30 (int,struct nfsm_chain*,int) ;
 int FUNC_31 (int,struct nfsm_chain*) ;
 int FUNC_32 (int) ;

int
FUNC_33(
 nfsnode_t VAR_19,
 struct nfs_open_file *VAR_20,
 struct nfs_file_lock *VAR_21,
 int VAR_22,
 int VAR_23,
 thread_t VAR_24,
 kauth_cred_t VAR_25)
{
 struct nfs_lock_owner *VAR_26 = VAR_21->nfl_owner;
 struct nfsmount *VAR_27;
 struct nfsm_chain VAR_28, VAR_29;
 uint64_t VAR_30;
 uint32_t VAR_31;
 int VAR_32 = 0, VAR_33 = VAR_1, VAR_34, VAR_35, VAR_36;
 struct nfsreq_secinfo_args VAR_37;

 VAR_27 = FUNC_1(VAR_19);
 if (FUNC_5(VAR_27))
  return (VAR_2);
 if (VAR_19->n_vattr.nva_flags & VAR_7)
  return (VAR_0);

 VAR_34 = (VAR_26->nlo_stategenid != VAR_27->nm_stategenid);
 VAR_31 = (VAR_21->nfl_flags & VAR_8) ?
   ((VAR_21->nfl_type == VAR_4) ?
    VAR_12 :
    VAR_10) :
   ((VAR_21->nfl_type == VAR_4) ?
    VAR_11 :
    VAR_9);
 if (VAR_34) {
  VAR_32 = FUNC_9(VAR_20, VAR_24);
  if (VAR_32)
   return (VAR_32);
  VAR_32 = FUNC_12(VAR_20->nof_owner, VAR_24);
  if (VAR_32) {
   FUNC_8(VAR_20);
   return (VAR_32);
  }
  if (!VAR_26->nlo_open_owner) {
   FUNC_11(VAR_20->nof_owner);
   VAR_26->nlo_open_owner = VAR_20->nof_owner;
  }
 }
 VAR_32 = FUNC_4(VAR_26, VAR_24);
 if (VAR_32) {
  if (VAR_34) {
   FUNC_10(VAR_20->nof_owner);
   FUNC_8(VAR_20);
  }
  return (VAR_32);
 }

 FUNC_0(&VAR_37, VAR_19, ((void*)0), 0, ((void*)0), 0);
 FUNC_29(&VAR_28);
 FUNC_29(&VAR_29);


 VAR_35 = 3;
 FUNC_23(VAR_32, &VAR_28, 33 * VAR_6);
 FUNC_19(VAR_32, &VAR_28, "lock", VAR_27->nm_minor_vers, VAR_35);
 VAR_35--;
 FUNC_16(VAR_32, &VAR_28, VAR_15);
 FUNC_20(VAR_32, &VAR_28, VAR_16, VAR_19->n_fhp, VAR_19->n_fhsize);
 VAR_35--;
 FUNC_16(VAR_32, &VAR_28, VAR_13);
 FUNC_18(VAR_32, &VAR_28, VAR_18, VAR_27, VAR_19);
 VAR_35--;
 FUNC_16(VAR_32, &VAR_28, VAR_14);
 FUNC_16(VAR_32, &VAR_28, VAR_31);
 FUNC_16(VAR_32, &VAR_28, VAR_22);
 FUNC_17(VAR_32, &VAR_28, VAR_21->nfl_start);
 FUNC_17(VAR_32, &VAR_28, FUNC_2(VAR_21->nfl_start, VAR_21->nfl_end));
 FUNC_16(VAR_32, &VAR_28, VAR_34);
 if (VAR_34) {
  FUNC_16(VAR_32, &VAR_28, VAR_20->nof_owner->noo_seqid);
  FUNC_22(VAR_32, &VAR_28, &VAR_20->nof_stateid);
  FUNC_16(VAR_32, &VAR_28, VAR_26->nlo_seqid);
  FUNC_21(VAR_32, &VAR_28, VAR_27, VAR_26);
 } else {
  FUNC_22(VAR_32, &VAR_28, &VAR_26->nlo_stateid);
  FUNC_16(VAR_32, &VAR_28, VAR_26->nlo_seqid);
 }
 FUNC_24(VAR_32, &VAR_28);
 FUNC_15(VAR_32, (VAR_35 == 0), VAR_3);
 FUNC_32(VAR_32);

 VAR_32 = FUNC_14(VAR_19, ((void*)0), &VAR_28, VAR_5, VAR_24, VAR_25, &VAR_37, VAR_23|VAR_17, &VAR_29, &VAR_30, &VAR_36);

 if ((VAR_33 = FUNC_6(VAR_19)))
  VAR_32 = VAR_33;
 FUNC_31(VAR_32, &VAR_29);
 FUNC_26(VAR_32, &VAR_29, VAR_35);
 FUNC_30(VAR_32, &VAR_29, VAR_15);
 FUNC_32(VAR_32);
 FUNC_30(VAR_32, &VAR_29, VAR_13);
 FUNC_28(VAR_32, &VAR_29, VAR_19, VAR_16, &VAR_30);
 FUNC_32(VAR_32);
 FUNC_30(VAR_32, &VAR_29, VAR_14);
 FUNC_13(VAR_34 ? VAR_20->nof_owner : ((void*)0), VAR_26, VAR_32);
 FUNC_27(VAR_32, &VAR_29, &VAR_26->nlo_stateid);



 if (VAR_34 && !VAR_32)
  VAR_26->nlo_stategenid = VAR_27->nm_stategenid;
nfsmout:
 if (!VAR_33)
  FUNC_7(VAR_19);
 FUNC_3(VAR_26);
 if (VAR_34) {
  FUNC_10(VAR_20->nof_owner);
  FUNC_8(VAR_20);
 }
 FUNC_25(&VAR_28);
 FUNC_25(&VAR_29);
 return (VAR_32);
}

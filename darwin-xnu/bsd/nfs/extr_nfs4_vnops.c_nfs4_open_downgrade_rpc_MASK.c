
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int u_int64_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_vers; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_open_owner {int noo_seqid; } ;
struct nfs_open_file {int nof_stateid; int nof_deny; int nof_access; struct nfs_open_owner* nof_owner; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_10__ {int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_1__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct nfs_open_owner*) ;
 int FUNC_6 (struct nfs_open_owner*,int *) ;
 int FUNC_7 (struct nfs_open_owner*,int *,int) ;
 int FUNC_8 (TYPE_1__*,int *,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int ,struct nfsm_chain*,int *,int*) ;
 int FUNC_9 (int,int,int ) ;
 int FUNC_10 (int,struct nfsm_chain*,int ) ;
 int FUNC_11 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_1__*) ;
 int FUNC_12 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_13 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_14 (int,struct nfsm_chain*,int *) ;
 int FUNC_15 (int,struct nfsm_chain*,int) ;
 int FUNC_16 (int,struct nfsm_chain*) ;
 int FUNC_17 (struct nfsm_chain*) ;
 int FUNC_18 (int,struct nfsm_chain*,int) ;
 int FUNC_19 (int,struct nfsm_chain*,int *) ;
 int FUNC_20 (int,struct nfsm_chain*,TYPE_1__*,int,int *) ;
 int FUNC_21 (struct nfsm_chain*) ;
 int FUNC_22 (int,struct nfsm_chain*,int ) ;
 int FUNC_23 (int,struct nfsm_chain*) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;

int
FUNC_27(
 nfsnode_t VAR_10,
 struct nfs_open_file *VAR_11,
 vfs_context_t VAR_12)
{
 struct nfs_open_owner *VAR_13 = VAR_11->nof_owner;
 struct nfsmount *VAR_14;
 int VAR_15, VAR_16 = VAR_0, VAR_17, VAR_18, VAR_19;
 struct nfsm_chain VAR_20, VAR_21;
 u_int64_t VAR_22;
 struct nfsreq_secinfo_args VAR_23;

 VAR_14 = FUNC_1(VAR_10);
 if (FUNC_2(VAR_14))
  return (VAR_1);
 VAR_18 = VAR_14->nm_vers;

 if ((VAR_15 = FUNC_6(VAR_13, ((void*)0))))
  return (VAR_15);

 FUNC_0(&VAR_23, VAR_10, ((void*)0), 0, ((void*)0), 0);
 FUNC_21(&VAR_20);
 FUNC_21(&VAR_21);


 VAR_19 = 3;
 FUNC_15(VAR_15, &VAR_20, 23 * VAR_4);
 FUNC_12(VAR_15, &VAR_20, "open_downgrd", VAR_14->nm_minor_vers, VAR_19);
 VAR_19--;
 FUNC_10(VAR_15, &VAR_20, VAR_7);
 FUNC_13(VAR_15, &VAR_20, VAR_18, VAR_10->n_fhp, VAR_10->n_fhsize);
 VAR_19--;
 FUNC_10(VAR_15, &VAR_20, VAR_6);
 FUNC_14(VAR_15, &VAR_20, &VAR_11->nof_stateid);
 FUNC_10(VAR_15, &VAR_20, VAR_13->noo_seqid);
 FUNC_10(VAR_15, &VAR_20, VAR_11->nof_access);
 FUNC_10(VAR_15, &VAR_20, VAR_11->nof_deny);
 VAR_19--;
 FUNC_10(VAR_15, &VAR_20, VAR_5);
 FUNC_11(VAR_15, &VAR_20, VAR_9, VAR_14, VAR_10);
 FUNC_16(VAR_15, &VAR_20);
 FUNC_9(VAR_15, (VAR_19 == 0), VAR_2);
 FUNC_24(VAR_15);
 VAR_15 = FUNC_8(VAR_10, ((void*)0), &VAR_20, VAR_3,
   FUNC_25(VAR_12), FUNC_26(VAR_12),
   &VAR_23, VAR_8, &VAR_21, &VAR_22, &VAR_17);

 if ((VAR_16 = FUNC_3(VAR_10)))
  VAR_15 = VAR_16;
 FUNC_23(VAR_15, &VAR_21);
 FUNC_18(VAR_15, &VAR_21, VAR_19);
 FUNC_22(VAR_15, &VAR_21, VAR_7);
 FUNC_24(VAR_15);
 FUNC_22(VAR_15, &VAR_21, VAR_6);
 FUNC_7(VAR_13, ((void*)0), VAR_15);
 FUNC_19(VAR_15, &VAR_21, &VAR_11->nof_stateid);
 FUNC_22(VAR_15, &VAR_21, VAR_5);
 FUNC_20(VAR_15, &VAR_21, VAR_10, VAR_18, &VAR_22);
nfsmout:
 if (!VAR_16)
  FUNC_4(VAR_10);
 FUNC_5(VAR_13);
 FUNC_17(&VAR_20);
 FUNC_17(&VAR_21);
 return (VAR_15);
}

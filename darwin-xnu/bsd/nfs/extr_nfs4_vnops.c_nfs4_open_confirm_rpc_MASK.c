
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_char ;
typedef int thread_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_vers; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_vattr {int dummy; } ;
struct nfs_open_owner {int noo_seqid; } ;
typedef int nfsnode_t ;
typedef int nfs_stateid ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,int ,int *,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct nfsm_chain*,int *,struct nfs_vattr*,int *,int *,int *) ;
 int VAR_7 ;
 int FUNC_2 (struct nfs_open_owner*,int *,int) ;
 int FUNC_3 (int ,int *,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int ,struct nfsm_chain*,int *,int*) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,struct nfsm_chain*,int ) ;
 int FUNC_6 (int,struct nfsm_chain*,int ,struct nfsmount*,int ) ;
 int FUNC_7 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_8 (int,struct nfsm_chain*,int ,int *,int) ;
 int FUNC_9 (int,struct nfsm_chain*,int *) ;
 int FUNC_10 (int,struct nfsm_chain*,int) ;
 int FUNC_11 (int,struct nfsm_chain*) ;
 int FUNC_12 (struct nfsm_chain*) ;
 int FUNC_13 (int,struct nfsm_chain*,int) ;
 int FUNC_14 (int,struct nfsm_chain*,int *) ;
 int FUNC_15 (struct nfsm_chain*) ;
 int FUNC_16 (int,struct nfsm_chain*,int ) ;
 int FUNC_17 (int,struct nfsm_chain*) ;
 int FUNC_18 (int) ;

int
FUNC_19(
 struct nfsmount *VAR_8,
 nfsnode_t VAR_9,
 u_char *VAR_10,
 int VAR_11,
 struct nfs_open_owner *VAR_12,
 nfs_stateid *VAR_13,
 thread_t VAR_14,
 kauth_cred_t VAR_15,
 struct nfs_vattr *VAR_16,
 uint64_t *VAR_17)
{
 struct nfsm_chain VAR_18, VAR_19;
 int VAR_20 = 0, VAR_21, VAR_22;
 struct nfsreq_secinfo_args VAR_23;

 FUNC_0(&VAR_23, VAR_9, ((void*)0), 0, ((void*)0), 0);
 FUNC_15(&VAR_18);
 FUNC_15(&VAR_19);


 VAR_22 = 3;
 FUNC_10(VAR_20, &VAR_18, 23 * VAR_2);
 FUNC_7(VAR_20, &VAR_18, "open_confirm", VAR_8->nm_minor_vers, VAR_22);
 VAR_22--;
 FUNC_5(VAR_20, &VAR_18, VAR_5);
 FUNC_8(VAR_20, &VAR_18, VAR_8->nm_vers, VAR_10, VAR_11);
 VAR_22--;
 FUNC_5(VAR_20, &VAR_18, VAR_4);
 FUNC_9(VAR_20, &VAR_18, VAR_13);
 FUNC_5(VAR_20, &VAR_18, VAR_12->noo_seqid);
 VAR_22--;
 FUNC_5(VAR_20, &VAR_18, VAR_3);
 FUNC_6(VAR_20, &VAR_18, VAR_7, VAR_8, VAR_9);
 FUNC_11(VAR_20, &VAR_18);
 FUNC_4(VAR_20, (VAR_22 == 0), VAR_0);
 FUNC_18(VAR_20);
 VAR_20 = FUNC_3(VAR_9, ((void*)0), &VAR_18, VAR_1, VAR_14, VAR_15, &VAR_23, VAR_6, &VAR_19, VAR_17, &VAR_21);

 FUNC_17(VAR_20, &VAR_19);
 FUNC_13(VAR_20, &VAR_19, VAR_22);
 FUNC_16(VAR_20, &VAR_19, VAR_5);
 FUNC_18(VAR_20);
 FUNC_16(VAR_20, &VAR_19, VAR_4);
 FUNC_2(VAR_12, ((void*)0), VAR_20);
 FUNC_14(VAR_20, &VAR_19, VAR_13);
 FUNC_16(VAR_20, &VAR_19, VAR_3);
 FUNC_18(VAR_20);
 VAR_20 = FUNC_1(&VAR_19, ((void*)0), VAR_16, ((void*)0), ((void*)0), ((void*)0));
nfsmout:
 FUNC_12(&VAR_18);
 FUNC_12(&VAR_19);
 return (VAR_20);
}

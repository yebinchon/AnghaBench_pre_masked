
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_char ;
typedef int thread_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_mountp; int nm_vers; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_stateid {int dummy; } ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,int *,int *,int,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int,struct nfsm_chain*,int *,int*) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,struct nfsm_chain*,int ) ;
 int FUNC_4 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_5 (int,struct nfsm_chain*,int ,int *,int) ;
 int FUNC_6 (int,struct nfsm_chain*,struct nfs_stateid*) ;
 int FUNC_7 (int,struct nfsm_chain*,int) ;
 int FUNC_8 (int,struct nfsm_chain*) ;
 int FUNC_9 (struct nfsm_chain*) ;
 int FUNC_10 (int,struct nfsm_chain*,int) ;
 int FUNC_11 (struct nfsm_chain*) ;
 int FUNC_12 (int,struct nfsm_chain*,int ) ;
 int FUNC_13 (int,struct nfsm_chain*) ;
 int FUNC_14 (int) ;

int
FUNC_15(struct nfsmount *VAR_5, u_char *VAR_6, int VAR_7, struct nfs_stateid *VAR_8, int VAR_9, thread_t VAR_10, kauth_cred_t VAR_11)
{
 int VAR_12 = 0, VAR_13, VAR_14;
 uint64_t VAR_15;
 struct nfsm_chain VAR_16, VAR_17;
 struct nfsreq_secinfo_args VAR_18;

 FUNC_0(&VAR_18, ((void*)0), VAR_6, VAR_7, ((void*)0), 0);
 FUNC_11(&VAR_16);
 FUNC_11(&VAR_17);


 VAR_14 = 2;
 FUNC_7(VAR_12, &VAR_16, 16 * VAR_2);
 FUNC_4(VAR_12, &VAR_16, "delegreturn", VAR_5->nm_minor_vers, VAR_14);
 VAR_14--;
 FUNC_3(VAR_12, &VAR_16, VAR_4);
 FUNC_5(VAR_12, &VAR_16, VAR_5->nm_vers, VAR_6, VAR_7);
 VAR_14--;
 FUNC_3(VAR_12, &VAR_16, VAR_3);
 FUNC_6(VAR_12, &VAR_16, VAR_8);
 FUNC_8(VAR_12, &VAR_16);
 FUNC_2(VAR_12, (VAR_14 == 0), VAR_0);
 FUNC_14(VAR_12);
 VAR_12 = FUNC_1(((void*)0), VAR_5->nm_mountp, &VAR_16, VAR_1, VAR_10, VAR_11, &VAR_18, VAR_9, &VAR_17, &VAR_15, &VAR_13);
 FUNC_13(VAR_12, &VAR_17);
 FUNC_10(VAR_12, &VAR_17, VAR_14);
 FUNC_12(VAR_12, &VAR_17, VAR_4);
 FUNC_12(VAR_12, &VAR_17, VAR_3);
nfsmout:
 FUNC_9(&VAR_16);
 FUNC_9(&VAR_17);
 return (VAR_12);
}

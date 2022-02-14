
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int thread_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsreq_cbinfo {int dummy; } ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef int off_t ;
typedef TYPE_2__* nfsnode_t ;
typedef int nfs_stateid ;
typedef int kauth_cred_t ;
struct TYPE_9__ {int nva_flags; } ;
struct TYPE_10__ {int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;
 int FUNC_4 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int ,struct nfsreq_cbinfo*,struct nfsreq**) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int,struct nfsm_chain*,size_t) ;
 int FUNC_7 (int,struct nfsm_chain*,int ) ;
 int FUNC_8 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_9 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_10 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_11 (int,struct nfsm_chain*,int *) ;
 int FUNC_12 (int,struct nfsm_chain*,int) ;
 int FUNC_13 (int,struct nfsm_chain*) ;
 int FUNC_14 (struct nfsm_chain*) ;
 int FUNC_15 (struct nfsm_chain*) ;
 int FUNC_16 (int) ;

int
FUNC_17(
 nfsnode_t VAR_10,
 off_t VAR_11,
 size_t VAR_12,
 thread_t VAR_13,
 kauth_cred_t VAR_14,
 struct nfsreq_cbinfo *VAR_15,
 struct nfsreq **VAR_16)
{
 struct nfsmount *VAR_17;
 int VAR_18 = 0, VAR_19, VAR_20;
 nfs_stateid VAR_21;
 struct nfsm_chain VAR_22;
 struct nfsreq_secinfo_args VAR_23;

 VAR_17 = FUNC_1(VAR_10);
 if (FUNC_3(VAR_17))
  return (VAR_1);
 VAR_19 = VAR_17->nm_vers;
 if (VAR_10->n_vattr.nva_flags & VAR_5)
  return (VAR_0);

 FUNC_0(&VAR_23, VAR_10, ((void*)0), 0, ((void*)0), 0);
 FUNC_15(&VAR_22);


 VAR_20 = 3;
 FUNC_12(VAR_18, &VAR_22, 22 * VAR_4);
 FUNC_9(VAR_18, &VAR_22, "read", VAR_17->nm_minor_vers, VAR_20);
 VAR_20--;
 FUNC_6(VAR_18, &VAR_22, VAR_7);
 FUNC_10(VAR_18, &VAR_22, VAR_19, VAR_10->n_fhp, VAR_10->n_fhsize);
 VAR_20--;
 FUNC_6(VAR_18, &VAR_22, VAR_8);
 FUNC_2(VAR_10, VAR_13, VAR_14, &VAR_21);
 FUNC_11(VAR_18, &VAR_22, &VAR_21);
 FUNC_7(VAR_18, &VAR_22, VAR_11);
 FUNC_6(VAR_18, &VAR_22, VAR_12);
 VAR_20--;
 FUNC_6(VAR_18, &VAR_22, VAR_6);
 FUNC_8(VAR_18, &VAR_22, VAR_9, VAR_17, VAR_10);
 FUNC_13(VAR_18, &VAR_22);
 FUNC_5(VAR_18, (VAR_20 == 0), VAR_2);
 FUNC_16(VAR_18);
 VAR_18 = FUNC_4(VAR_10, ((void*)0), &VAR_22, VAR_3, VAR_13, VAR_14, &VAR_23, 0, VAR_15, VAR_16);
nfsmout:
 FUNC_14(&VAR_22);
 return (VAR_18);
}

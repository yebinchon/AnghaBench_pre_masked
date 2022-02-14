
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uio_t ;
typedef int thread_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsreq_cbinfo {int dummy; } ;
struct nfsreq {int dummy; } ;
struct nfsmount {int nm_vers; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int nfs_stateid ;
typedef int mount_t ;
typedef int kauth_cred_t ;
struct TYPE_10__ {int nva_flags; } ;
struct TYPE_11__ {int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 struct nfsmount* FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,int ,struct nfsreq_secinfo_args*,int ,struct nfsreq_cbinfo*,struct nfsreq**) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int,struct nfsm_chain*,size_t) ;
 int FUNC_8 (int,struct nfsm_chain*,int ) ;
 int FUNC_9 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_10 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_11 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_12 (int,struct nfsm_chain*,int *) ;
 int FUNC_13 (struct nfsm_chain*,int ,size_t) ;
 int FUNC_14 (int,struct nfsm_chain*,int) ;
 int FUNC_15 (int,struct nfsm_chain*) ;
 int FUNC_16 (struct nfsm_chain*) ;
 int FUNC_17 (struct nfsm_chain*) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

int
FUNC_21(
 nfsnode_t VAR_13,
 uio_t VAR_14,
 size_t VAR_15,
 thread_t VAR_16,
 kauth_cred_t VAR_17,
 int VAR_18,
 struct nfsreq_cbinfo *VAR_19,
 struct nfsreq **VAR_20)
{
 struct nfsmount *VAR_21;
 mount_t VAR_22;
 int VAR_23 = 0, VAR_24, VAR_25;
 nfs_stateid VAR_26;
 struct nfsm_chain VAR_27;
 struct nfsreq_secinfo_args VAR_28;

 VAR_21 = FUNC_2(VAR_13);
 if (FUNC_4(VAR_21))
  return (VAR_1);
 VAR_24 = VAR_21->nm_vers;
 if (VAR_13->n_vattr.nva_flags & VAR_6)
  return (VAR_0);


 if ((VAR_18 != VAR_10) && VAR_11 &&
     ((VAR_22 = FUNC_1(VAR_13))) && (FUNC_20(VAR_22) & VAR_3))
  VAR_18 = VAR_10;

 FUNC_0(&VAR_28, VAR_13, ((void*)0), 0, ((void*)0), 0);
 FUNC_17(&VAR_27);


 VAR_25 = 3;
 FUNC_14(VAR_23, &VAR_27, 25 * VAR_5 + VAR_15);
 FUNC_10(VAR_23, &VAR_27, "write", VAR_21->nm_minor_vers, VAR_25);
 VAR_25--;
 FUNC_7(VAR_23, &VAR_27, VAR_8);
 FUNC_11(VAR_23, &VAR_27, VAR_24, VAR_13->n_fhp, VAR_13->n_fhsize);
 VAR_25--;
 FUNC_7(VAR_23, &VAR_27, VAR_9);
 FUNC_3(VAR_13, VAR_16, VAR_17, &VAR_26);
 FUNC_12(VAR_23, &VAR_27, &VAR_26);
 FUNC_8(VAR_23, &VAR_27, FUNC_19(VAR_14));
 FUNC_7(VAR_23, &VAR_27, VAR_18);
 FUNC_7(VAR_23, &VAR_27, VAR_15);
 if (!VAR_23)
  VAR_23 = FUNC_13(&VAR_27, VAR_14, VAR_15);
 VAR_25--;
 FUNC_7(VAR_23, &VAR_27, VAR_7);
 FUNC_9(VAR_23, &VAR_27, VAR_12, VAR_21, VAR_13);
 FUNC_15(VAR_23, &VAR_27);
 FUNC_6(VAR_23, (VAR_25 == 0), VAR_2);
 FUNC_18(VAR_23);

 VAR_23 = FUNC_5(VAR_13, ((void*)0), &VAR_27, VAR_4, VAR_16, VAR_17, &VAR_28, 0, VAR_19, VAR_20);
nfsmout:
 FUNC_16(&VAR_27);
 return (VAR_23);
}

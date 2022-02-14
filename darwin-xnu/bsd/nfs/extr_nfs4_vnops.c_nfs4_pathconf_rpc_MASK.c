
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint32_t ;
typedef int u_int64_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_vers; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
struct nfs_vattr {int dummy; } ;
struct nfs_fsattr {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_11__ {int nva_flags; } ;
struct TYPE_12__ {int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct nfs_vattr*) ;
 int FUNC_5 (struct nfs_vattr*) ;
 int FUNC_6 (struct nfsm_chain*,struct nfs_fsattr*,struct nfs_vattr*,int *,int *,int *) ;
 int VAR_15 ;
 int FUNC_7 (TYPE_2__*,struct nfs_vattr*,int *,int ) ;
 scalar_t__ FUNC_8 (struct nfsmount*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,struct nfsreq_secinfo_args*,struct nfsm_chain*,int *,int*) ;
 int FUNC_12 (int,int,int ) ;
 int FUNC_13 (int,struct nfsm_chain*,int ) ;
 int FUNC_14 (int,struct nfsm_chain*,int *,struct nfsmount*,TYPE_2__*) ;
 int FUNC_15 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_16 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_17 (int,struct nfsm_chain*,int) ;
 int FUNC_18 (int,struct nfsm_chain*) ;
 int FUNC_19 (struct nfsm_chain*) ;
 int FUNC_20 (int,struct nfsm_chain*,int) ;
 int FUNC_21 (struct nfsm_chain*) ;
 int FUNC_22 (int,struct nfsm_chain*,int ) ;
 int FUNC_23 (int,struct nfsm_chain*) ;
 int FUNC_24 (int) ;

int
FUNC_25(
 nfsnode_t VAR_16,
 struct nfs_fsattr *VAR_17,
 vfs_context_t VAR_18)
{
 u_int64_t VAR_19;
 int VAR_20 = 0, VAR_21, VAR_22, VAR_23, VAR_24;
 struct nfsm_chain VAR_25, VAR_26;
 struct nfsmount *VAR_27 = FUNC_1(VAR_16);
 uint32_t VAR_28[VAR_5];
 struct nfs_vattr VAR_29;
 struct nfsreq_secinfo_args VAR_30;

 if (FUNC_8(VAR_27))
  return (VAR_1);
 VAR_23 = VAR_27->nm_vers;
 if (VAR_16->n_vattr.nva_flags & VAR_12)
  return (VAR_0);

 FUNC_0(&VAR_30, VAR_16, ((void*)0), 0, ((void*)0), 0);
 FUNC_5(&VAR_29);
 FUNC_21(&VAR_25);
 FUNC_21(&VAR_26);



 VAR_24 = 2;
 FUNC_17(VAR_20, &VAR_25, 16 * VAR_4);
 FUNC_15(VAR_20, &VAR_25, "pathconf", VAR_27->nm_minor_vers, VAR_24);
 VAR_24--;
 FUNC_13(VAR_20, &VAR_25, VAR_14);
 FUNC_16(VAR_20, &VAR_25, VAR_23, VAR_16->n_fhp, VAR_16->n_fhsize);
 VAR_24--;
 FUNC_13(VAR_20, &VAR_25, VAR_13);
 FUNC_3(VAR_15, VAR_28);
 FUNC_2(VAR_28, VAR_9);
 FUNC_2(VAR_28, VAR_10);
 FUNC_2(VAR_28, VAR_11);
 FUNC_2(VAR_28, VAR_8);
 FUNC_2(VAR_28, VAR_6);
 FUNC_2(VAR_28, VAR_7);
 FUNC_14(VAR_20, &VAR_25, VAR_28, VAR_27, VAR_16);
 FUNC_18(VAR_20, &VAR_25);
 FUNC_12(VAR_20, (VAR_24 == 0), VAR_2);
 FUNC_24(VAR_20);
 VAR_20 = FUNC_11(VAR_16, ((void*)0), &VAR_25, VAR_3, VAR_18, &VAR_30, &VAR_26, &VAR_19, &VAR_22);

 FUNC_23(VAR_20, &VAR_26);
 FUNC_20(VAR_20, &VAR_26, VAR_24);
 FUNC_22(VAR_20, &VAR_26, VAR_14);
 FUNC_22(VAR_20, &VAR_26, VAR_13);
 FUNC_24(VAR_20);
 VAR_20 = FUNC_6(&VAR_26, VAR_17, &VAR_29, ((void*)0), ((void*)0), ((void*)0));
 FUNC_24(VAR_20);
 if ((VAR_21 = FUNC_9(VAR_16)))
  VAR_20 = VAR_21;
 if (!VAR_20)
  FUNC_7(VAR_16, &VAR_29, &VAR_19, 0);
 if (!VAR_21)
  FUNC_10(VAR_16);
nfsmout:
 FUNC_4(&VAR_29);
 FUNC_19(&VAR_25);
 FUNC_19(&VAR_26);
 return (VAR_20);
}

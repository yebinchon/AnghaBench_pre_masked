
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int u_int64_t ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_vers; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_16__ {int nva_flags; } ;
struct TYPE_17__ {int n_flag; int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_1 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 struct nfsmount* FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,struct nfsreq_secinfo_args*,struct nfsm_chain*,int *,int*) ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 (int,struct nfsm_chain*,int ) ;
 int FUNC_9 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_10 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_11 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_12 (int,struct nfsm_chain*,char*,int,struct nfsmount*) ;
 int FUNC_13 (int,struct nfsm_chain*,int) ;
 int FUNC_14 (int,struct nfsm_chain*) ;
 int FUNC_15 (int,struct nfsm_chain*,TYPE_2__*) ;
 int FUNC_16 (struct nfsm_chain*) ;
 int FUNC_17 (int,struct nfsm_chain*,int) ;
 int FUNC_18 (int,struct nfsm_chain*,TYPE_2__*,int,int *) ;
 int FUNC_19 (struct nfsm_chain*) ;
 int FUNC_20 (int,struct nfsm_chain*,int ) ;
 int FUNC_21 (int,struct nfsm_chain*) ;
 int FUNC_22 (int) ;

int
FUNC_23(
 nfsnode_t VAR_14,
 char *VAR_15,
 int VAR_16,
 nfsnode_t VAR_17,
 char *VAR_18,
 int VAR_19,
 vfs_context_t VAR_20)
{
 int VAR_21 = 0, VAR_22 = VAR_1, VAR_23, VAR_24, VAR_25;
 struct nfsmount *VAR_26;
 u_int64_t VAR_27, VAR_28;
 struct nfsm_chain VAR_29, VAR_30;
 struct nfsreq_secinfo_args VAR_31;

 VAR_26 = FUNC_2(VAR_14);
 if (FUNC_3(VAR_26))
  return (VAR_2);
 VAR_24 = VAR_26->nm_vers;
 if (VAR_14->n_vattr.nva_flags & VAR_6)
  return (VAR_0);
 if (VAR_17->n_vattr.nva_flags & VAR_6)
  return (VAR_0);

 FUNC_1(&VAR_31, VAR_14, ((void*)0), 0, ((void*)0), 0);
 FUNC_19(&VAR_29);
 FUNC_19(&VAR_30);


 VAR_25 = 7;
 FUNC_13(VAR_21, &VAR_29, 30 * VAR_5 + VAR_16 + VAR_19);
 FUNC_10(VAR_21, &VAR_29, "rename", VAR_26->nm_minor_vers, VAR_25);
 VAR_25--;
 FUNC_8(VAR_21, &VAR_29, VAR_8);
 FUNC_11(VAR_21, &VAR_29, VAR_24, VAR_14->n_fhp, VAR_14->n_fhsize);
 VAR_25--;
 FUNC_8(VAR_21, &VAR_29, VAR_11);
 VAR_25--;
 FUNC_8(VAR_21, &VAR_29, VAR_8);
 FUNC_11(VAR_21, &VAR_29, VAR_24, VAR_17->n_fhp, VAR_17->n_fhsize);
 VAR_25--;
 FUNC_8(VAR_21, &VAR_29, VAR_9);
 FUNC_12(VAR_21, &VAR_29, VAR_15, VAR_16, VAR_26);
 FUNC_12(VAR_21, &VAR_29, VAR_18, VAR_19, VAR_26);
 VAR_25--;
 FUNC_8(VAR_21, &VAR_29, VAR_7);
 FUNC_9(VAR_21, &VAR_29, VAR_13, VAR_26, VAR_17);
 VAR_25--;
 FUNC_8(VAR_21, &VAR_29, VAR_10);
 VAR_25--;
 FUNC_8(VAR_21, &VAR_29, VAR_7);
 FUNC_9(VAR_21, &VAR_29, VAR_13, VAR_26, VAR_14);
 FUNC_14(VAR_21, &VAR_29);
 FUNC_7(VAR_21, (VAR_25 == 0), VAR_3);
 FUNC_22(VAR_21);

 VAR_21 = FUNC_6(VAR_14, ((void*)0), &VAR_29, VAR_4, VAR_20, &VAR_31, &VAR_30, &VAR_27, &VAR_23);

 if ((VAR_22 = FUNC_4(VAR_14, VAR_17)))
  VAR_21 = VAR_22;
 FUNC_21(VAR_21, &VAR_30);
 FUNC_17(VAR_21, &VAR_30, VAR_25);
 FUNC_20(VAR_21, &VAR_30, VAR_8);
 FUNC_20(VAR_21, &VAR_30, VAR_11);
 FUNC_20(VAR_21, &VAR_30, VAR_8);
 FUNC_20(VAR_21, &VAR_30, VAR_9);
 FUNC_15(VAR_21, &VAR_30, VAR_14);
 FUNC_15(VAR_21, &VAR_30, VAR_17);

 FUNC_20(VAR_21, &VAR_30, VAR_7);
 VAR_28 = VAR_27;
 FUNC_18(VAR_21, &VAR_30, VAR_17, VAR_24, &VAR_27);
 if (VAR_21 && !VAR_22)
  FUNC_0(VAR_17);
 FUNC_20(VAR_21, &VAR_30, VAR_10);
 FUNC_20(VAR_21, &VAR_30, VAR_7);
 VAR_27 = VAR_28;
 FUNC_18(VAR_21, &VAR_30, VAR_14, VAR_24, &VAR_27);
 if (VAR_21 && !VAR_22)
  FUNC_0(VAR_14);
nfsmout:
 FUNC_16(&VAR_29);
 FUNC_16(&VAR_30);
 if (!VAR_22) {
  VAR_14->n_flag |= VAR_12;
  VAR_17->n_flag |= VAR_12;
  FUNC_5(VAR_14, VAR_17);
 }
 return (VAR_21);
}

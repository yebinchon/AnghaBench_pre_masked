
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int u_int64_t ;
struct vnop_link_args {struct componentname* a_cnp; int a_tdvp; int a_vp; int a_context; } ;
struct nfsreq_secinfo_args {int dummy; } ;
struct nfsmount {int nm_vers; int nm_minor_vers; } ;
struct nfsm_chain {int dummy; } ;
struct componentname {scalar_t__ cn_namelen; int cn_nameptr; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_19__ {int nva_flags; } ;
struct TYPE_20__ {int n_flag; int n_fhsize; int n_fhp; TYPE_1__ n_vattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_1 (struct nfsreq_secinfo_args*,TYPE_2__*,int *,int ,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* FUNC_2 (int ) ;
 struct nfsmount* FUNC_3 (int ) ;
 int VAR_17 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int VAR_18 ;
 scalar_t__ FUNC_6 (struct nfsmount*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,struct nfsreq_secinfo_args*,struct nfsm_chain*,int *,int*) ;
 int FUNC_12 (int,int,int ) ;
 int FUNC_13 (int,struct nfsm_chain*,int ) ;
 int FUNC_14 (int,struct nfsm_chain*,int ,struct nfsmount*,TYPE_2__*) ;
 int FUNC_15 (int,struct nfsm_chain*,char*,int ,int) ;
 int FUNC_16 (int,struct nfsm_chain*,int,int ,int ) ;
 int FUNC_17 (int,struct nfsm_chain*,int ,scalar_t__,struct nfsmount*) ;
 int FUNC_18 (int,struct nfsm_chain*,scalar_t__) ;
 int FUNC_19 (int,struct nfsm_chain*) ;
 int FUNC_20 (int,struct nfsm_chain*,TYPE_2__*) ;
 int FUNC_21 (struct nfsm_chain*) ;
 int FUNC_22 (int,struct nfsm_chain*,int) ;
 int FUNC_23 (int,struct nfsm_chain*,TYPE_2__*,int,int *) ;
 int FUNC_24 (struct nfsm_chain*) ;
 int FUNC_25 (int,struct nfsm_chain*,int ) ;
 int FUNC_26 (int,struct nfsm_chain*) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int ) ;

int
FUNC_30(
 struct vnop_link_args *VAR_19)






{
 vfs_context_t VAR_20 = VAR_19->a_context;
 vnode_t VAR_21 = VAR_19->a_vp;
 vnode_t VAR_22 = VAR_19->a_tdvp;
 struct componentname *VAR_23 = VAR_19->a_cnp;
 int VAR_24 = 0, VAR_25 = VAR_2, VAR_26;
 struct nfsmount *VAR_27;
 nfsnode_t VAR_28 = FUNC_2(VAR_21);
 nfsnode_t VAR_29 = FUNC_2(VAR_22);
 int VAR_30, VAR_31;
 u_int64_t VAR_32, VAR_33;
 struct nfsm_chain VAR_34, VAR_35;
 struct nfsreq_secinfo_args VAR_36;

 if (FUNC_29(VAR_21) != FUNC_29(VAR_22))
  return (VAR_5);

 VAR_27 = FUNC_3(VAR_21);
 if (FUNC_6(VAR_27))
  return (VAR_3);
 VAR_30 = VAR_27->nm_vers;
 if (VAR_28->n_vattr.nva_flags & VAR_9)
  return (VAR_1);
 if (VAR_29->n_vattr.nva_flags & VAR_9)
  return (VAR_1);






 FUNC_5(VAR_28, VAR_6, FUNC_28(VAR_20), VAR_17);

 if ((VAR_24 = FUNC_9(VAR_29, VAR_28, FUNC_28(VAR_20))))
  return (VAR_24);

 FUNC_1(&VAR_36, VAR_28, ((void*)0), 0, ((void*)0), 0);
 FUNC_24(&VAR_34);
 FUNC_24(&VAR_35);


 VAR_31 = 7;
 FUNC_18(VAR_24, &VAR_34, 29 * VAR_8 + VAR_23->cn_namelen);
 FUNC_15(VAR_24, &VAR_34, "link", VAR_27->nm_minor_vers, VAR_31);
 VAR_31--;
 FUNC_13(VAR_24, &VAR_34, VAR_12);
 FUNC_16(VAR_24, &VAR_34, VAR_30, VAR_28->n_fhp, VAR_28->n_fhsize);
 VAR_31--;
 FUNC_13(VAR_24, &VAR_34, VAR_14);
 VAR_31--;
 FUNC_13(VAR_24, &VAR_34, VAR_12);
 FUNC_16(VAR_24, &VAR_34, VAR_30, VAR_29->n_fhp, VAR_29->n_fhsize);
 VAR_31--;
 FUNC_13(VAR_24, &VAR_34, VAR_11);
 FUNC_17(VAR_24, &VAR_34, VAR_23->cn_nameptr, VAR_23->cn_namelen, VAR_27);
 VAR_31--;
 FUNC_13(VAR_24, &VAR_34, VAR_10);
 FUNC_14(VAR_24, &VAR_34, VAR_18, VAR_27, VAR_29);
 VAR_31--;
 FUNC_13(VAR_24, &VAR_34, VAR_13);
 VAR_31--;
 FUNC_13(VAR_24, &VAR_34, VAR_10);
 FUNC_14(VAR_24, &VAR_34, VAR_18, VAR_27, VAR_28);
 FUNC_19(VAR_24, &VAR_34);
 FUNC_12(VAR_24, (VAR_31 == 0), VAR_4);
 FUNC_27(VAR_24);
 VAR_24 = FUNC_11(VAR_29, ((void*)0), &VAR_34, VAR_7, VAR_20, &VAR_36, &VAR_35, &VAR_32, &VAR_26);

 if ((VAR_25 = FUNC_8(VAR_29, VAR_28))) {
  VAR_24 = VAR_25;
  goto nfsmout;
 }
 FUNC_26(VAR_24, &VAR_35);
 FUNC_22(VAR_24, &VAR_35, VAR_31);
 FUNC_25(VAR_24, &VAR_35, VAR_12);
 FUNC_25(VAR_24, &VAR_35, VAR_14);
 FUNC_25(VAR_24, &VAR_35, VAR_12);
 FUNC_25(VAR_24, &VAR_35, VAR_11);
 FUNC_20(VAR_24, &VAR_35, VAR_29);

 FUNC_25(VAR_24, &VAR_35, VAR_10);
 VAR_33 = VAR_32;
 FUNC_23(VAR_24, &VAR_35, VAR_29, VAR_30, &VAR_32);
 if (VAR_24)
  FUNC_0(VAR_29);

 FUNC_25(VAR_24, &VAR_35, VAR_13);
 FUNC_25(VAR_24, &VAR_35, VAR_10);
 VAR_32 = VAR_33;
 FUNC_23(VAR_24, &VAR_35, VAR_28, VAR_30, &VAR_32);
 if (VAR_24)
  FUNC_0(VAR_28);
nfsmout:
 FUNC_21(&VAR_34);
 FUNC_21(&VAR_35);
 if (!VAR_25)
  VAR_29->n_flag |= VAR_15;

 if (VAR_24 == VAR_0)
  VAR_24 = 0;
 if (!VAR_24 && (VAR_29->n_flag & VAR_16)) {
  VAR_29->n_flag &= ~VAR_16;
  FUNC_4(VAR_22);
 }
 if (!VAR_25)
  FUNC_10(VAR_29, VAR_28);
 FUNC_7(VAR_29, VAR_28);
 return (VAR_24);
}

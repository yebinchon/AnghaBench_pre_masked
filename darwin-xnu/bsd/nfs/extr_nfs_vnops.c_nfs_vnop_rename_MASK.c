
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef int * vnode_t ;
typedef int vfs_context_t ;
struct vnop_rename_args {struct componentname* a_fcnp; struct componentname* a_tcnp; int * a_tvp; int * a_tdvp; int * a_fvp; int * a_fdvp; int a_context; } ;
struct nfsmount {int nm_vers; TYPE_1__* nm_funcs; } ;
struct nfs_vattr {int nva_nlink; } ;
struct componentname {int cn_namelen; int cn_nameptr; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int * mount_t ;
struct TYPE_29__ {int n_hflag; int n_openflags; int n_flag; int * n_parent; int n_sillyrename; } ;
struct TYPE_28__ {int (* nf_rename_rpc ) (TYPE_2__*,int ,int ,TYPE_2__*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 struct nfsmount* FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,struct componentname*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ,char*,int *) ;
 int VAR_13 ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int *,int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,struct nfs_vattr*,int ) ;
 scalar_t__ FUNC_12 (struct nfsmount*) ;
 int FUNC_13 (TYPE_2__*,TYPE_2__*,struct componentname*,int ) ;
 int FUNC_14 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int VAR_14 ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,TYPE_2__*,struct componentname*,int ) ;
 int FUNC_19 (TYPE_2__*,int ,int ,TYPE_2__*,int ,int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int ) ;
 int * FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 scalar_t__ FUNC_29 (int *) ;
 int FUNC_30 (TYPE_2__*) ;

int
FUNC_31(
 struct vnop_rename_args *VAR_15)
{
 vfs_context_t VAR_16 = VAR_15->a_context;
 vnode_t VAR_17 = VAR_15->a_fdvp;
 vnode_t VAR_18 = VAR_15->a_fvp;
 vnode_t VAR_19 = VAR_15->a_tdvp;
 vnode_t VAR_20 = VAR_15->a_tvp;
 nfsnode_t VAR_21, VAR_22, VAR_23, VAR_24;
 struct componentname *VAR_25 = VAR_15->a_tcnp;
 struct componentname *VAR_26 = VAR_15->a_fcnp;
 int VAR_27, VAR_28, VAR_29=0, VAR_30=0, VAR_31=0;
 mount_t VAR_32, VAR_33, VAR_34;
 struct nfs_vattr VAR_35;
 struct nfsmount *VAR_36;

 VAR_21 = FUNC_3(VAR_17);
 VAR_22 = FUNC_3(VAR_18);
 VAR_23 = FUNC_3(VAR_19);
 VAR_24 = VAR_20 ? FUNC_3(VAR_20) : ((void*)0);

 VAR_36 = FUNC_2(VAR_21);
 if (FUNC_12(VAR_36))
  return (VAR_1);
 VAR_28 = VAR_36->nm_vers;

 VAR_27 = FUNC_16(VAR_21, VAR_22, VAR_23, VAR_24, FUNC_20(VAR_16));
 if (VAR_27)
  return (VAR_27);

 if (VAR_20 && (VAR_20 != VAR_18)) {

  FUNC_6(VAR_14);
  while (VAR_24->n_hflag & VAR_6) {
   VAR_24->n_hflag |= VAR_7;
   FUNC_8(VAR_24, VAR_14, VAR_11, "nfs_rename", ((void*)0));
  }
  VAR_24->n_hflag |= VAR_6;
  FUNC_7(VAR_14);
  VAR_31 = 1;
 }


 VAR_32 = FUNC_24(VAR_18);
 VAR_34 = VAR_20 ? FUNC_24(VAR_20) : ((void*)0);
 VAR_33 = FUNC_24(VAR_19);
 if ((VAR_32 != VAR_33) || (VAR_20 && (VAR_32 != VAR_34))) {
  VAR_27 = VAR_2;
  goto out;
 }
 if (VAR_20 && (VAR_20 != VAR_18))
  VAR_29 = FUNC_23(VAR_20, 0);
 if (VAR_29 && !VAR_24->n_sillyrename && (FUNC_29(VAR_20) != VAR_12)) {
  VAR_27 = FUNC_18(VAR_23, VAR_24, VAR_25, VAR_16);
  if (VAR_27) {

   goto out;
  } else {

   VAR_20 = ((void*)0);
  }
 } else if (VAR_20 && (VAR_36->nm_vers >= VAR_3) && (VAR_24->n_openflags & VAR_10)) {
  FUNC_9(VAR_24, 0, FUNC_20(VAR_16), FUNC_21(VAR_16));
 }

 VAR_27 = VAR_36->nm_funcs->nf_rename_rpc(VAR_21, VAR_26->cn_nameptr, VAR_26->cn_namelen,
   VAR_23, VAR_25->cn_nameptr, VAR_25->cn_namelen, VAR_16);




 if (VAR_27 == VAR_0)
  VAR_27 = 0;

 if (VAR_20 && (VAR_20 != VAR_18) && !VAR_24->n_sillyrename) {
  FUNC_15(VAR_24);
  VAR_30 = (!VAR_27 && !FUNC_23(VAR_20, 0) &&
      (FUNC_11(VAR_24, &VAR_35, 0) || (VAR_35.nva_nlink == 1)));
  FUNC_17(VAR_24);
  FUNC_6(VAR_14);
  if (VAR_30 && (VAR_24->n_hflag & VAR_5)) {





   FUNC_1(VAR_24, VAR_13);
   VAR_24->n_hflag &= ~VAR_5;
   FUNC_0(266, 0, VAR_24, VAR_24->n_flag, 0xb1eb1e);
  }
  FUNC_7(VAR_14);
 }


 FUNC_13(VAR_21, VAR_22, VAR_26, VAR_16);
 if (VAR_20) {
  FUNC_13(VAR_23, VAR_24, VAR_25, VAR_16);
  if (VAR_30) {


   FUNC_15(VAR_24);
   VAR_24->n_flag &= (VAR_8);
   FUNC_17(VAR_24);
   FUNC_26(VAR_20);
  }
 }
 if (!VAR_27) {
  FUNC_15(VAR_23);
  if (VAR_23->n_flag & VAR_9) {
   VAR_23->n_flag &= ~VAR_9;
   FUNC_5(VAR_19);
  }
  FUNC_17(VAR_23);
  FUNC_15(VAR_22);
  FUNC_4(VAR_19, VAR_18, VAR_25);
  if (VAR_19 != VAR_17) {
   if (VAR_22->n_parent && !FUNC_22(VAR_22->n_parent)) {

    FUNC_28(VAR_22->n_parent);
    FUNC_25(VAR_22->n_parent);
   }
   VAR_22->n_parent = VAR_19;
   if (VAR_19 && !FUNC_22(VAR_19)) {

    FUNC_27(VAR_19);
    FUNC_25(VAR_19);
   } else {
    VAR_22->n_parent = ((void*)0);
   }
  }
  FUNC_17(VAR_22);
 }
out:

 FUNC_10(VAR_21, ((void*)0), VAR_16, VAR_4);
 FUNC_10(VAR_23, ((void*)0), VAR_16, VAR_4);
 if (VAR_31) {

  FUNC_6(VAR_14);
  VAR_24->n_hflag &= ~VAR_6;
  if (VAR_24->n_hflag & VAR_7) {
   VAR_24->n_hflag &= ~VAR_7;
   FUNC_30(VAR_24);
  }
  FUNC_7(VAR_14);
 }
 FUNC_14(VAR_21, VAR_22, VAR_23, VAR_24);
 return (VAR_27);
}

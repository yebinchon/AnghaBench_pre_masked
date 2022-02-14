
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vnode_t ;
typedef int vfs_context_t ;
struct vnop_create_args {int ** a_vpp; int * a_dvp; struct vnode_attr* a_vap; struct componentname* a_cnp; int a_context; } ;
struct vnode_attr {int va_vaflags; int va_mode; } ;
struct nfsmount {int dummy; } ;
struct nfs_open_owner {int dummy; } ;
struct nfs_open_file {int nof_flags; int nof_creator; int nof_stateid; } ;
struct componentname {int cn_namelen; int cn_nameptr; } ;
typedef scalar_t__ nfsnode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct vnode_attr*) ;
 scalar_t__ FUNC_2 (struct vnode_attr*,int ) ;
 int FUNC_3 (struct vnode_attr*,int ,int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_4 (int *) ;
 struct nfsmount* FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nfs_open_file*,int ,struct componentname*,struct vnode_attr*,int *,int **,int ,int,int) ;
 int FUNC_8 (struct nfs_open_file*,int *) ;
 int FUNC_9 (scalar_t__,struct vnode_attr*,int ) ;
 int FUNC_10 (scalar_t__,struct vnode_attr*,int ) ;
 int FUNC_11 (scalar_t__,int ,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (struct nfsmount*) ;
 scalar_t__ FUNC_13 (struct nfsmount*,int) ;
 int FUNC_14 (struct nfsmount*,int *) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct nfs_open_file*,int,int,int ) ;
 int FUNC_17 (struct nfs_open_file*) ;
 int FUNC_18 (struct nfs_open_file*) ;
 int FUNC_19 (int *,struct nfs_open_owner*,struct nfs_open_file**,int ,int ,int) ;
 int FUNC_20 (scalar_t__,struct nfs_open_owner*,struct nfs_open_file**,int ,int ,int ) ;
 int FUNC_21 (struct nfs_open_file*,int *) ;
 struct nfs_open_owner* FUNC_22 (struct nfsmount*,int ,int) ;
 int FUNC_23 (struct nfs_open_owner*) ;
 int FUNC_24 (char*,...) ;
 int VAR_15 ;
 int * FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int *) ;

int
FUNC_29(
 struct vnop_create_args *VAR_16)







{
 vfs_context_t VAR_17 = VAR_16->a_context;
 struct componentname *VAR_18 = VAR_16->a_cnp;
 struct vnode_attr *VAR_19 = VAR_16->a_vap;
 vnode_t VAR_20 = VAR_16->a_dvp;
 vnode_t *VAR_21 = VAR_16->a_vpp;
 struct nfsmount *VAR_22;
 nfsnode_t VAR_23;
 int VAR_24 = 0, VAR_25 = 0, VAR_26, VAR_27;
 struct nfs_open_owner *VAR_28 = ((void*)0);
 struct nfs_open_file *VAR_29 = ((void*)0), *VAR_30 = ((void*)0);

 VAR_22 = FUNC_5(VAR_20);
 if (FUNC_12(VAR_22))
  return (VAR_3);

 if (VAR_19)
  FUNC_10(FUNC_4(VAR_20), VAR_19, VAR_17);

 VAR_28 = FUNC_22(VAR_22, FUNC_26(VAR_17), 1);
 if (!VAR_28)
  return (VAR_2);

restart:
 VAR_24 = FUNC_14(VAR_22, FUNC_25(VAR_17));
 if (VAR_24) {
  FUNC_23(VAR_28);
  return (VAR_24);
 }


 VAR_24 = FUNC_19(((void*)0), VAR_28, &VAR_29, 0, 0, 1);
 if (!VAR_24 && (VAR_29->nof_flags & VAR_6)) {
  FUNC_24("nfs_vnop_create: LOST\n");
  VAR_24 = VAR_1;
 }
 if (!VAR_24 && (VAR_29->nof_flags & VAR_8)) {

  FUNC_13(VAR_22, 0);
  VAR_24 = FUNC_8(VAR_29, FUNC_25(VAR_17));
  FUNC_18(VAR_29);
  VAR_29 = ((void*)0);
  if (!VAR_24)
   goto restart;
 }
 if (!VAR_24)
  VAR_24 = FUNC_21(VAR_29, FUNC_25(VAR_17));
 if (VAR_24) {
  if (VAR_29)
   FUNC_18(VAR_29);
  VAR_29 = ((void*)0);
  goto out;
 }





 VAR_26 = VAR_10;
 VAR_27 = VAR_11;


 VAR_24 = FUNC_7(VAR_29, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_4, VAR_26, VAR_27);
 if ((VAR_24 == VAR_0) && VAR_19 && !(VAR_19->va_vaflags & VAR_13) &&
     FUNC_2(VAR_19, VAR_15) && !(VAR_19->va_mode & VAR_12)) {
  struct vnode_attr VAR_31;


  int VAR_32 = FUNC_11(FUNC_4(VAR_20), VAR_18->cn_nameptr, VAR_18->cn_namelen, VAR_17, &VAR_23);
  if (!VAR_32 && VAR_23) {
   FUNC_15(VAR_23);
   *VAR_21 = FUNC_0(VAR_23);
   if (FUNC_28(FUNC_0(VAR_23)) == VAR_14) {
    FUNC_1(&VAR_31);
    FUNC_3(&VAR_31, VAR_15, (VAR_19->va_mode | VAR_12));
    if (!FUNC_9(VAR_23, &VAR_31, VAR_17)) {
     VAR_32 = FUNC_7(VAR_29, VAR_17, VAR_18, ((void*)0), VAR_20, VAR_21, VAR_9, VAR_26, VAR_27);
     FUNC_1(&VAR_31);
     FUNC_3(&VAR_31, VAR_15, VAR_19->va_mode);
     FUNC_9(VAR_23, &VAR_31, VAR_17);
     if (!VAR_32)
      VAR_24 = 0;
    }
   }
   if (VAR_24) {
    FUNC_27(*VAR_21);
    *VAR_21 = ((void*)0);
   }
  }
 }
 if (!VAR_24 && !*VAR_21) {
  FUNC_24("nfs4_open_rpc returned without a node?\n");

  VAR_24 = VAR_1;
 }
 if (VAR_24) {

  FUNC_17(VAR_29);
  FUNC_18(VAR_29);
  VAR_29 = ((void*)0);
  goto out;
 }

 VAR_23 = FUNC_4(*VAR_21);
 FUNC_16(VAR_29, VAR_26, VAR_27, 0);
 VAR_30 = VAR_29;
 VAR_24 = FUNC_20(VAR_23, VAR_28, &VAR_30, 0, 0, 0);
 if (VAR_24) {

  FUNC_24("nfs_open_file_find_internal failed! %d\n", VAR_24);
  goto out;
 } else if (VAR_30 != VAR_29) {







  VAR_25 = FUNC_21(VAR_30, ((void*)0));
  FUNC_16(VAR_30, VAR_26, VAR_27, 0);
  VAR_30->nof_stateid = VAR_29->nof_stateid;
  if (VAR_29->nof_flags & VAR_7)
   VAR_30->nof_flags |= VAR_7;
  FUNC_17(VAR_29);
  FUNC_18(VAR_29);
 }
 VAR_29 = ((void*)0);

 VAR_30->nof_flags |= VAR_5;
 VAR_30->nof_creator = FUNC_6();
out:
 if (VAR_30 && !VAR_25)
  FUNC_17(VAR_30);
 if (FUNC_13(VAR_22, VAR_24)) {
  VAR_30 = VAR_29 = ((void*)0);
  VAR_25 = 0;
  goto restart;
 }
 if (VAR_28)
  FUNC_23(VAR_28);
 return (VAR_24);
}

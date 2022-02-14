
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int uint32_t ;
struct vnop_close_args {int a_fflag; int a_vp; int a_context; } ;
struct nfsmount {int nm_vers; int nm_writers; int nm_lock; } ;
struct nfs_open_owner {int noo_cred; } ;
struct nfs_open_file {int nof_deny; int nof_flags; } ;
typedef TYPE_1__* nfsnode_t ;
typedef int mount_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
struct TYPE_13__ {int n_flag; int n_error; scalar_t__ n_openrefcnt; int n_openlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_1__* FUNC_3 (int ) ;
 struct nfsmount* FUNC_4 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nfs_open_file*,int *) ;
 int FUNC_9 (TYPE_1__*,struct nfs_open_file*,int,int,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_12 (struct nfsmount*,int) ;
 int FUNC_13 (struct nfsmount*,int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (struct nfs_open_file*) ;
 int FUNC_18 (TYPE_1__*,struct nfs_open_owner*,struct nfs_open_file**,int ,int ,int ) ;
 int FUNC_19 (struct nfs_open_file*,int *) ;
 struct nfs_open_owner* FUNC_20 (struct nfsmount*,int ,int ) ;
 int FUNC_21 (struct nfs_open_owner*) ;
 int FUNC_22 (TYPE_1__*,int) ;
 int FUNC_23 (int ,int,int ,int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;

int
FUNC_29(
 struct vnop_close_args *VAR_23)





{
 vfs_context_t VAR_24 = VAR_23->a_context;
 vnode_t VAR_25 = VAR_23->a_vp;
 nfsnode_t VAR_26 = FUNC_3(VAR_25);
 struct nfsmount *VAR_27;
 int VAR_28 = 0, VAR_29, VAR_30;
 int VAR_31 = VAR_23->a_fflag;
 enum vtype VAR_32;
 int VAR_33, VAR_34;
 struct nfs_open_owner *VAR_35 = ((void*)0);
 struct nfs_open_file *VAR_36 = ((void*)0);

 VAR_27 = FUNC_4(VAR_25);
 if (!VAR_27)
  return (VAR_3);
 VAR_30 = VAR_27->nm_vers;
 VAR_32 = FUNC_28(VAR_25);


 if (FUNC_0(VAR_26->n_flag, VAR_18))
  FUNC_10(VAR_26, 0);
 FUNC_15(VAR_26);
 if (VAR_26->n_flag & VAR_17) {
  VAR_26->n_flag &= ~VAR_17;
  FUNC_16(VAR_26);
  FUNC_23(VAR_25, VAR_22|VAR_21, VAR_24, 1);
  FUNC_15(VAR_26);
 }
 if ((VAR_32 == VAR_20) && (VAR_26->n_flag & VAR_16) && (VAR_31 & VAR_6)) {

  FUNC_16(VAR_26);
  if (VAR_30 != VAR_15)
   VAR_28 = FUNC_11(VAR_26, VAR_7, FUNC_24(VAR_24), 0);
  else
   VAR_28 = FUNC_23(VAR_25, VAR_22, VAR_24, 1);
  FUNC_15(VAR_26);
  FUNC_1(VAR_26);
 }
 if (VAR_26->n_flag & VAR_19) {
  VAR_26->n_flag &= ~VAR_19;
  VAR_28 = VAR_26->n_error;
 }
 FUNC_16(VAR_26);

 if (VAR_32 != VAR_20) {

  FUNC_6(&VAR_26->n_openlock);
  if (VAR_26->n_openrefcnt == 0) {
   if (VAR_31 & (VAR_5|VAR_6)) {
    FUNC_2(VAR_26, "nfs_vnop_close: open reference underrun");
    VAR_28 = VAR_1;
   }
  } else if (VAR_31 & (VAR_5|VAR_6)) {
   VAR_26->n_openrefcnt--;
  } else {

   VAR_26->n_openrefcnt = 0;
  }
  FUNC_7(&VAR_26->n_openlock);
  return (VAR_28);
 }
 VAR_29 = VAR_28;


 VAR_33 = 0;
 if (VAR_31 & VAR_5)
  VAR_33 |= VAR_9;
 if (VAR_31 & VAR_6)
  VAR_33 |= VAR_10;
 VAR_34 = VAR_12;


 if (!VAR_33) {





  uint32_t VAR_37;
  mount_t VAR_38 = FUNC_27(VAR_25);
  int VAR_39 = (!VAR_38 || FUNC_26(VAR_38));

  VAR_37 = FUNC_14(VAR_26);
  FUNC_22(VAR_26, VAR_39);
  if (VAR_37) {
   FUNC_6(&VAR_27->nm_lock);
   if (VAR_37 > VAR_27->nm_writers) {
    FUNC_2(VAR_26, "nfs_vnop_close: number of write opens for mount underrun. Node has %d"
       " opens for write. Mount has total of %d opens for write\n",
       VAR_37, VAR_27->nm_writers);
    VAR_27->nm_writers = 0;
   } else {
    VAR_27->nm_writers -= VAR_37;
   }
   FUNC_7(&VAR_27->nm_lock);
  }

  return (VAR_28);
 } else if (VAR_31 & VAR_6) {
  FUNC_6(&VAR_27->nm_lock);
  if (VAR_27->nm_writers == 0) {
   FUNC_2(VAR_26, "nfs_vnop_close: removing open writer from mount, but mount has no files open for writing");
  } else {
   VAR_27->nm_writers--;
  }
  FUNC_7(&VAR_27->nm_lock);
 }


 VAR_35 = FUNC_20(VAR_27, FUNC_25(VAR_24), 0);
 if (!VAR_35) {

  return (VAR_2);
 }

restart:
 VAR_28 = FUNC_13(VAR_27, ((void*)0));
 if (VAR_28) {
  FUNC_21(VAR_35);
  return (VAR_28);
 }

 VAR_28 = FUNC_18(VAR_26, VAR_35, &VAR_36, 0, 0, 0);
 if (!VAR_28 && (VAR_36->nof_flags & VAR_8)) {
  FUNC_12(VAR_27, 0);
  VAR_28 = FUNC_8(VAR_36, ((void*)0));
  VAR_36 = ((void*)0);
  if (!VAR_28)
   goto restart;
 }
 if (VAR_28) {
  FUNC_2(VAR_26, "nfs_vnop_close: no open file for owner, error %d, %d", VAR_28, FUNC_5(VAR_35->noo_cred));
  VAR_28 = VAR_0;
  goto out;
 }
 VAR_28 = FUNC_19(VAR_36, ((void*)0));
 if (VAR_28) {
  VAR_36 = ((void*)0);
  goto out;
 }

 VAR_28 = FUNC_9(VAR_26, VAR_36, VAR_33, VAR_34, VAR_24);
 if (VAR_28)
  FUNC_2(VAR_26, "nfs_vnop_close: close error %d, %d", VAR_28, FUNC_5(VAR_35->noo_cred));

out:
 if (VAR_36)
  FUNC_17(VAR_36);
 if (FUNC_12(VAR_27, VAR_28)) {
  VAR_36 = ((void*)0);
  goto restart;
 }
 if (!VAR_28)
  VAR_28 = VAR_29;
 if (VAR_28)
  FUNC_2(VAR_26, "nfs_vnop_close: error %d, %d", VAR_28, FUNC_5(VAR_35->noo_cred));
 if (VAR_35)
  FUNC_21(VAR_35);
 return (VAR_28);
}

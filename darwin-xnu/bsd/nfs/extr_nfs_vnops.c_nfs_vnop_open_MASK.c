
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
struct vnop_open_args {int a_mode; int a_vp; int a_context; } ;
struct nfsmount {scalar_t__ nm_vers; scalar_t__ nm_curdeadtimeout; scalar_t__ nm_deadtimeout; int nm_lock; int nm_writers; scalar_t__ nm_deadto_start; int nm_state; } ;
struct nfs_open_owner {int noo_cred; } ;
struct nfs_open_file {int nof_flags; TYPE_1__* nof_owner; int * nof_creator; } ;
typedef TYPE_2__* nfsnode_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
struct TYPE_14__ {int n_flag; int n_lastrahead; int n_openlock; int n_openrefcnt; } ;
struct TYPE_13__ {int noo_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (TYPE_2__*,char*,int,...) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_2__* FUNC_2 (int ) ;
 struct nfsmount* FUNC_3 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int * FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,struct nfs_open_file*,int,int,int ) ;
 int FUNC_9 (struct nfs_open_file*,int ) ;
 int FUNC_10 (TYPE_2__*,struct nfs_open_file*,int,int,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (struct nfsmount*) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (struct nfsmount*,int) ;
 int FUNC_17 (struct nfsmount*,int ) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (struct nfs_open_file*,int,int,int ) ;
 int FUNC_21 (struct nfs_open_file*) ;
 int FUNC_22 (TYPE_2__*,struct nfs_open_owner*,struct nfs_open_file**,int,int,int) ;
 int FUNC_23 (struct nfs_open_file*,int ) ;
 struct nfs_open_owner* FUNC_24 (struct nfsmount*,int ,int) ;
 int FUNC_25 (struct nfs_open_owner*) ;
 int FUNC_26 (int ,int,int ,int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;

int
FUNC_30(
 struct vnop_open_args *VAR_30)





{
 vfs_context_t VAR_31 = VAR_30->a_context;
 vnode_t VAR_32 = VAR_30->a_vp;
 nfsnode_t VAR_33 = FUNC_2(VAR_32);
 struct nfsmount *VAR_34;
 int VAR_35, VAR_36, VAR_37, VAR_38 = 0;
 struct nfs_open_owner *VAR_39 = ((void*)0);
 struct nfs_open_file *VAR_40 = ((void*)0);
 enum vtype VAR_41;

 if (!(VAR_30->a_mode & (VAR_5|VAR_6)))
  return (VAR_1);

 VAR_34 = FUNC_3(VAR_32);
 if (FUNC_14(VAR_34))
  return (VAR_4);
 if (VAR_33->n_flag & VAR_21)
  return (VAR_2);

 VAR_41 = FUNC_29(VAR_32);
 if ((VAR_41 != VAR_27) && (VAR_41 != VAR_25) && (VAR_41 != VAR_26))
  return (VAR_0);


 if (FUNC_0(VAR_33->n_flag, VAR_22))
  FUNC_11(VAR_33, 0);
 if ((VAR_35 = FUNC_18(VAR_33)))
  return (VAR_35);
 if (VAR_33->n_flag & VAR_20) {
  VAR_33->n_flag &= ~VAR_20;
  if (VAR_41 == VAR_25)
   FUNC_13(VAR_33);
  FUNC_19(VAR_33);
  FUNC_26(VAR_32, VAR_29|VAR_28, VAR_31, 1);
  if ((VAR_35 = FUNC_18(VAR_33)))
   return (VAR_35);
 }
 if (VAR_41 == VAR_27)
  VAR_33->n_lastrahead = -1;
 if (VAR_33->n_flag & VAR_19) {
  if (VAR_41 == VAR_25)
   FUNC_13(VAR_33);
  FUNC_19(VAR_33);
  if ((VAR_35 = FUNC_26(VAR_32, VAR_29|VAR_28, VAR_31, 1)))
   return (VAR_35);
 } else {
  FUNC_19(VAR_33);
 }


 if ((VAR_35 = FUNC_12(VAR_33, ((void*)0), VAR_31, VAR_18)))
  return (VAR_35);

 if (VAR_41 != VAR_27) {

  FUNC_6(&VAR_33->n_openlock);
  VAR_33->n_openrefcnt++;
  FUNC_7(&VAR_33->n_openlock);
  return (0);
 }


 VAR_36 = 0;
 if (VAR_30->a_mode & VAR_5)
  VAR_36 |= VAR_12;
 if (VAR_30->a_mode & VAR_6)
  VAR_36 |= VAR_13;
 if (VAR_30->a_mode & VAR_23)
  VAR_37 = VAR_14;
 else if (VAR_30->a_mode & VAR_24)
  VAR_37 = VAR_16;
 else
  VAR_37 = VAR_15;

 VAR_37 = VAR_15;

 VAR_39 = FUNC_24(VAR_34, FUNC_28(VAR_31), 1);
 if (!VAR_39)
  return (VAR_3);

restart:
 VAR_35 = FUNC_17(VAR_34, FUNC_27(VAR_31));
 if (VAR_35) {
  FUNC_25(VAR_39);
  return (VAR_35);
 }
 if (VAR_33->n_flag & VAR_21) {
  VAR_35 = VAR_2;
  FUNC_16(VAR_34, 0);
  FUNC_25(VAR_39);
  return (VAR_35);
 }

 VAR_35 = FUNC_22(VAR_33, VAR_39, &VAR_40, VAR_36, VAR_37, 1);
 if (!VAR_35 && (VAR_40->nof_flags & VAR_9)) {
  FUNC_1(VAR_33, "nfs_vnop_open: LOST %d", FUNC_5(VAR_40->nof_owner->noo_cred));
  VAR_35 = VAR_2;
 }
 if (!VAR_35 && (VAR_40->nof_flags & VAR_10)) {
  FUNC_16(VAR_34, 0);
  VAR_35 = FUNC_9(VAR_40, FUNC_27(VAR_31));
  VAR_40 = ((void*)0);
  if (!VAR_35)
   goto restart;
 }
 if (!VAR_35)
  VAR_35 = FUNC_23(VAR_40, FUNC_27(VAR_31));
 if (VAR_35) {
  VAR_40 = ((void*)0);
  goto out;
 }

 if (VAR_34->nm_vers < VAR_17) {



  FUNC_20(VAR_40, VAR_36, VAR_37, 0);
  goto out;
 }





 if ((VAR_40->nof_flags & VAR_8) &&
     (VAR_40->nof_creator == FUNC_4()) &&
     (VAR_36 == VAR_11) &&
     (VAR_37 == VAR_15)) {
  VAR_40->nof_flags &= ~VAR_8;
  VAR_40->nof_creator = ((void*)0);
 } else {
  if (!VAR_38)
   VAR_35 = FUNC_8(VAR_33, VAR_40, VAR_36, VAR_37, VAR_31);
  if ((VAR_35 == VAR_0) && (VAR_40->nof_flags & VAR_8) &&
      (VAR_40->nof_creator == FUNC_4())) {
   if (VAR_37 != VAR_15)
    FUNC_1(VAR_33, "nfs_vnop_open: deny mode foregone on create, %d", FUNC_5(VAR_40->nof_owner->noo_cred));
   VAR_40->nof_creator = ((void*)0);
   VAR_35 = 0;
  }
  if (VAR_35)
   goto out;
  VAR_38 = 1;





  if ((VAR_40->nof_flags & VAR_8) &&
      (VAR_40->nof_creator == FUNC_4())) {
   VAR_35 = FUNC_10(VAR_33, VAR_40, VAR_11, VAR_15, VAR_31);
   if (VAR_35)
    FUNC_1(VAR_33, "nfs_vnop_open: create close error %d, %d", VAR_35, FUNC_5(VAR_40->nof_owner->noo_cred));
   if (!FUNC_15(VAR_35)) {
    VAR_35 = 0;
    VAR_40->nof_flags &= ~VAR_8;
   }
  }
 }

out:
 if (VAR_40)
  FUNC_21(VAR_40);
 if (FUNC_16(VAR_34, VAR_35)) {
  VAR_40 = ((void*)0);
  goto restart;
 }
 if (VAR_35)
  FUNC_1(VAR_33, "nfs_vnop_open: error %d, %d", VAR_35, FUNC_5(VAR_39->noo_cred));
 if (VAR_39)
  FUNC_25(VAR_39);
 if (!VAR_35 && VAR_41 == VAR_27 && (VAR_30->a_mode & VAR_6)) {
  FUNC_6(&VAR_34->nm_lock);
  VAR_34->nm_state &= ~VAR_7;
  VAR_34->nm_curdeadtimeout = VAR_34->nm_deadtimeout;
  if (VAR_34->nm_curdeadtimeout <= 0)
   VAR_34->nm_deadto_start = 0;
  VAR_34->nm_writers++;
  FUNC_7(&VAR_34->nm_lock);
 }

 return (VAR_35);
}

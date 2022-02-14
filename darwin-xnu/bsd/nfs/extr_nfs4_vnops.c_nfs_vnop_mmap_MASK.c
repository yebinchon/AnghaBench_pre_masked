
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
struct vnop_mmap_args {int a_fflags; int a_vp; int a_context; } ;
struct nfsmount {scalar_t__ nm_vers; scalar_t__ nm_curdeadtimeout; scalar_t__ nm_deadtimeout; int nm_lock; int nm_mappers; scalar_t__ nm_deadto_start; int nm_state; } ;
struct nfs_open_owner {int noo_cred; } ;
struct nfs_open_file {int nof_flags; int nof_access; int nof_deny; int nof_mmap_access; int nof_mmap_deny; TYPE_1__* nof_owner; scalar_t__ nof_rw_drw; scalar_t__ nof_rw_dw; scalar_t__ nof_rw; scalar_t__ nof_d_rw_drw; scalar_t__ nof_d_rw_dw; scalar_t__ nof_d_rw; scalar_t__ nof_r_drw; scalar_t__ nof_r_dw; scalar_t__ nof_r; scalar_t__ nof_d_r_drw; scalar_t__ nof_d_r_dw; scalar_t__ nof_d_r; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_11__ {int n_flag; } ;
struct TYPE_10__ {int noo_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_2__*,char*,int,int ,...) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_2__* FUNC_1 (int ) ;
 struct nfsmount* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,struct nfs_open_file*,int,int,int ) ;
 int FUNC_7 (struct nfs_open_file*,int *) ;
 int FUNC_8 (TYPE_2__*,struct nfs_open_file*,int,int,int ) ;
 scalar_t__ FUNC_9 (struct nfsmount*) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct nfsmount*,int) ;
 int FUNC_12 (struct nfsmount*,int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct nfs_open_file*,int,int,int) ;
 int FUNC_16 (struct nfs_open_file*) ;
 int FUNC_17 (TYPE_2__*,struct nfs_open_owner*,struct nfs_open_file**,int ,int ,int) ;
 int FUNC_18 (struct nfs_open_file*,int *) ;
 struct nfs_open_owner* FUNC_19 (struct nfsmount*,int ,int) ;
 int FUNC_20 (struct nfs_open_owner*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;

int
FUNC_25(
 struct vnop_mmap_args *VAR_20)





{
 vfs_context_t VAR_21 = VAR_20->a_context;
 vnode_t VAR_22 = VAR_20->a_vp;
 nfsnode_t VAR_23 = FUNC_1(VAR_22);
 int VAR_24 = 0, VAR_25, VAR_26, VAR_27;
 struct nfsmount *VAR_28;
 struct nfs_open_owner *VAR_29 = ((void*)0);
 struct nfs_open_file *VAR_30 = ((void*)0);

 VAR_28 = FUNC_2(VAR_22);
 if (FUNC_9(VAR_28))
  return (VAR_3);

 if (!FUNC_24(VAR_22) || !(VAR_20->a_fflags & (VAR_18|VAR_19)))
  return (VAR_0);
 if (VAR_23->n_flag & VAR_17)
  return (VAR_1);






 VAR_25 = VAR_10;
 if (VAR_20->a_fflags & VAR_19)
  VAR_25 |= VAR_11;
 VAR_26 = VAR_13;

 VAR_29 = FUNC_19(VAR_28, FUNC_23(VAR_21), 1);
 if (!VAR_29)
  return (VAR_2);

restart:
 VAR_24 = FUNC_12(VAR_28, ((void*)0));
 if (VAR_24) {
  FUNC_20(VAR_29);
  return (VAR_24);
 }
 if (VAR_23->n_flag & VAR_17) {
  VAR_24 = VAR_1;
  FUNC_11(VAR_28, 0);
  FUNC_20(VAR_29);
  return (VAR_24);
 }

 VAR_24 = FUNC_17(VAR_23, VAR_29, &VAR_30, 0, 0, 1);
 if (VAR_24 || (!VAR_24 && (VAR_30->nof_flags & VAR_6))) {
  FUNC_0(VAR_23, "nfs_vnop_mmap: no open file for owner, error %d, %d", VAR_24, FUNC_3(VAR_29->noo_cred));
  VAR_24 = VAR_4;
 }
 if (!VAR_24 && (VAR_30->nof_flags & VAR_8)) {
  FUNC_11(VAR_28, 0);
  VAR_24 = FUNC_7(VAR_30, ((void*)0));
  VAR_30 = ((void*)0);
  if (!VAR_24)
   goto restart;
 }
 if (!VAR_24)
  VAR_24 = FUNC_18(VAR_30, ((void*)0));
 if (VAR_24) {
  VAR_30 = ((void*)0);
  goto out;
 }
 if (!(VAR_30->nof_access & VAR_10)) {
  if (VAR_30->nof_flags & VAR_7) {

   FUNC_0(VAR_23, "nfs_vnop_mmap: File already needs close access: 0x%x, cred: %d thread: %lld",
      VAR_30->nof_access, FUNC_3(VAR_30->nof_owner->noo_cred), FUNC_21(FUNC_22(VAR_21)));
  }




  if (VAR_25 != VAR_10 || (VAR_25 & VAR_30->nof_deny)) {

   VAR_24 = VAR_4;
   goto out;
  }

  if (VAR_28->nm_vers < VAR_15) {

   FUNC_15(VAR_30, VAR_10, VAR_13, 0);
   VAR_24 = 0;
  } else {
   VAR_24 = FUNC_6(VAR_23, VAR_30, VAR_10, VAR_13, VAR_21);
  }
  if (!VAR_24)
   VAR_30->nof_flags |= VAR_7;
  if (VAR_24)
   goto out;
 }


 if (VAR_25 == VAR_9) {
  if (VAR_30->nof_d_rw || VAR_30->nof_d_rw_dw || VAR_30->nof_d_rw_drw) {
   VAR_27 = 1;
   if (VAR_30->nof_d_rw)
    VAR_26 = VAR_13;
   else if (VAR_30->nof_d_rw_dw)
    VAR_26 = VAR_14;
   else if (VAR_30->nof_d_rw_drw)
    VAR_26 = VAR_12;
  } else if (VAR_30->nof_rw || VAR_30->nof_rw_dw || VAR_30->nof_rw_drw) {
   VAR_27 = 0;
   if (VAR_30->nof_rw)
    VAR_26 = VAR_13;
   else if (VAR_30->nof_rw_dw)
    VAR_26 = VAR_14;
   else if (VAR_30->nof_rw_drw)
    VAR_26 = VAR_12;
  } else {
   VAR_24 = VAR_4;
  }
 } else {
  if (VAR_30->nof_d_r || VAR_30->nof_d_r_dw || VAR_30->nof_d_r_drw) {
   VAR_27 = 1;
   if (VAR_30->nof_d_r)
    VAR_26 = VAR_13;
   else if (VAR_30->nof_d_r_dw)
    VAR_26 = VAR_14;
   else if (VAR_30->nof_d_r_drw)
    VAR_26 = VAR_12;
  } else if (VAR_30->nof_r || VAR_30->nof_r_dw || VAR_30->nof_r_drw) {
   VAR_27 = 0;
   if (VAR_30->nof_r)
    VAR_26 = VAR_13;
   else if (VAR_30->nof_r_dw)
    VAR_26 = VAR_14;
   else if (VAR_30->nof_r_drw)
    VAR_26 = VAR_12;
  } else if (VAR_30->nof_d_rw || VAR_30->nof_d_rw_dw || VAR_30->nof_d_rw_drw) {





   VAR_27 = 1;
   VAR_25 = VAR_9;
   if (VAR_30->nof_d_rw)
    VAR_26 = VAR_13;
   else if (VAR_30->nof_d_rw_dw)
    VAR_26 = VAR_14;
   else if (VAR_30->nof_d_rw_drw)
    VAR_26 = VAR_12;
  } else if (VAR_30->nof_rw || VAR_30->nof_rw_dw || VAR_30->nof_rw_drw) {
   VAR_27 = 0;
   VAR_25 = VAR_9;
   if (VAR_30->nof_rw)
    VAR_26 = VAR_13;
   else if (VAR_30->nof_rw_dw)
    VAR_26 = VAR_14;
   else if (VAR_30->nof_rw_drw)
    VAR_26 = VAR_12;
  } else {
   VAR_24 = VAR_4;
  }
 }
 if (VAR_24)
  goto out;






 if ((VAR_30->nof_mmap_access > VAR_25) ||
     ((VAR_30->nof_mmap_access == VAR_25) && (VAR_30->nof_mmap_deny <= VAR_26)))
  goto out;


 if (VAR_30->nof_mmap_access) {
  VAR_24 = FUNC_8(VAR_23, VAR_30, VAR_30->nof_mmap_access, VAR_30->nof_mmap_deny, VAR_21);
  if (VAR_24) {
   if (!FUNC_10(VAR_24))
    FUNC_0(VAR_23, "nfs_vnop_mmap: close of previous mmap mode failed: %d, %d", VAR_24, FUNC_3(VAR_30->nof_owner->noo_cred));
   FUNC_0(VAR_23, "nfs_vnop_mmap: update, close error %d, %d", VAR_24, FUNC_3(VAR_30->nof_owner->noo_cred));
   goto out;
  }
  VAR_30->nof_mmap_access = VAR_30->nof_mmap_deny = 0;
 }

 FUNC_15(VAR_30, VAR_25, VAR_26, VAR_27);
 VAR_30->nof_mmap_access = VAR_25;
 VAR_30->nof_mmap_deny = VAR_26;

out:
 if (VAR_30)
  FUNC_16(VAR_30);
 if (FUNC_11(VAR_28, VAR_24)) {
  VAR_30 = ((void*)0);
  goto restart;
 }
 if (VAR_29)
  FUNC_20(VAR_29);

 if (!VAR_24) {
  int VAR_31 = 0;
  FUNC_13(VAR_23);
  if ((VAR_23->n_flag & VAR_16) == 0) {
   VAR_23->n_flag |= VAR_16;
   VAR_31 = 1;
  }
  FUNC_14(VAR_23);
  if (VAR_31) {
   FUNC_4(&VAR_28->nm_lock);
   VAR_28->nm_state &= ~VAR_5;
   VAR_28->nm_curdeadtimeout = VAR_28->nm_deadtimeout;
   if (VAR_28->nm_curdeadtimeout <= 0)
    VAR_28->nm_deadto_start = 0;
   VAR_28->nm_mappers++;
   FUNC_5(&VAR_28->nm_lock);
  }
 }

 return (VAR_24);
}

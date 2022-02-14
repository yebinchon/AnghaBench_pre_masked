
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef scalar_t__ uint32_t ;
struct nfs_open_file {scalar_t__ nof_access; scalar_t__ nof_deny; int nof_rw; int nof_d_rw; scalar_t__ nof_w_dw; scalar_t__ nof_d_w_dw; scalar_t__ nof_w_drw; scalar_t__ nof_d_w_drw; int nof_opencnt; int nof_flags; TYPE_1__* nof_owner; int nof_lock; scalar_t__ nof_d_rw_drw; scalar_t__ nof_rw_drw; scalar_t__ nof_d_r_drw; scalar_t__ nof_r_drw; scalar_t__ nof_d_rw_dw; scalar_t__ nof_rw_dw; scalar_t__ nof_d_r_dw; scalar_t__ nof_r_dw; int nof_d_w; int nof_w; int nof_d_r; int nof_r; scalar_t__ nof_mmap_deny; scalar_t__ nof_mmap_access; int nof_creator; } ;
struct nfs_lock_owner {int dummy; } ;
typedef int nfsnode_t ;
struct TYPE_4__ {scalar_t__ nm_vers; } ;
struct TYPE_3__ {int noo_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nfs_open_file*,int ) ;
 int FUNC_6 (int ,struct nfs_open_file*,int ,int ,int ) ;
 int FUNC_7 (int ,struct nfs_open_file*,int ) ;
 int FUNC_8 (int ,struct nfs_lock_owner*,int ,int ,int ,int ,int ,int ) ;
 struct nfs_lock_owner* FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct nfs_lock_owner*) ;
 int FUNC_11 (struct nfs_open_file*,scalar_t__,scalar_t__,int) ;
 int FUNC_12 (struct nfs_open_file*,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct nfs_open_file*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,int*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

int
FUNC_18(
 nfsnode_t VAR_11,
 struct nfs_open_file *VAR_12,
 uint32_t VAR_13,
 uint32_t VAR_14,
 vfs_context_t VAR_15)
{
 struct nfs_lock_owner *VAR_16;
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 uint32_t VAR_22, VAR_23;


 if (((VAR_13 & VAR_12->nof_access) != VAR_13) || ((VAR_14 & VAR_12->nof_deny) != VAR_14))
  FUNC_1(VAR_11, "nfs_close: mode mismatch %d %d, current %d %d, %d",
   VAR_13, VAR_14, VAR_12->nof_access, VAR_12->nof_deny,
   FUNC_2(VAR_12->nof_owner->noo_cred));





 if (VAR_14 == VAR_7) {
  if ((VAR_13 == VAR_6) &&
      (VAR_12->nof_w == 0) && (VAR_12->nof_d_w == 0) &&
      (VAR_12->nof_rw || VAR_12->nof_d_rw))
   VAR_13 = VAR_5;
 } else if (VAR_14 == VAR_8) {
  if ((VAR_13 == VAR_6) &&
      (VAR_12->nof_w_dw == 0) && (VAR_12->nof_d_w_dw == 0) &&
      (VAR_12->nof_rw_dw || VAR_12->nof_d_rw_dw))
   VAR_13 = VAR_5;
 } else {
  if ((VAR_13 == VAR_6) &&
      (VAR_12->nof_w_drw == 0) && (VAR_12->nof_d_w_drw == 0) &&
      (VAR_12->nof_rw_drw || VAR_12->nof_d_rw_drw))
   VAR_13 = VAR_5;
 }

 FUNC_13(VAR_12, VAR_13, VAR_14, &VAR_22, &VAR_23, &VAR_19);
 if ((VAR_22 != VAR_12->nof_access) || (VAR_23 != VAR_12->nof_deny))
  VAR_18 = 1;
 else
  VAR_18 = 0;

 if (FUNC_0(VAR_11)->nm_vers < VAR_9)
  goto v3close;

 if ((VAR_22 == 0) || (VAR_12->nof_opencnt == 1)) {




  FUNC_14(VAR_11);
  VAR_20 = 1;
  if (!VAR_19 && !(VAR_12->nof_flags & VAR_4))
   VAR_17 = FUNC_6(VAR_11, VAR_12, FUNC_16(VAR_15), FUNC_17(VAR_15), 0);
  if (VAR_17 == VAR_2) {




   VAR_16 = FUNC_9(VAR_11, FUNC_15(VAR_15), 0);
   if (VAR_16) {
    FUNC_8(VAR_11, VAR_16, VAR_1, 0, VAR_10,
     0, FUNC_16(VAR_15), FUNC_17(VAR_15));
    FUNC_10(VAR_16);
   }
   VAR_17 = FUNC_6(VAR_11, VAR_12, FUNC_16(VAR_15), FUNC_17(VAR_15), 0);
  }
 } else if (VAR_18) {




  if (!VAR_19 && !(VAR_12->nof_flags & VAR_4)) {
   VAR_21 = 1;




   if (VAR_12->nof_d_rw_drw || VAR_12->nof_d_w_drw || VAR_12->nof_d_r_drw ||
       VAR_12->nof_d_rw_dw || VAR_12->nof_d_w_dw || VAR_12->nof_d_r_dw ||
       VAR_12->nof_d_rw || VAR_12->nof_d_w || VAR_12->nof_d_r)
    FUNC_5(VAR_12, 0);

   FUNC_12(VAR_12, VAR_13, VAR_14);
   VAR_17 = FUNC_7(VAR_11, VAR_12, VAR_15);
   if (VAR_17)
    FUNC_11(VAR_12, VAR_13, VAR_14, VAR_19);
  }
 }

 if (VAR_17) {
  FUNC_1(VAR_11, "nfs_close: error %d, %d", VAR_17, FUNC_2(VAR_12->nof_owner->noo_cred));
  return (VAR_17);
 }

v3close:
 if (!VAR_21)
  FUNC_12(VAR_12, VAR_13, VAR_14);

 if (VAR_20) {
  FUNC_3(&VAR_12->nof_lock);
  if (VAR_12->nof_r || VAR_12->nof_d_r || VAR_12->nof_w || VAR_12->nof_d_w || VAR_12->nof_d_rw ||
      (VAR_12->nof_rw && !((VAR_12->nof_flags & VAR_3) && !VAR_12->nof_creator && (VAR_12->nof_rw == 1))) ||
      VAR_12->nof_r_dw || VAR_12->nof_d_r_dw || VAR_12->nof_w_dw || VAR_12->nof_d_w_dw ||
      VAR_12->nof_rw_dw || VAR_12->nof_d_rw_dw || VAR_12->nof_r_drw || VAR_12->nof_d_r_drw ||
      VAR_12->nof_w_drw || VAR_12->nof_d_w_drw || VAR_12->nof_rw_drw || VAR_12->nof_d_rw_drw)
   FUNC_1(VAR_11, "nfs_close: unexpected count: %u.%u %u.%u %u.%u dw %u.%u %u.%u %u.%u drw %u.%u %u.%u %u.%u flags 0x%x, %d",
    VAR_12->nof_r, VAR_12->nof_d_r, VAR_12->nof_w, VAR_12->nof_d_w,
    VAR_12->nof_rw, VAR_12->nof_d_rw, VAR_12->nof_r_dw, VAR_12->nof_d_r_dw,
    VAR_12->nof_w_dw, VAR_12->nof_d_w_dw, VAR_12->nof_rw_dw, VAR_12->nof_d_rw_dw,
    VAR_12->nof_r_drw, VAR_12->nof_d_r_drw, VAR_12->nof_w_drw, VAR_12->nof_d_w_drw,
    VAR_12->nof_rw_drw, VAR_12->nof_d_rw_drw, VAR_12->nof_flags,
    FUNC_2(VAR_12->nof_owner->noo_cred));

  VAR_12->nof_access = VAR_12->nof_deny = 0;
  VAR_12->nof_mmap_access = VAR_12->nof_mmap_deny = 0;
  VAR_12->nof_r = VAR_12->nof_d_r = 0;
  VAR_12->nof_w = VAR_12->nof_d_w = 0;
  VAR_12->nof_rw = VAR_12->nof_d_rw = 0;
  VAR_12->nof_r_dw = VAR_12->nof_d_r_dw = 0;
  VAR_12->nof_w_dw = VAR_12->nof_d_w_dw = 0;
  VAR_12->nof_rw_dw = VAR_12->nof_d_rw_dw = 0;
  VAR_12->nof_r_drw = VAR_12->nof_d_r_drw = 0;
  VAR_12->nof_w_drw = VAR_12->nof_d_w_drw = 0;
  VAR_12->nof_rw_drw = VAR_12->nof_d_rw_drw = 0;
  VAR_12->nof_flags &= ~VAR_3;
  FUNC_4(&VAR_12->nof_lock);

 }
 if (VAR_12->nof_flags & VAR_4) {
  VAR_17 = VAR_0;
  FUNC_1(VAR_11, "nfs_close: LOST%s, %d", !VAR_12->nof_opencnt ? " (last)" : "",
   FUNC_2(VAR_12->nof_owner->noo_cred));
 }

 return (VAR_17);
}

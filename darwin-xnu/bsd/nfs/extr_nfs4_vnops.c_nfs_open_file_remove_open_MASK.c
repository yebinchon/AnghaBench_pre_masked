
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct nfs_open_file {scalar_t__ nof_d_r; scalar_t__ nof_r; scalar_t__ nof_d_w; scalar_t__ nof_w; scalar_t__ nof_d_rw; scalar_t__ nof_rw; scalar_t__ nof_d_r_dw; scalar_t__ nof_r_dw; scalar_t__ nof_d_w_dw; scalar_t__ nof_w_dw; scalar_t__ nof_d_rw_dw; scalar_t__ nof_rw_dw; scalar_t__ nof_d_r_drw; scalar_t__ nof_r_drw; scalar_t__ nof_d_w_drw; scalar_t__ nof_w_drw; scalar_t__ nof_d_rw_drw; scalar_t__ nof_rw_drw; int nof_lock; int nof_opencnt; scalar_t__ nof_deny; scalar_t__ nof_access; TYPE_1__* nof_owner; int nof_np; } ;
struct TYPE_2__ {int noo_cred; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfs_open_file*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,int*) ;

void
FUNC_5(struct nfs_open_file *VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 uint32_t VAR_8, VAR_9;
 int VAR_10 = 0;

 FUNC_2(&VAR_5->nof_lock);
 FUNC_4(VAR_5, VAR_6, VAR_7, &VAR_8, &VAR_9, &VAR_10);


 if (VAR_7 == VAR_3) {
  if (VAR_6 == VAR_1) {
   if (VAR_10) {
    if (VAR_5->nof_d_r == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(R) delegated count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_d_r--;
   } else {
    if (VAR_5->nof_r == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(R) count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_r--;
   }
  } else if (VAR_6 == VAR_2) {
   if (VAR_10) {
    if (VAR_5->nof_d_w == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(W) delegated count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_d_w--;
   } else {
    if (VAR_5->nof_w == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(W) count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_w--;
   }
  } else if (VAR_6 == VAR_0) {
   if (VAR_10) {
    if (VAR_5->nof_d_rw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(RW) delegated count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_d_rw--;
   } else {
    if (VAR_5->nof_rw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(RW) count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_rw--;
   }
  }
 } else if (VAR_7 == VAR_4) {
  if (VAR_6 == VAR_1) {
   if (VAR_10) {
    if (VAR_5->nof_d_r_dw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(R,DW) delegated count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_d_r_dw--;
   } else {
    if (VAR_5->nof_r_dw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(R,DW) count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_r_dw--;
   }
  } else if (VAR_6 == VAR_2) {
   if (VAR_10) {
    if (VAR_5->nof_d_w_dw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(W,DW) delegated count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_d_w_dw--;
   } else {
    if (VAR_5->nof_w_dw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(W,DW) count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_w_dw--;
   }
  } else if (VAR_6 == VAR_0) {
   if (VAR_10) {
    if (VAR_5->nof_d_rw_dw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(RW,DW) delegated count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_d_rw_dw--;
   } else {
    if (VAR_5->nof_rw_dw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(RW,DW) count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_rw_dw--;
   }
  }
 } else {
  if (VAR_6 == VAR_1) {
   if (VAR_10) {
    if (VAR_5->nof_d_r_drw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(R,DRW) delegated count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_d_r_drw--;
   } else {
    if (VAR_5->nof_r_drw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(R,DRW) count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_r_drw--;
   }
  } else if (VAR_6 == VAR_2) {
   if (VAR_10) {
    if (VAR_5->nof_d_w_drw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(W,DRW) delegated count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_d_w_drw--;
   } else {
    if (VAR_5->nof_w_drw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(W,DRW) count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_w_drw--;
   }
  } else if (VAR_6 == VAR_0) {
   if (VAR_10) {
    if (VAR_5->nof_d_rw_drw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(RW,DRW) delegated count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_d_rw_drw--;
   } else {
    if (VAR_5->nof_rw_drw == 0)
     FUNC_0(VAR_5->nof_np, "nfs: open(RW,DRW) count underrun, %d", FUNC_1(VAR_5->nof_owner->noo_cred));
    else
     VAR_5->nof_rw_drw--;
   }
  }
 }


 VAR_5->nof_access = VAR_8;
 VAR_5->nof_deny = VAR_9;
 VAR_5->nof_opencnt--;
 FUNC_3(&VAR_5->nof_lock);
}

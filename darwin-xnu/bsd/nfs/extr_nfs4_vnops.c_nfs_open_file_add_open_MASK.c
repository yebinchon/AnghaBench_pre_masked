
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nfs_open_file {int nof_lock; int nof_opencnt; int nof_rw_drw; int nof_w_drw; int nof_r_drw; int nof_rw_dw; int nof_w_dw; int nof_r_dw; int nof_rw; int nof_w; int nof_r; int nof_d_rw_drw; int nof_d_w_drw; int nof_d_r_drw; int nof_d_rw_dw; int nof_d_w_dw; int nof_d_r_dw; int nof_d_rw; int nof_d_w; int nof_d_r; int nof_deny; int nof_access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nfs_open_file *VAR_5, uint32_t VAR_6, uint32_t VAR_7, int VAR_8)
{
 FUNC_0(&VAR_5->nof_lock);
 VAR_5->nof_access |= VAR_6;
 VAR_5->nof_deny |= VAR_7;

 if (VAR_8) {
  if (VAR_7 == VAR_3) {
   if (VAR_6 == VAR_1)
    VAR_5->nof_d_r++;
   else if (VAR_6 == VAR_2)
    VAR_5->nof_d_w++;
   else if (VAR_6 == VAR_0)
    VAR_5->nof_d_rw++;
  } else if (VAR_7 == VAR_4) {
   if (VAR_6 == VAR_1)
    VAR_5->nof_d_r_dw++;
   else if (VAR_6 == VAR_2)
    VAR_5->nof_d_w_dw++;
   else if (VAR_6 == VAR_0)
    VAR_5->nof_d_rw_dw++;
  } else {
   if (VAR_6 == VAR_1)
    VAR_5->nof_d_r_drw++;
   else if (VAR_6 == VAR_2)
    VAR_5->nof_d_w_drw++;
   else if (VAR_6 == VAR_0)
    VAR_5->nof_d_rw_drw++;
  }
 } else {
  if (VAR_7 == VAR_3) {
   if (VAR_6 == VAR_1)
    VAR_5->nof_r++;
   else if (VAR_6 == VAR_2)
    VAR_5->nof_w++;
   else if (VAR_6 == VAR_0)
    VAR_5->nof_rw++;
  } else if (VAR_7 == VAR_4) {
   if (VAR_6 == VAR_1)
    VAR_5->nof_r_dw++;
   else if (VAR_6 == VAR_2)
    VAR_5->nof_w_dw++;
   else if (VAR_6 == VAR_0)
    VAR_5->nof_rw_dw++;
  } else {
   if (VAR_6 == VAR_1)
    VAR_5->nof_r_drw++;
   else if (VAR_6 == VAR_2)
    VAR_5->nof_w_drw++;
   else if (VAR_6 == VAR_0)
    VAR_5->nof_rw_drw++;
  }
 }

 VAR_5->nof_opencnt++;
 FUNC_1(&VAR_5->nof_lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nfs_open_file {int nof_access; int nof_deny; int nof_r; int nof_d_r; int nof_rw; int nof_d_rw; int nof_r_dw; int nof_d_r_dw; int nof_rw_dw; int nof_d_rw_dw; int nof_r_drw; int nof_d_r_drw; int nof_w; int nof_d_w; int nof_w_dw; int nof_d_w_dw; int nof_w_drw; int nof_d_w_drw; int nof_rw_drw; int nof_d_rw_drw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_0(
 struct nfs_open_file *VAR_6,
 uint32_t VAR_7,
 uint32_t VAR_8,
 uint32_t *VAR_9,
 uint32_t *VAR_10,
 int *VAR_11)
{




 *VAR_9 = VAR_6->nof_access;
 *VAR_10 = VAR_6->nof_deny;

 if ((VAR_7 & VAR_1) &&
     (VAR_6->nof_access & VAR_1) &&
     ((VAR_6->nof_r + VAR_6->nof_d_r +
       VAR_6->nof_rw + VAR_6->nof_d_rw +
       VAR_6->nof_r_dw + VAR_6->nof_d_r_dw +
       VAR_6->nof_rw_dw + VAR_6->nof_d_rw_dw +
       VAR_6->nof_r_drw + VAR_6->nof_d_r_drw +
       VAR_6->nof_rw_dw + VAR_6->nof_d_rw_dw) == 1))
  *VAR_9 &= ~VAR_1;
 if ((VAR_7 & VAR_2) &&
     (VAR_6->nof_access & VAR_2) &&
     ((VAR_6->nof_w + VAR_6->nof_d_w +
       VAR_6->nof_rw + VAR_6->nof_d_rw +
       VAR_6->nof_w_dw + VAR_6->nof_d_w_dw +
       VAR_6->nof_rw_dw + VAR_6->nof_d_rw_dw +
       VAR_6->nof_w_drw + VAR_6->nof_d_w_drw +
       VAR_6->nof_rw_dw + VAR_6->nof_d_rw_dw) == 1))
  *VAR_9 &= ~VAR_2;
 if ((VAR_8 & VAR_4) &&
     (VAR_6->nof_deny & VAR_4) &&
     ((VAR_6->nof_r_drw + VAR_6->nof_d_r_drw +
       VAR_6->nof_w_drw + VAR_6->nof_d_w_drw +
       VAR_6->nof_rw_drw + VAR_6->nof_d_rw_drw) == 1))
  *VAR_10 &= ~VAR_4;
 if ((VAR_8 & VAR_5) &&
     (VAR_6->nof_deny & VAR_5) &&
     ((VAR_6->nof_r_drw + VAR_6->nof_d_r_drw +
       VAR_6->nof_w_drw + VAR_6->nof_d_w_drw +
       VAR_6->nof_rw_drw + VAR_6->nof_d_rw_drw +
       VAR_6->nof_r_dw + VAR_6->nof_d_r_dw +
       VAR_6->nof_w_dw + VAR_6->nof_d_w_dw +
       VAR_6->nof_rw_dw + VAR_6->nof_d_rw_dw) == 1))
  *VAR_10 &= ~VAR_5;


 if (VAR_8 == VAR_3) {
  if (VAR_7 == VAR_1)
   *VAR_11 = (VAR_6->nof_d_r != 0);
  else if (VAR_7 == VAR_2)
   *VAR_11 = (VAR_6->nof_d_w != 0);
  else if (VAR_7 == VAR_0)
   *VAR_11 = (VAR_6->nof_d_rw != 0);
  else
   *VAR_11 = 0;
 } else if (VAR_8 == VAR_5) {
  if (VAR_7 == VAR_1)
   *VAR_11 = (VAR_6->nof_d_r_dw != 0);
  else if (VAR_7 == VAR_2)
   *VAR_11 = (VAR_6->nof_d_w_dw != 0);
  else if (VAR_7 == VAR_0)
   *VAR_11 = (VAR_6->nof_d_rw_dw != 0);
  else
   *VAR_11 = 0;
 } else {
  if (VAR_7 == VAR_1)
   *VAR_11 = (VAR_6->nof_d_r_drw != 0);
  else if (VAR_7 == VAR_2)
   *VAR_11 = (VAR_6->nof_d_w_drw != 0);
  else if (VAR_7 == VAR_0)
   *VAR_11 = (VAR_6->nof_d_rw_drw != 0);
  else
   *VAR_11 = 0;
 }
}

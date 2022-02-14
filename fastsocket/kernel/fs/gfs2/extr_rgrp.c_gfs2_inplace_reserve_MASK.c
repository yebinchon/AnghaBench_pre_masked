
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct gfs2_sbd {int sd_rindex_uptodate; int sd_rindex; } ;
struct gfs2_rgrpd {int rd_flags; scalar_t__ rd_extfail_pt; scalar_t__ rd_free_clone; int rd_gl; } ;
struct TYPE_4__ {int i_mode; } ;
struct gfs2_inode {int i_no_addr; struct gfs2_rgrpd* i_rgd; TYPE_2__ i_inode; int i_goal; struct gfs2_blkreserv* i_res; } ;
struct TYPE_3__ {struct gfs2_rgrpd* rgd; } ;
struct gfs2_blkreserv {TYPE_1__ rs_rbm; int rs_rgd_gh; } ;
struct gfs2_alloc_parms {int aflags; scalar_t__ target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct gfs2_sbd* FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 struct gfs2_rgrpd* FUNC_3 (struct gfs2_sbd*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int *) ;
 int FUNC_7 (struct gfs2_sbd*,int *) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*) ;
 int FUNC_9 (struct gfs2_inode*) ;
 scalar_t__ FUNC_10 (struct gfs2_blkreserv*) ;
 int FUNC_11 (struct gfs2_blkreserv*) ;
 scalar_t__ FUNC_12 (struct gfs2_rgrpd**,struct gfs2_rgrpd*) ;
 int FUNC_13 (struct gfs2_rgrpd*,struct gfs2_inode*,struct gfs2_alloc_parms const*) ;
 scalar_t__ FUNC_14 (struct gfs2_rgrpd*,int ) ;
 int FUNC_15 (struct gfs2_rgrpd*,int *,int ) ;
 scalar_t__ FUNC_16 (int) ;

int FUNC_17(struct gfs2_inode *VAR_10, const struct gfs2_alloc_parms *VAR_11)
{
 struct gfs2_sbd *VAR_12 = FUNC_1(&VAR_10->i_inode);
 struct gfs2_rgrpd *VAR_13 = ((void*)0);
 struct gfs2_blkreserv *VAR_14 = VAR_10->i_res;
 int VAR_15, VAR_16, VAR_17 = VAR_7;
 u64 VAR_18 = VAR_9;
 int VAR_19 = 0;
 u32 VAR_20 = 0;

 if (FUNC_10(VAR_14)) {
  VAR_13 = VAR_14->rs_rbm.rgd;
 } else {
  if (VAR_10->i_rgd && FUNC_14(VAR_10->i_rgd, VAR_10->i_goal)) {
   VAR_14->rs_rbm.rgd = VAR_13 = VAR_10->i_rgd;
  } else {
   VAR_14->rs_rbm.rgd = VAR_13 = FUNC_3(VAR_12, VAR_10->i_goal, 1);
  }
  if (FUNC_2(VAR_10->i_inode.i_mode) && (VAR_11->aflags & VAR_2))
   VAR_20 = FUNC_8(VAR_10);
 }
 if (VAR_14->rs_rbm.rgd == ((void*)0))
  return -VAR_0;

 while (VAR_19 < 3) {
  VAR_16 = 1;

  if (!FUNC_5(VAR_14->rs_rbm.rgd->rd_gl)) {
   VAR_16 = 0;
   if (VAR_20 && VAR_20--)
    goto next_rgrp;
   VAR_15 = FUNC_6(VAR_14->rs_rbm.rgd->rd_gl,
         VAR_8,
         FUNC_10(VAR_14) ? 0 : VAR_17,
         &VAR_14->rs_rgd_gh);
   if (VAR_15 == VAR_6)
    goto next_rgrp;
   if (FUNC_16(VAR_15))
    return VAR_15;
  }

  if ((VAR_14->rs_rbm.rgd->rd_flags & (VAR_5 |
       VAR_4)) ||
      (VAR_11 && (VAR_11->target > VAR_14->rs_rbm.rgd->rd_extfail_pt)))
   goto skip_rgrp;


  if (!FUNC_10(VAR_14))
   FUNC_13(VAR_14->rs_rbm.rgd, VAR_10, VAR_11);


  if (!FUNC_10(VAR_14) && (VAR_19 < 1))
   goto check_rgrp;


  if (VAR_14->rs_rbm.rgd->rd_free_clone >= VAR_11->target) {
   VAR_10->i_rgd = VAR_14->rs_rbm.rgd;
   return 0;
  }

check_rgrp:

  if (VAR_14->rs_rbm.rgd->rd_flags & VAR_3)
   FUNC_15(VAR_14->rs_rbm.rgd, &VAR_18,
     VAR_10->i_no_addr);
skip_rgrp:

  if (FUNC_10(VAR_14))
   FUNC_11(VAR_14);


  if (!VAR_16)
   FUNC_4(&VAR_14->rs_rgd_gh);
next_rgrp:

  if (FUNC_12(&VAR_14->rs_rbm.rgd, VAR_13))
   continue;
  if (VAR_20)
   continue;





  VAR_17 &= ~VAR_7;
  VAR_19++;

  if (VAR_10 == FUNC_0(VAR_12->sd_rindex) && !VAR_12->sd_rindex_uptodate) {
   VAR_15 = FUNC_9(VAR_10);
   if (VAR_15)
    return VAR_15;
  }

  if (VAR_19 == 2)
   FUNC_7(VAR_12, ((void*)0));
 }
 return -VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct gfs2_sbd {int sd_jbsize; } ;
struct gfs2_rgrpd {scalar_t__ rd_length; } ;
struct gfs2_rgrp_list {unsigned int rl_rgrps; TYPE_2__* rl_ghs; } ;
struct gfs2_leaf {int lf_next; } ;
struct gfs2_inode {int i_gl; int i_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_5__ {TYPE_1__* gh_gl; } ;
struct TYPE_4__ {struct gfs2_rgrpd* gl_object; } ;


 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_sbd* FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct gfs2_inode*,scalar_t__,struct buffer_head**) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct gfs2_inode*,scalar_t__) ;
 int FUNC_7 (struct gfs2_inode*,char*,int,unsigned int) ;
 int FUNC_8 (struct gfs2_inode*,scalar_t__,int) ;
 int FUNC_9 (unsigned int,TYPE_2__*) ;
 int FUNC_10 (unsigned int,TYPE_2__*) ;
 int FUNC_11 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_12 (struct gfs2_inode*,int ,int ) ;
 int FUNC_13 (struct gfs2_inode*) ;
 int FUNC_14 (struct gfs2_sbd*) ;
 int FUNC_15 (struct gfs2_inode*,struct gfs2_rgrp_list*,scalar_t__) ;
 int FUNC_16 (struct gfs2_rgrp_list*,int ) ;
 int FUNC_17 (struct gfs2_rgrp_list*) ;
 int FUNC_18 (int ,struct buffer_head*) ;
 int FUNC_19 (struct gfs2_sbd*,scalar_t__,unsigned int) ;
 int FUNC_20 (struct gfs2_sbd*) ;
 scalar_t__ FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 char* FUNC_23 (unsigned int,int ) ;
 int FUNC_24 (struct gfs2_rgrp_list*,int ,int) ;
 int FUNC_25 (char*) ;
 char* FUNC_26 (unsigned int) ;

__attribute__((used)) static int FUNC_27(struct gfs2_inode *VAR_8, u32 VAR_9, u32 VAR_10,
   u64 VAR_11)
{
 struct gfs2_sbd *VAR_12 = FUNC_1(&VAR_8->i_inode);
 struct gfs2_leaf *VAR_13;
 struct gfs2_rgrp_list VAR_14;
 struct buffer_head *VAR_15, *VAR_16;
 u64 VAR_17, VAR_18;
 unsigned int VAR_19 = 0, VAR_20 = 0;
 char *VAR_21;
 unsigned int VAR_22, VAR_23 = VAR_10 * sizeof(u64);
 int VAR_24;

 VAR_24 = FUNC_14(VAR_12);
 if (VAR_24)
  return VAR_24;

 FUNC_24(&VAR_14, 0, sizeof(struct gfs2_rgrp_list));

 VAR_21 = FUNC_23(VAR_23, VAR_2);
 if (VAR_21 == ((void*)0))
  VAR_21 = FUNC_26(VAR_23);
 if (!VAR_21)
  return -VAR_1;

 VAR_24 = FUNC_14(VAR_12);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_12(VAR_8, VAR_4, VAR_4);
 if (VAR_24)
  goto out;



 for (VAR_17 = VAR_11; VAR_17; VAR_17 = VAR_18) {
  VAR_24 = FUNC_4(VAR_8, VAR_17, &VAR_15);
  if (VAR_24)
   goto out_rlist;
  VAR_13 = (struct gfs2_leaf *)VAR_15->b_data;
  VAR_18 = FUNC_2(VAR_13->lf_next);
  FUNC_3(VAR_15);

  FUNC_15(VAR_8, &VAR_14, VAR_17);
  VAR_20++;
 }

 FUNC_16(&VAR_14, VAR_3);

 for (VAR_22 = 0; VAR_22 < VAR_14.rl_rgrps; VAR_22++) {
  struct gfs2_rgrpd *VAR_25;
  VAR_25 = VAR_14.rl_ghs[VAR_22].gh_gl->gl_object;
  VAR_19 += VAR_25->rd_length;
 }

 VAR_24 = FUNC_10(VAR_14.rl_rgrps, VAR_14.rl_ghs);
 if (VAR_24)
  goto out_rlist;

 VAR_24 = FUNC_19(VAR_12,
   VAR_19 + (FUNC_0(VAR_23, VAR_12->sd_jbsize) + 1) +
   VAR_5 + VAR_7 + VAR_6, VAR_20);
 if (VAR_24)
  goto out_rg_gunlock;

 for (VAR_17 = VAR_11; VAR_17; VAR_17 = VAR_18) {
  VAR_24 = FUNC_4(VAR_8, VAR_17, &VAR_15);
  if (VAR_24)
   goto out_end_trans;
  VAR_13 = (struct gfs2_leaf *)VAR_15->b_data;
  VAR_18 = FUNC_2(VAR_13->lf_next);
  FUNC_3(VAR_15);

  FUNC_8(VAR_8, VAR_17, 1);
  FUNC_5(&VAR_8->i_inode, -1);
 }

 VAR_24 = FUNC_7(VAR_8, VAR_21, VAR_9 * sizeof(u64), VAR_23);
 if (VAR_24 != VAR_23) {
  if (VAR_24 >= 0)
   VAR_24 = -VAR_0;
  goto out_end_trans;
 }

 VAR_24 = FUNC_11(VAR_8, &VAR_16);
 if (VAR_24)
  goto out_end_trans;

 FUNC_18(VAR_8->i_gl, VAR_16);
 FUNC_6(VAR_8, VAR_16->b_data);
 FUNC_3(VAR_16);

out_end_trans:
 FUNC_20(VAR_12);
out_rg_gunlock:
 FUNC_9(VAR_14.rl_rgrps, VAR_14.rl_ghs);
out_rlist:
 FUNC_17(&VAR_14);
 FUNC_13(VAR_8);
out:
 if (FUNC_21(VAR_21))
  FUNC_25(VAR_21);
 else
  FUNC_22(VAR_21);
 return VAR_24;
}

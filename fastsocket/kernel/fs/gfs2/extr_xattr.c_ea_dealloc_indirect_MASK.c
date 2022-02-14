
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct gfs2_sbd {int sd_inptrs; } ;
struct gfs2_rgrpd {scalar_t__ rd_length; } ;
struct gfs2_rgrp_list {unsigned int rl_rgrps; TYPE_2__* rl_ghs; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_gl; int i_diskflags; int i_inode; int i_eattr; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ __be64 ;
struct TYPE_5__ {TYPE_1__* gh_gl; } ;
struct TYPE_4__ {struct gfs2_rgrpd* gl_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct gfs2_inode*,scalar_t__) ;
 int FUNC_5 (struct gfs2_inode*,scalar_t__,unsigned int) ;
 int FUNC_6 (unsigned int,TYPE_2__*) ;
 int FUNC_7 (unsigned int,TYPE_2__*) ;
 int FUNC_8 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_9 (int ,int ,int ,struct buffer_head**) ;
 scalar_t__ FUNC_10 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 int FUNC_12 (struct gfs2_inode*,struct gfs2_rgrp_list*,scalar_t__) ;
 int FUNC_13 (struct gfs2_rgrp_list*,int ) ;
 int FUNC_14 (struct gfs2_rgrp_list*) ;
 int FUNC_15 (int ,struct buffer_head*) ;
 int FUNC_16 (struct gfs2_sbd*,scalar_t__,unsigned int) ;
 int FUNC_17 (struct gfs2_sbd*) ;
 int FUNC_18 (struct gfs2_rgrp_list*,int ,int) ;

__attribute__((used)) static int FUNC_19(struct gfs2_inode *VAR_9)
{
 struct gfs2_sbd *VAR_10 = FUNC_0(&VAR_9->i_inode);
 struct gfs2_rgrp_list VAR_11;
 struct buffer_head *VAR_12, *VAR_13;
 __be64 *VAR_14, *VAR_15;
 unsigned int VAR_16 = 0;
 u64 VAR_17 = 0;
 unsigned int VAR_18 = 0;
 unsigned int VAR_19 = 0;
 unsigned int VAR_20;
 int VAR_21;

 VAR_21 = FUNC_11(VAR_10);
 if (VAR_21)
  return VAR_21;

 FUNC_18(&VAR_11, 0, sizeof(struct gfs2_rgrp_list));

 VAR_21 = FUNC_9(VAR_9->i_gl, VAR_9->i_eattr, VAR_0, &VAR_12);
 if (VAR_21)
  return VAR_21;

 if (FUNC_10(VAR_10, VAR_12, VAR_3)) {
  VAR_21 = -VAR_1;
  goto out;
 }

 VAR_14 = (__be64 *)(VAR_12->b_data + sizeof(struct gfs2_meta_header));
 VAR_15 = VAR_14 + VAR_10->sd_inptrs;

 for (; VAR_14 < VAR_15; VAR_14++) {
  u64 VAR_22;

  if (!*VAR_14)
   break;
  VAR_22 = FUNC_1(*VAR_14);

  if (VAR_17 + VAR_18 == VAR_22)
   VAR_18++;
  else {
   if (VAR_17)
    FUNC_12(VAR_9, &VAR_11, VAR_17);
   VAR_17 = VAR_22;
   VAR_18 = 1;
  }
  VAR_19++;
 }
 if (VAR_17)
  FUNC_12(VAR_9, &VAR_11, VAR_17);
 else
  goto out;

 FUNC_13(&VAR_11, VAR_4);

 for (VAR_20 = 0; VAR_20 < VAR_11.rl_rgrps; VAR_20++) {
  struct gfs2_rgrpd *VAR_23;
  VAR_23 = VAR_11.rl_ghs[VAR_20].gh_gl->gl_object;
  VAR_16 += VAR_23->rd_length;
 }

 VAR_21 = FUNC_7(VAR_11.rl_rgrps, VAR_11.rl_ghs);
 if (VAR_21)
  goto out_rlist_free;

 VAR_21 = FUNC_16(VAR_10, VAR_16 + VAR_5 + VAR_6 +
     VAR_8 + VAR_7, VAR_19);
 if (VAR_21)
  goto out_gunlock;

 FUNC_15(VAR_9->i_gl, VAR_12);

 VAR_14 = (__be64 *)(VAR_12->b_data + sizeof(struct gfs2_meta_header));
 VAR_17 = 0;
 VAR_18 = 0;

 for (; VAR_14 < VAR_15; VAR_14++) {
  u64 VAR_24;

  if (!*VAR_14)
   break;
  VAR_24 = FUNC_1(*VAR_14);

  if (VAR_17 + VAR_18 == VAR_24)
   VAR_18++;
  else {
   if (VAR_17)
    FUNC_5(VAR_9, VAR_17, VAR_18);
   VAR_17 = VAR_24;
   VAR_18 = 1;
  }

  *VAR_14 = 0;
  FUNC_3(&VAR_9->i_inode, -1);
 }
 if (VAR_17)
  FUNC_5(VAR_9, VAR_17, VAR_18);

 VAR_9->i_diskflags &= ~VAR_2;

 VAR_21 = FUNC_8(VAR_9, &VAR_13);
 if (!VAR_21) {
  FUNC_15(VAR_9->i_gl, VAR_13);
  FUNC_4(VAR_9, VAR_13->b_data);
  FUNC_2(VAR_13);
 }

 FUNC_17(VAR_10);

out_gunlock:
 FUNC_6(VAR_11.rl_rgrps, VAR_11.rl_ghs);
out_rlist_free:
 FUNC_14(&VAR_11);
out:
 FUNC_2(VAR_12);
 return VAR_21;
}

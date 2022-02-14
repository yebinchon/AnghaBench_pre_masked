
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct strip_mine {unsigned int sm_height; scalar_t__ sm_first; } ;
struct gfs2_sbd {unsigned int sd_inptrs; unsigned int sd_diptrs; } ;
struct gfs2_rgrpd {scalar_t__ rd_length; } ;
struct gfs2_rgrp_list {int rl_rgrps; TYPE_2__* rl_ghs; } ;
struct TYPE_8__ {int i_ctime; int i_mtime; int i_gid; int i_uid; } ;
struct gfs2_inode {int i_height; int i_rw_mutex; TYPE_4__ i_inode; int i_gl; int i_res; scalar_t__ i_depth; } ;
struct buffer_head {int b_data; } ;
typedef int s64 ;
typedef scalar_t__ __be64 ;
struct TYPE_7__ {TYPE_1__* gh_gl; } ;
struct TYPE_6__ {struct gfs2_rgrpd* gl_object; } ;


 int VAR_0 ;
 struct gfs2_sbd* FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct gfs2_inode*,scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 int FUNC_6 (int,TYPE_2__*) ;
 int FUNC_7 (int,TYPE_2__*) ;
 int FUNC_8 (struct gfs2_inode*,int ,int ,int ) ;
 int FUNC_9 (struct gfs2_sbd*) ;
 int FUNC_10 (struct gfs2_inode*,struct gfs2_rgrp_list*,scalar_t__) ;
 int FUNC_11 (struct gfs2_rgrp_list*,int ) ;
 int FUNC_12 (struct gfs2_rgrp_list*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct gfs2_sbd*,int ,int,int ) ;
 int FUNC_16 (int ,struct buffer_head*) ;
 int FUNC_17 (struct gfs2_sbd*,scalar_t__,unsigned int) ;
 int FUNC_18 (struct gfs2_sbd*) ;
 int FUNC_19 (struct gfs2_rgrp_list*,int ,int) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct gfs2_inode *VAR_6, struct buffer_head *VAR_7,
      struct buffer_head *VAR_8, __be64 *VAR_9, __be64 *VAR_10,
      unsigned int VAR_11, struct strip_mine *VAR_12)
{
 struct gfs2_sbd *VAR_13 = FUNC_0(&VAR_6->i_inode);
 struct gfs2_rgrp_list VAR_14;
 u64 VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 __be64 *VAR_19;
 unsigned int VAR_20 = 0;
 int VAR_21;
 unsigned int VAR_22 = 0;
 int VAR_23;
 int VAR_24;

 VAR_24 = FUNC_9(VAR_13);
 if (VAR_24)
  return VAR_24;

 if (!*VAR_9)
  VAR_12->sm_first = 0;

 if (VAR_11 != VAR_12->sm_height)
  return 0;

 if (VAR_12->sm_first) {
  VAR_9++;
  VAR_12->sm_first = 0;
 }

 VAR_21 = (VAR_11 != VAR_6->i_height - 1);
 if (VAR_21)
  VAR_22 = (VAR_11) ? VAR_13->sd_inptrs : VAR_13->sd_diptrs;
 else if (VAR_6->i_depth)
  VAR_22 = VAR_13->sd_inptrs;

 FUNC_19(&VAR_14, 0, sizeof(struct gfs2_rgrp_list));
 VAR_16 = 0;
 VAR_17 = 0;

 for (VAR_19 = VAR_9; VAR_19 < VAR_10; VAR_19++) {
  if (!*VAR_19)
   continue;

  VAR_15 = FUNC_2(*VAR_19);

  if (VAR_16 + VAR_17 == VAR_15)
   VAR_17++;
  else {
   if (VAR_16)
    FUNC_10(VAR_6, &VAR_14, VAR_16);

   VAR_16 = VAR_15;
   VAR_17 = 1;
  }
 }

 if (VAR_16)
  FUNC_10(VAR_6, &VAR_14, VAR_16);
 else
  goto out;

 FUNC_11(&VAR_14, VAR_1);

 for (VAR_23 = 0; VAR_23 < VAR_14.rl_rgrps; VAR_23++) {
  struct gfs2_rgrpd *VAR_25;
  VAR_25 = VAR_14.rl_ghs[VAR_23].gh_gl->gl_object;
  VAR_20 += VAR_25->rd_length;
 }

 VAR_24 = FUNC_7(VAR_14.rl_rgrps, VAR_14.rl_ghs);
 if (VAR_24)
  goto out_rlist;

 if (FUNC_13(VAR_6->i_res))
  FUNC_14(VAR_6->i_res);

 VAR_24 = FUNC_17(VAR_13, VAR_20 + VAR_2 +
     VAR_3 + VAR_5 + VAR_4,
     VAR_22);
 if (VAR_24)
  goto out_rg_gunlock;

 FUNC_3(&VAR_6->i_rw_mutex);

 FUNC_16(VAR_6->i_gl, VAR_7);
 FUNC_16(VAR_6->i_gl, VAR_8);

 VAR_16 = 0;
 VAR_17 = 0;
 VAR_18 = 0;

 for (VAR_19 = VAR_9; VAR_19 < VAR_10; VAR_19++) {
  if (!*VAR_19)
   continue;

  VAR_15 = FUNC_2(*VAR_19);

  if (VAR_16 + VAR_17 == VAR_15)
   VAR_17++;
  else {
   if (VAR_16) {
    FUNC_1(VAR_6, VAR_16, VAR_17, VAR_21);
    VAR_18 += VAR_17;
   }

   VAR_16 = VAR_15;
   VAR_17 = 1;
  }

  *VAR_19 = 0;
  FUNC_4(&VAR_6->i_inode, -1);
 }
 if (VAR_16) {
  FUNC_1(VAR_6, VAR_16, VAR_17, VAR_21);
  VAR_18 += VAR_17;
 }

 FUNC_15(VAR_13, 0, +VAR_18, 0);
 FUNC_8(VAR_6, -(s64)VAR_18, VAR_6->i_inode.i_uid,
     VAR_6->i_inode.i_gid);

 VAR_6->i_inode.i_mtime = VAR_6->i_inode.i_ctime = VAR_0;

 FUNC_5(VAR_6, VAR_7->b_data);

 FUNC_20(&VAR_6->i_rw_mutex);

 FUNC_18(VAR_13);

out_rg_gunlock:
 FUNC_6(VAR_14.rl_rgrps, VAR_14.rl_ghs);
out_rlist:
 FUNC_12(&VAR_14);
out:
 return VAR_24;
}

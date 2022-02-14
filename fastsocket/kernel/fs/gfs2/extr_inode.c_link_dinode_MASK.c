
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct gfs2_sbd {scalar_t__ sd_max_dirres; } ;
struct TYPE_5__ {int i_nlink; int i_mode; int i_gid; int i_uid; } ;
struct gfs2_inode {int i_gl; TYPE_2__ i_inode; TYPE_1__* i_rgd; } ;
struct gfs2_alloc_parms {scalar_t__ target; } ;
struct buffer_head {int b_data; } ;
struct TYPE_4__ {scalar_t__ rd_length; } ;


 struct gfs2_sbd* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct gfs2_inode*,int ) ;
 int FUNC_5 (TYPE_2__*,struct qstr const*,struct gfs2_inode*,int ) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_8 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_9 (struct gfs2_inode*,int ,int ) ;
 int FUNC_10 (struct gfs2_inode*,int ,int ) ;
 int FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (int ,struct buffer_head*) ;
 int FUNC_13 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_14 (struct gfs2_sbd*) ;

__attribute__((used)) static int FUNC_15(struct gfs2_inode *VAR_5, const struct qstr *VAR_6,
         struct gfs2_inode *VAR_7, int VAR_8)
{
 struct gfs2_sbd *VAR_9 = FUNC_0(&VAR_5->i_inode);
 struct buffer_head *VAR_10;
 struct gfs2_alloc_parms VAR_11 = { .target = VAR_9->sd_max_dirres, };
 int VAR_12;

 VAR_12 = FUNC_10(VAR_5, VAR_0, VAR_0);
 if (VAR_12)
  return VAR_12;

 if (VAR_8) {
  VAR_12 = FUNC_9(VAR_5, VAR_5->i_inode.i_uid, VAR_5->i_inode.i_gid);
  if (VAR_12)
   goto fail_quota_locks;

  VAR_12 = FUNC_7(VAR_5, &VAR_11);
  if (VAR_12)
   goto fail_quota_locks;

  VAR_12 = FUNC_13(VAR_9, VAR_9->sd_max_dirres +
      VAR_5->i_rgd->rd_length +
      2 * VAR_1 +
      VAR_4 + VAR_3, 0);
  if (VAR_12)
   goto fail_ipreserv;
 } else {
  VAR_12 = FUNC_13(VAR_9, VAR_2 + 2 * VAR_1, 0);
  if (VAR_12)
   goto fail_quota_locks;
 }

 VAR_12 = FUNC_5(&VAR_5->i_inode, VAR_6, VAR_7, FUNC_1(VAR_7->i_inode.i_mode));
 if (VAR_12)
  goto fail_end_trans;

 VAR_12 = FUNC_8(VAR_7, &VAR_10);
 if (VAR_12)
  goto fail_end_trans;
 VAR_7->i_inode.i_nlink = FUNC_2(VAR_7->i_inode.i_mode) ? 2 : 1;
 FUNC_12(VAR_7->i_gl, VAR_10);
 FUNC_4(VAR_7, VAR_10->b_data);
 FUNC_3(VAR_10);
 return 0;

fail_end_trans:
 FUNC_14(VAR_9);
fail_ipreserv:
 FUNC_6(VAR_5);
fail_quota_locks:
 FUNC_11(VAR_5);
 return VAR_12;
}

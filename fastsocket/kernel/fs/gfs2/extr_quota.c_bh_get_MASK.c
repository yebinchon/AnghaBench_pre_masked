
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {unsigned int sd_qc_per_block; int sd_quota_mutex; int sd_qc_inode; } ;
struct gfs2_quota_data {unsigned int qd_slot; int qd_bh_count; struct gfs2_quota_change* qd_bh_qc; struct buffer_head* qd_bh; TYPE_1__* qd_gl; } ;
struct gfs2_quota_change {int dummy; } ;
struct gfs2_meta_header {int dummy; } ;
struct TYPE_4__ {int i_blkbits; } ;
struct gfs2_inode {int i_gl; TYPE_2__ i_inode; } ;
struct buffer_head {int b_size; scalar_t__ b_data; int b_blocknr; int b_state; } ;
struct TYPE_3__ {struct gfs2_sbd* gl_sbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (TYPE_2__*,unsigned int,struct buffer_head*,int ) ;
 int FUNC_3 (int ,int ,int ,struct buffer_head**) ;
 scalar_t__ FUNC_4 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct gfs2_quota_data *VAR_3)
{
 struct gfs2_sbd *VAR_4 = VAR_3->qd_gl->gl_sbd;
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_4->sd_qc_inode);
 unsigned int VAR_6, VAR_7;
 struct buffer_head *VAR_8;
 int VAR_9;
 struct buffer_head VAR_10 = { .b_state = 0, .b_blocknr = 0 };

 FUNC_5(&VAR_4->sd_quota_mutex);

 if (VAR_3->qd_bh_count++) {
  FUNC_6(&VAR_4->sd_quota_mutex);
  return 0;
 }

 VAR_6 = VAR_3->qd_slot / VAR_4->sd_qc_per_block;
 VAR_7 = VAR_3->qd_slot % VAR_4->sd_qc_per_block;

 VAR_10.b_size = 1 << VAR_5->i_inode.i_blkbits;
 VAR_9 = FUNC_2(&VAR_5->i_inode, VAR_6, &VAR_10, 0);
 if (VAR_9)
  goto fail;
 VAR_9 = FUNC_3(VAR_5->i_gl, VAR_10.b_blocknr, VAR_0, &VAR_8);
 if (VAR_9)
  goto fail;
 VAR_9 = -VAR_1;
 if (FUNC_4(VAR_4, VAR_8, VAR_2))
  goto fail_brelse;

 VAR_3->qd_bh = VAR_8;
 VAR_3->qd_bh_qc = (struct gfs2_quota_change *)
  (VAR_8->b_data + sizeof(struct gfs2_meta_header) +
   VAR_7 * sizeof(struct gfs2_quota_change));

 FUNC_6(&VAR_4->sd_quota_mutex);

 return 0;

fail_brelse:
 FUNC_1(VAR_8);
fail:
 VAR_3->qd_bh_count--;
 FUNC_6(&VAR_4->sd_quota_mutex);
 return VAR_9;
}

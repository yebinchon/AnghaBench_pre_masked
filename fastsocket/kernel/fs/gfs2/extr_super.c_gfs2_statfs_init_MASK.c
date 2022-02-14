
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_statfs_change_host {int dummy; } ;
struct TYPE_2__ {scalar_t__ ar_spectator; } ;
struct gfs2_sbd {int sd_statfs_spin; TYPE_1__ sd_args; struct gfs2_statfs_change_host sd_statfs_local; int sd_sc_inode; struct gfs2_statfs_change_host sd_statfs_master; int sd_statfs_inode; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_5 (struct gfs2_statfs_change_host*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct gfs2_sbd *VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_2->sd_statfs_inode);
 struct gfs2_statfs_change_host *VAR_4 = &VAR_2->sd_statfs_master;
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_2->sd_sc_inode);
 struct gfs2_statfs_change_host *VAR_6 = &VAR_2->sd_statfs_local;
 struct buffer_head *VAR_7, *VAR_8;
 struct gfs2_holder VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_3->i_gl, VAR_1, VAR_0,
       &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_3, &VAR_7);
 if (VAR_10)
  goto out;

 if (VAR_2->sd_args.ar_spectator) {
  FUNC_6(&VAR_2->sd_statfs_spin);
  FUNC_5(VAR_4, VAR_7->b_data +
          sizeof(struct gfs2_dinode));
  FUNC_7(&VAR_2->sd_statfs_spin);
 } else {
  VAR_10 = FUNC_4(VAR_5, &VAR_8);
  if (VAR_10)
   goto out_m_bh;

  FUNC_6(&VAR_2->sd_statfs_spin);
  FUNC_5(VAR_4, VAR_7->b_data +
          sizeof(struct gfs2_dinode));
  FUNC_5(VAR_6, VAR_8->b_data +
          sizeof(struct gfs2_dinode));
  FUNC_7(&VAR_2->sd_statfs_spin);

  FUNC_1(VAR_8);
 }

out_m_bh:
 FUNC_1(VAR_7);
out:
 FUNC_2(&VAR_9);
 return 0;
}

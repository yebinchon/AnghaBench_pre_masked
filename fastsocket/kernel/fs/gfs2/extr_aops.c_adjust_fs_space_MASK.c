
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {TYPE_1__* i_sb; } ;
struct gfs2_statfs_change_host {scalar_t__ sc_total; } ;
struct gfs2_sbd {int sd_statfs_spin; struct gfs2_statfs_change_host sd_statfs_local; struct gfs2_statfs_change_host sd_statfs_master; int sd_sc_inode; int sd_statfs_inode; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {struct gfs2_sbd* s_fs_info; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct gfs2_sbd*,char*,unsigned long long) ;
 scalar_t__ FUNC_3 (struct gfs2_inode*,struct buffer_head**) ;
 scalar_t__ FUNC_4 (struct gfs2_sbd*) ;
 int FUNC_5 (struct gfs2_sbd*,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (struct gfs2_statfs_change_host*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct gfs2_sbd*,struct buffer_head*,struct buffer_head*) ;

__attribute__((used)) static void FUNC_10(struct inode *VAR_0)
{
 struct gfs2_sbd *VAR_1 = VAR_0->i_sb->s_fs_info;
 struct gfs2_inode *VAR_2 = FUNC_0(VAR_1->sd_statfs_inode);
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_1->sd_sc_inode);
 struct gfs2_statfs_change_host *VAR_4 = &VAR_1->sd_statfs_master;
 struct gfs2_statfs_change_host *VAR_5 = &VAR_1->sd_statfs_local;
 struct buffer_head *VAR_6, *VAR_7;
 u64 VAR_8, VAR_9;


 VAR_8 = FUNC_4(VAR_1);
 if (FUNC_3(VAR_2, &VAR_6) != 0)
  return;

 FUNC_7(&VAR_1->sd_statfs_spin);
 FUNC_6(VAR_4, VAR_6->b_data +
         sizeof(struct gfs2_dinode));
 if (VAR_8 > (VAR_4->sc_total + VAR_5->sc_total))
  VAR_9 = VAR_8 - (VAR_4->sc_total + VAR_5->sc_total);
 else
  VAR_9 = 0;
 FUNC_8(&VAR_1->sd_statfs_spin);
 FUNC_2(VAR_1, "File system extended by %llu blocks.\n",
  (unsigned long long)VAR_9);
 FUNC_5(VAR_1, VAR_9, VAR_9, 0);

 if (FUNC_3(VAR_3, &VAR_7) != 0)
  goto out;
 FUNC_9(VAR_1, VAR_6, VAR_7);
 FUNC_1(VAR_7);
out:
 FUNC_1(VAR_6);
}

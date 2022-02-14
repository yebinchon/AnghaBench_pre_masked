
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct kstatfs {int f_namelen; scalar_t__ f_ffree; scalar_t__ f_files; scalar_t__ f_bavail; scalar_t__ f_bfree; int f_blocks; int f_bsize; int f_type; } ;
struct gfs2_statfs_change_host {scalar_t__ sc_free; scalar_t__ sc_dinodes; int sc_total; } ;
struct TYPE_4__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_2__ sd_sb; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_3__ {struct super_block* i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfs2_sbd*) ;
 int FUNC_1 (struct gfs2_sbd*,struct gfs2_statfs_change_host*) ;
 int FUNC_2 (struct gfs2_sbd*,struct gfs2_statfs_change_host*) ;
 scalar_t__ FUNC_3 (struct gfs2_sbd*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_3, struct kstatfs *VAR_4)
{
 struct super_block *VAR_5 = VAR_3->d_inode->i_sb;
 struct gfs2_sbd *VAR_6 = VAR_5->s_fs_info;
 struct gfs2_statfs_change_host VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8)
  return VAR_8;

 if (FUNC_3(VAR_6, VAR_2))
  VAR_8 = FUNC_2(VAR_6, &VAR_7);
 else
  VAR_8 = FUNC_1(VAR_6, &VAR_7);

 if (VAR_8)
  return VAR_8;

 VAR_4->f_type = VAR_1;
 VAR_4->f_bsize = VAR_6->sd_sb.sb_bsize;
 VAR_4->f_blocks = VAR_7.sc_total;
 VAR_4->f_bfree = VAR_7.sc_free;
 VAR_4->f_bavail = VAR_7.sc_free;
 VAR_4->f_files = VAR_7.sc_dinodes + VAR_7.sc_free;
 VAR_4->f_ffree = VAR_7.sc_free;
 VAR_4->f_namelen = VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int i_mode; unsigned long i_ino; TYPE_1__* i_mapping; int * i_fop; int * i_op; scalar_t__ i_blocks; int i_ctime; int i_atime; int i_mtime; int i_gid; int i_uid; struct super_block* i_sb; } ;
struct TYPE_5__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct bfs_sb_info {unsigned long si_lasti; int bfs_lock; int si_freei; int si_imap; } ;
struct TYPE_6__ {unsigned long i_dsk_ino; scalar_t__ i_eblock; scalar_t__ i_sblock; } ;
struct TYPE_4__ {int * a_ops; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 struct bfs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*,int ,int ,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (char*,struct super_block*) ;
 unsigned long FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct inode* FUNC_14 (struct super_block*) ;
 int FUNC_15 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_6, struct dentry *VAR_7, int VAR_8,
      struct nameidata *VAR_9)
{
 int VAR_10;
 struct inode *VAR_11;
 struct super_block *VAR_12 = VAR_6->i_sb;
 struct bfs_sb_info *VAR_13 = FUNC_1(VAR_12);
 unsigned long VAR_14;

 VAR_11 = FUNC_14(VAR_12);
 if (!VAR_11)
  return -VAR_1;
 FUNC_12(&VAR_13->bfs_lock);
 VAR_14 = FUNC_7(VAR_13->si_imap, VAR_13->si_lasti);
 if (VAR_14 > VAR_13->si_lasti) {
  FUNC_13(&VAR_13->bfs_lock);
  FUNC_10(VAR_11);
  return -VAR_1;
 }
 FUNC_15(VAR_14, VAR_13->si_imap);
 VAR_13->si_freei--;
 VAR_11->i_uid = FUNC_4();
 VAR_11->i_gid = (VAR_6->i_mode & VAR_2) ? VAR_6->i_gid : FUNC_3();
 VAR_11->i_mtime = VAR_11->i_atime = VAR_11->i_ctime = VAR_0;
 VAR_11->i_blocks = 0;
 VAR_11->i_op = &VAR_4;
 VAR_11->i_fop = &VAR_5;
 VAR_11->i_mapping->a_ops = &VAR_3;
 VAR_11->i_mode = VAR_8;
 VAR_11->i_ino = VAR_14;
 FUNC_0(VAR_11)->i_dsk_ino = VAR_14;
 FUNC_0(VAR_11)->i_sblock = 0;
 FUNC_0(VAR_11)->i_eblock = 0;
 FUNC_9(VAR_11);
        FUNC_11(VAR_11);
 FUNC_6("create", VAR_12);

 VAR_10 = FUNC_2(VAR_6, VAR_7->d_name.name, VAR_7->d_name.len,
       VAR_11->i_ino);
 if (VAR_10) {
  FUNC_8(VAR_11);
  FUNC_13(&VAR_13->bfs_lock);
  FUNC_10(VAR_11);
  return VAR_10;
 }
 FUNC_13(&VAR_13->bfs_lock);
 FUNC_5(VAR_7, VAR_11);
 return 0;
}

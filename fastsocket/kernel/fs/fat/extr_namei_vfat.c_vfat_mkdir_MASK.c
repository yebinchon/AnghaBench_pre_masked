
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {int i_nlink; struct timespec i_ctime; struct timespec i_atime; struct timespec i_mtime; int i_version; struct super_block* i_sb; } ;
struct fat_slot_info {int bh; int i_pos; int de; } ;
struct dentry {TYPE_2__* d_parent; int d_time; int d_name; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_version; } ;


 struct timespec VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*,struct timespec*) ;
 struct inode* FUNC_5 (struct super_block*,int ,int ) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct inode*,int *,int,int,struct timespec*,struct fat_slot_info*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 struct super_block *VAR_4 = VAR_1->i_sb;
 struct inode *VAR_5;
 struct fat_slot_info VAR_6;
 struct timespec VAR_7;
 int VAR_8, VAR_9;

 FUNC_8(VAR_4);

 VAR_7 = VAR_0;
 VAR_9 = FUNC_4(VAR_1, &VAR_7);
 if (VAR_9 < 0) {
  VAR_8 = VAR_9;
  goto out;
 }
 VAR_8 = FUNC_10(VAR_1, &VAR_2->d_name, 1, VAR_9, &VAR_7, &VAR_6);
 if (VAR_8)
  goto out_free;
 VAR_1->i_version++;
 FUNC_7(VAR_1);

 VAR_5 = FUNC_5(VAR_4, VAR_6.de, VAR_6.i_pos);
 FUNC_2(VAR_6.bh);
 if (FUNC_0(VAR_5)) {
  VAR_8 = FUNC_1(VAR_5);

  goto out;
 }
 VAR_5->i_version++;
 VAR_5->i_nlink = 2;
 VAR_5->i_mtime = VAR_5->i_atime = VAR_5->i_ctime = VAR_7;


 VAR_2->d_time = VAR_2->d_parent->d_inode->i_version;
 FUNC_3(VAR_2, VAR_5);

 FUNC_9(VAR_4);
 return 0;

out_free:
 FUNC_6(VAR_1, VAR_9);
out:
 FUNC_9(VAR_4);
 return VAR_8;
}

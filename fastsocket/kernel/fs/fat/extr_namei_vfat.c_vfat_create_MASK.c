
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct super_block {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {struct timespec i_ctime; struct timespec i_atime; struct timespec i_mtime; int i_version; struct super_block* i_sb; } ;
struct fat_slot_info {int bh; int i_pos; int de; } ;
struct dentry {TYPE_2__* d_parent; int d_time; int d_name; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_version; } ;


 struct timespec VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,int ,int ) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct inode*,int *,int ,int ,struct timespec*,struct fat_slot_info*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3,
         struct nameidata *VAR_4)
{
 struct super_block *VAR_5 = VAR_1->i_sb;
 struct inode *VAR_6;
 struct fat_slot_info VAR_7;
 struct timespec VAR_8;
 int VAR_9;

 FUNC_5(VAR_5);

 VAR_8 = VAR_0;
 VAR_9 = FUNC_7(VAR_1, &VAR_2->d_name, 0, 0, &VAR_8, &VAR_7);
 if (VAR_9)
  goto out;
 VAR_1->i_version++;

 VAR_6 = FUNC_4(VAR_5, VAR_7.de, VAR_7.i_pos);
 FUNC_2(VAR_7.bh);
 if (FUNC_0(VAR_6)) {
  VAR_9 = FUNC_1(VAR_6);
  goto out;
 }
 VAR_6->i_version++;
 VAR_6->i_mtime = VAR_6->i_atime = VAR_6->i_ctime = VAR_8;


 VAR_2->d_time = VAR_2->d_parent->d_inode->i_version;
 FUNC_3(VAR_2, VAR_6);
out:
 FUNC_6(VAR_5);
 return VAR_9;
}

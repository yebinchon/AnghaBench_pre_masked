
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ctime; struct super_block* i_sb; } ;
struct fat_slot_info {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct super_block*,struct inode*,struct inode*) ;
 int FUNC_3 (struct inode*,struct fat_slot_info*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct inode*,int ,int ,struct fat_slot_info*) ;
 int FUNC_6 (struct super_block*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = VAR_2->d_inode;
 struct super_block *VAR_4= VAR_3->i_sb;
 struct fat_slot_info VAR_5;
 int VAR_6;

 FUNC_4(VAR_4);
 VAR_6 = FUNC_5(VAR_1, VAR_2->d_name.name, VAR_2->d_name.len, &VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_3(VAR_1, &VAR_5);
 if (VAR_6)
  goto out;
 FUNC_0(VAR_3);
 VAR_3->i_ctime = VAR_0;
 FUNC_1(VAR_3);
out:
 FUNC_6(VAR_4);
 if (!VAR_6)
  VAR_6 = FUNC_2(VAR_4, VAR_1, VAR_3);

 return VAR_6;
}

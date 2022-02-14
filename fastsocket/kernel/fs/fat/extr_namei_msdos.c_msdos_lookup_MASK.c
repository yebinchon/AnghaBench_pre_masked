
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fat_slot_info {int bh; int i_pos; int de; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {int * d_op; TYPE_1__ d_name; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 struct dentry* FUNC_4 (struct inode*,struct dentry*) ;
 struct inode* FUNC_5 (struct super_block*,int ,int ) ;
 int FUNC_6 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_7 (struct inode*,int ,int ,struct fat_slot_info*) ;
 int FUNC_8 (struct super_block*) ;

__attribute__((used)) static struct dentry *FUNC_9(struct inode *VAR_2, struct dentry *VAR_3,
       struct nameidata *VAR_4)
{
 struct super_block *VAR_5 = VAR_2->i_sb;
 struct fat_slot_info VAR_6;
 struct inode *VAR_7;
 int VAR_8;

 FUNC_6(VAR_5);

 VAR_8 = FUNC_7(VAR_2, VAR_3->d_name.name, VAR_3->d_name.len, &VAR_6);
 if (VAR_8) {
  if (VAR_8 == -VAR_0) {
   VAR_7 = ((void*)0);
   goto out;
  }
  goto error;
 }

 VAR_7 = FUNC_5(VAR_5, VAR_6.de, VAR_6.i_pos);
 FUNC_3(VAR_6.bh);
 if (FUNC_1(VAR_7)) {
  VAR_8 = FUNC_2(VAR_7);
  goto error;
 }
out:
 FUNC_8(VAR_5);
 VAR_3->d_op = &VAR_1;
 VAR_3 = FUNC_4(VAR_7, VAR_3);
 if (VAR_3)
  VAR_3->d_op = &VAR_1;
 return VAR_3;

error:
 FUNC_8(VAR_5);
 return FUNC_0(VAR_8);
}

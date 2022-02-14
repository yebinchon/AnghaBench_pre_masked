
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {TYPE_1__* s_root; } ;
struct nameidata {int dummy; } ;
struct inode {int i_mode; struct super_block* i_sb; } ;
struct fat_slot_info {int bh; int i_pos; int de; } ;
struct dentry {int d_flags; TYPE_3__* d_parent; int d_time; int d_op; int d_name; } ;
struct TYPE_6__ {TYPE_2__* d_inode; } ;
struct TYPE_5__ {int i_version; } ;
struct TYPE_4__ {int d_op; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct dentry* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_8 (struct inode*,struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 struct inode* FUNC_10 (struct super_block*,int ,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct super_block*) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (struct inode*,int *,struct fat_slot_info*) ;

__attribute__((used)) static struct dentry *FUNC_15(struct inode *VAR_2, struct dentry *VAR_3,
      struct nameidata *VAR_4)
{
 struct super_block *VAR_5 = VAR_2->i_sb;
 struct fat_slot_info VAR_6;
 struct inode *VAR_7;
 struct dentry *VAR_8;
 int VAR_9;

 FUNC_12(VAR_5);

 VAR_9 = FUNC_14(VAR_2, &VAR_3->d_name, &VAR_6);
 if (VAR_9) {
  if (VAR_9 == -VAR_1) {
   VAR_7 = ((void*)0);
   goto out;
  }
  goto error;
 }

 VAR_7 = FUNC_10(VAR_5, VAR_6.de, VAR_6.i_pos);
 FUNC_5(VAR_6.bh);
 if (FUNC_2(VAR_7)) {
  VAR_9 = FUNC_3(VAR_7);
  goto error;
 }

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8 && !(VAR_8->d_flags & VAR_0)) {







  FUNC_0(FUNC_9(VAR_8));
  if (!FUNC_4(VAR_7->i_mode))
   FUNC_7(VAR_8, VAR_3);
  FUNC_11(VAR_7);
  FUNC_13(VAR_5);
  return VAR_8;
 }
out:
 FUNC_13(VAR_5);
 VAR_3->d_op = VAR_5->s_root->d_op;
 VAR_3->d_time = VAR_3->d_parent->d_inode->i_version;
 VAR_3 = FUNC_8(VAR_7, VAR_3);
 if (VAR_3) {
  VAR_3->d_op = VAR_5->s_root->d_op;
  VAR_3->d_time = VAR_3->d_parent->d_inode->i_version;
 }
 return VAR_3;

error:
 FUNC_13(VAR_5);
 return FUNC_1(VAR_9);
}

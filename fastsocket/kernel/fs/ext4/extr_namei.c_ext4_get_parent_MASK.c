
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {char* name; int len; } ;
struct inode {int dummy; } ;
struct ext4_dir_entry_2 {int inode; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct buffer_head {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 struct dentry* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 struct buffer_head* FUNC_4 (TYPE_1__*,struct qstr const*,struct ext4_dir_entry_2**) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

struct dentry *FUNC_8(struct dentry *VAR_2)
{
 __u32 VAR_3;
 struct inode *VAR_4;
 static const struct qstr VAR_5 = {
  .name = "..",
  .len = 2,
 };
 struct ext4_dir_entry_2 * VAR_6;
 struct buffer_head *VAR_7;

 VAR_7 = FUNC_4(VAR_2->d_inode, &VAR_5, &VAR_6);
 VAR_4 = ((void*)0);
 if (!VAR_7)
  return FUNC_0(-VAR_1);
 VAR_3 = FUNC_7(VAR_6->inode);
 FUNC_1(VAR_7);

 if (!FUNC_6(VAR_2->d_inode->i_sb, VAR_3)) {
  FUNC_3(VAR_2->d_inode->i_sb,
      "bad inode number: %u", VAR_3);
  return FUNC_0(-VAR_0);
 }

 return FUNC_2(FUNC_5(VAR_2->d_inode->i_sb, VAR_3));
}

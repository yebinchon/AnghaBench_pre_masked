
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct ext4_dir_entry_2 {int inode; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct dentry* FUNC_5 (struct inode*,struct dentry*) ;
 int FUNC_6 (int ,char*,int ) ;
 struct buffer_head* FUNC_7 (struct inode*,TYPE_1__*,struct ext4_dir_entry_2**) ;
 struct inode* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static struct dentry *FUNC_12(struct inode *VAR_4, struct dentry *VAR_5, struct nameidata *VAR_6)
{
 struct inode *VAR_7;
 struct ext4_dir_entry_2 *VAR_8;
 struct buffer_head *VAR_9;

 if (VAR_5->d_name.len > VAR_3)
  return FUNC_1(-VAR_1);

 VAR_9 = FUNC_7(VAR_4, &VAR_5->d_name, &VAR_8);
 VAR_7 = ((void*)0);
 if (VAR_9) {
  __u32 VAR_10 = FUNC_10(VAR_8->inode);
  FUNC_4(VAR_9);
  if (!FUNC_9(VAR_4->i_sb, VAR_10)) {
   FUNC_6(VAR_4->i_sb, "bad inode number: %u", VAR_10);
   return FUNC_1(-VAR_0);
  }
  VAR_7 = FUNC_8(VAR_4->i_sb, VAR_10);
  if (FUNC_11(FUNC_2(VAR_7))) {
   if (FUNC_3(VAR_7) == -VAR_2) {
    FUNC_6(VAR_4->i_sb,
      "deleted inode referenced: %u",
      VAR_10);
    return FUNC_1(-VAR_0);
   } else {
    return FUNC_0(VAR_7);
   }
  }
 }
 return FUNC_5(VAR_7, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {char* name; int len; } ;
struct ext3_dir_entry_2 {int inode; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 struct dentry* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,unsigned long) ;
 struct buffer_head* FUNC_4 (TYPE_1__*,struct qstr*,struct ext3_dir_entry_2**) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 unsigned long FUNC_7 (int ) ;

struct dentry *FUNC_8(struct dentry *VAR_2)
{
 unsigned long VAR_3;
 struct qstr VAR_4 = {.name = "..", .len = 2};
 struct ext3_dir_entry_2 * VAR_5;
 struct buffer_head *VAR_6;

 VAR_6 = FUNC_4(VAR_2->d_inode, &VAR_4, &VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_1);
 VAR_3 = FUNC_7(VAR_5->inode);
 FUNC_1(VAR_6);

 if (!FUNC_6(VAR_2->d_inode->i_sb, VAR_3)) {
  FUNC_3(VAR_2->d_inode->i_sb, "ext3_get_parent",
      "bad inode number: %lu", VAR_3);
  return FUNC_0(-VAR_0);
 }

 return FUNC_2(FUNC_5(VAR_2->d_inode->i_sb, VAR_3));
}

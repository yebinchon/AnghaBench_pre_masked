
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; int i_sb; } ;
struct TYPE_3__ {int name; int len; } ;
struct dentry {TYPE_2__* d_inode; struct dentry* d_parent; int d_lock; TYPE_1__ d_name; } ;
struct autofs_sb_info {int version; } ;
struct autofs_info {int dentry; int count; } ;
struct TYPE_4__ {scalar_t__ i_size; } ;


 int FUNC_0 (char*,struct dentry*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct dentry*) ;
 struct autofs_info* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_8 (int ) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_3, struct dentry *VAR_4)
{
 struct autofs_sb_info *VAR_5 = FUNC_8(VAR_3->i_sb);
 struct autofs_info *VAR_6 = FUNC_6(VAR_4);
 struct autofs_info *VAR_7;

 FUNC_0("dentry %p, removing %.*s",
  VAR_4, VAR_4->d_name.len, VAR_4->d_name.name);

 if (!FUNC_7(VAR_5))
  return -VAR_0;

 FUNC_13(&VAR_2);
 if (!FUNC_2(VAR_4)) {
  FUNC_14(&VAR_2);
  return -VAR_1;
 }
 FUNC_5(VAR_4);
 FUNC_13(&VAR_4->d_lock);
 FUNC_1(VAR_4);
 FUNC_14(&VAR_4->d_lock);
 FUNC_14(&VAR_2);

 if (VAR_5->version < 5)
  FUNC_9(VAR_4);

 if (FUNC_4(&VAR_6->count)) {
  VAR_7 = FUNC_6(VAR_4->d_parent);
  if (VAR_7 && VAR_4->d_parent != VAR_4)
   FUNC_3(&VAR_7->count);
 }
 FUNC_11(VAR_6->dentry);
 VAR_4->d_inode->i_size = 0;
 FUNC_10(VAR_4->d_inode);

 if (VAR_3->i_nlink)
  FUNC_12(VAR_3);

 return 0;
}

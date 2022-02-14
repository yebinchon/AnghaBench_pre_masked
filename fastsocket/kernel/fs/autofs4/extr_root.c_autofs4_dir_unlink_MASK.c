
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mtime; int i_sb; } ;
struct dentry {int d_lock; TYPE_1__* d_inode; struct dentry* d_parent; } ;
struct autofs_sb_info {int dummy; } ;
struct autofs_info {int dentry; int count; } ;
struct TYPE_2__ {scalar_t__ i_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*) ;
 struct autofs_info* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_4, struct dentry *VAR_5)
{
 struct autofs_sb_info *VAR_6 = FUNC_6(VAR_4->i_sb);
 struct autofs_info *VAR_7 = FUNC_4(VAR_5);
 struct autofs_info *VAR_8;


 if (!FUNC_5(VAR_6) && !FUNC_7(VAR_0))
  return -VAR_2;

 if (FUNC_2(&VAR_7->count)) {
  VAR_8 = FUNC_4(VAR_5->d_parent);
  if (VAR_8 && VAR_5->d_parent != VAR_5)
   FUNC_1(&VAR_8->count);
 }
 FUNC_9(VAR_7->dentry);

 VAR_5->d_inode->i_size = 0;
 FUNC_8(VAR_5->d_inode);

 VAR_4->i_mtime = VAR_1;

 FUNC_10(&VAR_3);
 FUNC_3(VAR_5);
 FUNC_10(&VAR_5->d_lock);
 FUNC_0(VAR_5);
 FUNC_11(&VAR_5->d_lock);
 FUNC_11(&VAR_3);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int len; } ;
struct dentry {TYPE_2__* d_inode; TYPE_1__ d_name; int d_sb; } ;
struct autofs_sb_info {int fs_lock; } ;
struct autofs_info {int flags; } ;
struct TYPE_4__ {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct dentry*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct autofs_info* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_5 (int ) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_2, bool VAR_3)
{
 struct autofs_sb_info *VAR_4 = FUNC_5(VAR_2->d_sb);
 struct autofs_info *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 FUNC_0("dentry=%p %.*s",
  VAR_2, VAR_2->d_name.len, VAR_2->d_name.name);


 if (FUNC_4(VAR_4) || VAR_3) {
  if (!FUNC_6(VAR_2))
   return -VAR_1;
  return 0;
 }


 FUNC_7(VAR_2);





 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  return VAR_6;

 FUNC_9(&VAR_4->fs_lock);







 if (!(VAR_5->flags & VAR_0)) {






  if ((!FUNC_6(VAR_2) && !FUNC_8(VAR_2)) ||
      (VAR_2->d_inode && FUNC_1(VAR_2->d_inode->i_mode)))
   VAR_6 = -VAR_1;
 }
 FUNC_10(&VAR_4->fs_lock);

 return VAR_6;
}

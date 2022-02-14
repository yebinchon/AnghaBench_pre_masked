
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int len; } ;
struct dentry {TYPE_1__ d_name; int d_sb; } ;
struct autofs_sb_info {int fs_lock; } ;
struct autofs_info {int flags; int expire_complete; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 struct autofs_info* FUNC_1 (struct dentry*) ;
 struct autofs_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (struct autofs_sb_info*,struct dentry*,int ) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct dentry *VAR_3)
{
 struct autofs_sb_info *VAR_4 = FUNC_2(VAR_3->d_sb);
 struct autofs_info *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;


 FUNC_5(&VAR_4->fs_lock);
 if (VAR_5->flags & VAR_0) {
  FUNC_6(&VAR_4->fs_lock);

  FUNC_0("waiting for expire %p name=%.*s",
    VAR_3, VAR_3->d_name.len, VAR_3->d_name.name);

  VAR_6 = FUNC_3(VAR_4, VAR_3, VAR_2);
  FUNC_7(&VAR_5->expire_complete);

  FUNC_0("expire done status=%d", VAR_6);

  if (FUNC_4(VAR_3))
   return -VAR_1;

  return VAR_6;
 }
 FUNC_6(&VAR_4->fs_lock);

 return 0;
}

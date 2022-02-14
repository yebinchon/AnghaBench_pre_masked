
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file_operations {int dummy; } ;
struct dentry {TYPE_3__* d_inode; } ;
typedef int mode_t ;
struct TYPE_8__ {int i_mutex; } ;
struct TYPE_7__ {TYPE_1__* mnt_sb; } ;
struct TYPE_6__ {struct dentry* s_root; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;


 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,struct dentry*,int,void*,struct file_operations const*) ;
 int FUNC_3 (TYPE_3__*,struct dentry*,int,void*,struct file_operations const*) ;
 int FUNC_4 (TYPE_3__*,struct dentry*,int,void*,struct file_operations const*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (char const*,struct dentry*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_3, mode_t VAR_4,
      struct dentry *VAR_5,
      struct dentry **VAR_6,
      void *VAR_7,
      const struct file_operations *VAR_8)
{
 int VAR_9 = 0;






 if (!VAR_5) {
  if (VAR_2 && VAR_2->mnt_sb) {
   VAR_5 = VAR_2->mnt_sb->s_root;
  }
 }
 if (!VAR_5) {
  FUNC_9("debugfs: Ah! can not find a parent!\n");
  return -VAR_0;
 }

 *VAR_6 = ((void*)0);
 FUNC_7(&VAR_5->d_inode->i_mutex);
 *VAR_6 = FUNC_6(VAR_3, VAR_5, FUNC_10(VAR_3));
 if (!FUNC_0(*VAR_6)) {
  switch (VAR_4 & VAR_1) {
  case 129:
   VAR_9 = FUNC_4(VAR_5->d_inode, *VAR_6, VAR_4,
           VAR_7, VAR_8);
   break;
  case 128:
   VAR_9 = FUNC_3(VAR_5->d_inode, *VAR_6, VAR_4,
          VAR_7, VAR_8);
   break;
  default:
   VAR_9 = FUNC_2(VAR_5->d_inode, *VAR_6, VAR_4,
            VAR_7, VAR_8);
   break;
  }
  FUNC_5(*VAR_6);
 } else
  VAR_9 = FUNC_1(*VAR_6);
 FUNC_8(&VAR_5->d_inode->i_mutex);

 return VAR_9;
}

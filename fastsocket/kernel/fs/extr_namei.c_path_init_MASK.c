
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct dentry* dentry; int * mnt; } ;
struct nameidata {unsigned int flags; TYPE_2__ path; TYPE_2__ root; scalar_t__ depth; int last_type; } ;
struct fs_struct {int lock; TYPE_2__ pwd; } ;
struct file {TYPE_2__ f_path; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_6__ {struct fs_struct* fs; } ;
struct TYPE_4__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_5 ;
 struct file* FUNC_1 (int,int*) ;
 int FUNC_2 (struct file*,int ) ;
 int FUNC_3 (struct file*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nameidata*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(int VAR_6, const char *VAR_7, unsigned int VAR_8, struct nameidata *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 struct file *VAR_12;

 VAR_9->last_type = VAR_3;
 VAR_9->flags = VAR_8;
 VAR_9->depth = 0;
 VAR_9->root.mnt = ((void*)0);

 if (*VAR_7=='/') {
  FUNC_7(VAR_9);
  VAR_9->path = VAR_9->root;
  FUNC_4(&VAR_9->root);
 } else if (VAR_6 == VAR_0) {
  struct fs_struct *VAR_13 = VAR_5->fs;
  FUNC_5(&VAR_13->lock);
  VAR_9->path = VAR_13->pwd;
  FUNC_4(&VAR_13->pwd);
  FUNC_6(&VAR_13->lock);
 } else {
  struct dentry *VAR_14;

  VAR_12 = FUNC_1(VAR_6, &VAR_11);
  VAR_10 = -VAR_1;
  if (!VAR_12)
   goto out_fail;

  VAR_14 = VAR_12->f_path.dentry;

  VAR_10 = -VAR_2;
  if (!FUNC_0(VAR_14->d_inode->i_mode))
   goto fput_fail;





  if (FUNC_8(*VAR_7 == '\0')) {
   VAR_10 = FUNC_2(VAR_12, VAR_4);
   if (VAR_10)
    goto fput_fail;
  }

  VAR_9->path = VAR_12->f_path;
  FUNC_4(&VAR_12->f_path);

  FUNC_3(VAR_12, VAR_11);
 }
 return 0;

fput_fail:
 FUNC_3(VAR_12, VAR_11);
out_fail:
 return VAR_10;
}

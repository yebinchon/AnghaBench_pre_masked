
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iovec {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_io_priv {struct file* file; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_io_priv*,struct iovec const*,unsigned long,size_t,int *,int ) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static ssize_t FUNC_3(struct fuse_io_priv *VAR_1,
      const struct iovec *VAR_2,
      unsigned long VAR_3, loff_t *VAR_4,
      size_t VAR_5)
{
 ssize_t VAR_6;
 struct file *VAR_7 = VAR_1->file;
 struct inode *VAR_8 = VAR_7->f_path.dentry->d_inode;

 if (FUNC_2(VAR_8))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5, VAR_4, 0);

 FUNC_1(VAR_8);

 return VAR_6;
}

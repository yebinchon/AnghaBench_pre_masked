
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
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (struct fuse_io_priv*,struct iovec const*,unsigned long,size_t,int *,int) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct file*,int *,size_t*,int ) ;
 size_t FUNC_3 (struct iovec const*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct fuse_io_priv *VAR_0,
       const struct iovec *VAR_1,
       unsigned long VAR_2, loff_t *VAR_3)
{
 struct file *VAR_4 = VAR_0->file;
 struct inode *VAR_5 = VAR_4->f_path.dentry->d_inode;
 size_t VAR_6 = FUNC_3(VAR_1, VAR_2);
 ssize_t VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_3, &VAR_6, 0);
 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6, VAR_3, 1);

 FUNC_1(VAR_5);

 return VAR_7;
}

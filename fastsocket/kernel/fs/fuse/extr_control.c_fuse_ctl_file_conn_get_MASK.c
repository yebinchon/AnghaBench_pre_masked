
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fuse_conn {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {struct fuse_conn* i_private; } ;


 struct fuse_conn* FUNC_0 (struct fuse_conn*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct fuse_conn *FUNC_3(struct file *VAR_1)
{
 struct fuse_conn *VAR_2;
 FUNC_1(&VAR_0);
 VAR_2 = VAR_1->f_path.dentry->d_inode->i_private;
 if (VAR_2)
  VAR_2 = FUNC_0(VAR_2);
 FUNC_2(&VAR_0);
 return VAR_2;
}

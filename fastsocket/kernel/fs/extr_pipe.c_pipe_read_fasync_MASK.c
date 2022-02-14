
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mutex; TYPE_3__* i_pipe; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_6__ {int fasync_readers; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int FUNC_0 (int,struct file*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = VAR_1->f_path.dentry->d_inode;
 int VAR_4;

 FUNC_1(&VAR_3->i_mutex);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->i_pipe->fasync_readers);
 FUNC_2(&VAR_3->i_mutex);

 return VAR_4;
}

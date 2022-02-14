
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pipe_inode_info {int readers; int writers; int wait; int fasync_readers; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {struct pipe_inode_info* i_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 int FUNC_2 (struct pipe_inode_info*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct file *VAR_2)
{
 struct pipe_inode_info *VAR_3;

 VAR_3 = VAR_2->f_path.dentry->d_inode->i_pipe;

 FUNC_1(VAR_3);
 VAR_3->readers++;
 VAR_3->writers--;
 FUNC_4(&VAR_3->wait);
 FUNC_0(&VAR_3->fasync_readers, VAR_1, VAR_0);
 FUNC_2(VAR_3);





 FUNC_3(VAR_3->wait, VAR_3->readers == 1);

 FUNC_1(VAR_3);
 VAR_3->readers--;
 VAR_3->writers++;
 FUNC_2(VAR_3);
}

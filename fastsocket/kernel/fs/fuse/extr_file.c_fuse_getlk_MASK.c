
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_9__ {int error; } ;
struct TYPE_10__ {int numargs; TYPE_4__ h; TYPE_3__* args; } ;
struct fuse_req {TYPE_5__ out; } ;
struct fuse_lk_out {int lk; } ;
struct fuse_conn {int dummy; } ;
struct file_lock {int dummy; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int outarg ;
struct TYPE_8__ {int size; struct fuse_lk_out* value; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (int *,struct file_lock*) ;
 struct fuse_req* FUNC_3 (struct fuse_conn*) ;
 int FUNC_4 (struct fuse_req*,struct file*,struct file_lock*,int ,int ,int ) ;
 int FUNC_5 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_7 (struct inode*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_1, struct file_lock *VAR_2)
{
 struct inode *VAR_3 = VAR_1->f_path.dentry->d_inode;
 struct fuse_conn *VAR_4 = FUNC_7(VAR_3);
 struct fuse_req *VAR_5;
 struct fuse_lk_out VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_4(VAR_5, VAR_1, VAR_2, VAR_0, 0, 0);
 VAR_5->out.numargs = 1;
 VAR_5->out.args[0].size = sizeof(VAR_6);
 VAR_5->out.args[0].value = &VAR_6;
 FUNC_6(VAR_4, VAR_5);
 VAR_7 = VAR_5->out.h.error;
 FUNC_5(VAR_4, VAR_5);
 if (!VAR_7)
  VAR_7 = FUNC_2(&VAR_6.lk, VAR_2);

 return VAR_7;
}

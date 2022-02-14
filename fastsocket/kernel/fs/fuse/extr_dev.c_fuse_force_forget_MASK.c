
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct TYPE_8__ {int nodeid; int opcode; } ;
struct TYPE_10__ {int numargs; TYPE_4__* args; TYPE_3__ h; } ;
struct fuse_req {scalar_t__ isreply; TYPE_5__ in; } ;
struct fuse_forget_in {int nlookup; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int inarg ;
struct TYPE_9__ {int size; struct fuse_forget_in* value; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 int VAR_0 ;
 struct fuse_req* FUNC_0 (struct fuse_conn*,struct file*) ;
 int FUNC_1 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct fuse_forget_in*,int ,int) ;

void FUNC_4(struct file *VAR_1, u64 VAR_2)
{
 struct inode *VAR_3 = VAR_1->f_path.dentry->d_inode;
 struct fuse_conn *VAR_4 = FUNC_2(VAR_3);
 struct fuse_req *VAR_5;
 struct fuse_forget_in VAR_6;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.nlookup = 1;
 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_5->in.h.opcode = VAR_0;
 VAR_5->in.h.nodeid = VAR_2;
 VAR_5->in.numargs = 1;
 VAR_5->in.args[0].size = sizeof(VAR_6);
 VAR_5->in.args[0].value = &VAR_6;
 VAR_5->isreply = 0;
 FUNC_1(VAR_4, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_13__ {int error; } ;
struct TYPE_14__ {TYPE_6__ h; } ;
struct TYPE_10__ {int nodeid; int opcode; } ;
struct TYPE_12__ {int numargs; TYPE_4__* args; TYPE_3__ h; } ;
struct fuse_req {int force; TYPE_7__ out; TYPE_5__ in; } ;
struct fuse_flush_in {int lock_owner; int fh; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int no_flush; } ;
struct TYPE_9__ {TYPE_1__* dentry; } ;
struct file {struct fuse_file* private_data; TYPE_2__ f_path; } ;
typedef int inarg ;
typedef int fl_owner_t ;
struct TYPE_11__ {int size; struct fuse_flush_in* value; } ;
struct TYPE_8__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fuse_req* FUNC_0 (struct fuse_conn*,struct file*) ;
 int FUNC_1 (struct fuse_conn*,int ) ;
 int FUNC_2 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_3 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct fuse_flush_in*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, fl_owner_t VAR_4)
{
 struct inode *VAR_5 = VAR_3->f_path.dentry->d_inode;
 struct fuse_conn *VAR_6 = FUNC_4(VAR_5);
 struct fuse_file *VAR_7 = VAR_3->private_data;
 struct fuse_req *VAR_8;
 struct fuse_flush_in VAR_9;
 int VAR_10;

 if (FUNC_6(VAR_5))
  return -VAR_0;

 if (VAR_6->no_flush)
  return 0;

 VAR_8 = FUNC_0(VAR_6, VAR_3);
 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.fh = VAR_7->fh;
 VAR_9.lock_owner = FUNC_1(VAR_6, VAR_4);
 VAR_8->in.h.opcode = VAR_2;
 VAR_8->in.h.nodeid = FUNC_5(VAR_5);
 VAR_8->in.numargs = 1;
 VAR_8->in.args[0].size = sizeof(VAR_9);
 VAR_8->in.args[0].value = &VAR_9;
 VAR_8->force = 1;
 FUNC_3(VAR_6, VAR_8);
 VAR_10 = VAR_8->out.h.error;
 FUNC_2(VAR_6, VAR_8);
 if (VAR_10 == -VAR_1) {
  VAR_6->no_flush = 1;
  VAR_10 = 0;
 }
 return VAR_10;
}

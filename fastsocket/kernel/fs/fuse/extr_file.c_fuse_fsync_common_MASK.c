
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
struct TYPE_10__ {TYPE_4__ h; } ;
struct TYPE_6__ {int nodeid; int opcode; } ;
struct TYPE_8__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_5__ out; TYPE_3__ in; } ;
struct fuse_fsync_in {int fsync_flags; int fh; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int no_fsync; int no_fsyncdir; } ;
struct file {struct fuse_file* private_data; } ;
struct dentry {struct inode* d_inode; } ;
typedef int inarg ;
struct TYPE_7__ {int size; struct fuse_fsync_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 struct fuse_req* FUNC_2 (struct fuse_conn*) ;
 int FUNC_3 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_4 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_5 (struct inode*) ;
 struct fuse_conn* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct fuse_fsync_in*,int ,int) ;
 int FUNC_10 (struct inode*,int ) ;

int FUNC_11(struct file *VAR_4, struct dentry *VAR_5, int VAR_6,
        int VAR_7)
{
 struct inode *VAR_8 = VAR_5->d_inode;
 struct fuse_conn *VAR_9 = FUNC_6(VAR_8);
 struct fuse_file *VAR_10 = VAR_4->private_data;
 struct fuse_req *VAR_11;
 struct fuse_fsync_in VAR_12;
 int VAR_13;

 if (FUNC_8(VAR_8))
  return -VAR_0;

 if ((!VAR_7 && VAR_9->no_fsync) || (VAR_7 && VAR_9->no_fsyncdir))
  return 0;






 VAR_13 = FUNC_10(VAR_8, 0);
 if (VAR_13)
  return VAR_13;

 FUNC_5(VAR_8);

 VAR_11 = FUNC_2(VAR_9);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 FUNC_9(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.fh = VAR_10->fh;
 VAR_12.fsync_flags = VAR_6 ? 1 : 0;
 VAR_11->in.h.opcode = VAR_7 ? VAR_3 : VAR_2;
 VAR_11->in.h.nodeid = FUNC_7(VAR_8);
 VAR_11->in.numargs = 1;
 VAR_11->in.args[0].size = sizeof(VAR_12);
 VAR_11->in.args[0].value = &VAR_12;
 FUNC_4(VAR_9, VAR_11);
 VAR_13 = VAR_11->out.h.error;
 FUNC_3(VAR_9, VAR_11);
 if (VAR_13 == -VAR_1) {
  if (VAR_7)
   VAR_9->no_fsyncdir = 1;
  else
   VAR_9->no_fsync = 1;
  VAR_13 = 0;
 }
 return VAR_13;
}

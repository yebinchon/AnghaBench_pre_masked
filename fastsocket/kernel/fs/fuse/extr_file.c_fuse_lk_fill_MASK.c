
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
struct TYPE_12__ {int opcode; int nodeid; } ;
struct TYPE_14__ {int numargs; TYPE_6__* args; TYPE_5__ h; } ;
struct TYPE_11__ {int pid; int type; int end; int start; } ;
struct fuse_lk_in {int lk_flags; TYPE_4__ lk; int owner; int fh; } ;
struct TYPE_10__ {struct fuse_lk_in lk_in; } ;
struct fuse_req {TYPE_7__ in; TYPE_3__ misc; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int dummy; } ;
struct file_lock {int fl_type; int fl_end; int fl_start; int fl_owner; } ;
struct TYPE_9__ {TYPE_1__* dentry; } ;
struct file {struct fuse_file* private_data; TYPE_2__ f_path; } ;
typedef int pid_t ;
struct TYPE_13__ {int size; struct fuse_lk_in* value; } ;
struct TYPE_8__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_conn*,int ) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static void FUNC_3(struct fuse_req *VAR_1, struct file *VAR_2,
    const struct file_lock *VAR_3, int VAR_4, pid_t VAR_5,
    int VAR_6)
{
 struct inode *VAR_7 = VAR_2->f_path.dentry->d_inode;
 struct fuse_conn *VAR_8 = FUNC_1(VAR_7);
 struct fuse_file *VAR_9 = VAR_2->private_data;
 struct fuse_lk_in *VAR_10 = &VAR_1->misc.lk_in;

 VAR_10->fh = VAR_9->fh;
 VAR_10->owner = FUNC_0(VAR_8, VAR_3->fl_owner);
 VAR_10->lk.start = VAR_3->fl_start;
 VAR_10->lk.end = VAR_3->fl_end;
 VAR_10->lk.type = VAR_3->fl_type;
 VAR_10->lk.pid = VAR_5;
 if (VAR_6)
  VAR_10->lk_flags |= VAR_0;
 VAR_1->in.h.opcode = VAR_4;
 VAR_1->in.h.nodeid = FUNC_2(VAR_7);
 VAR_1->in.numargs = 1;
 VAR_1->in.args[0].size = sizeof(*VAR_10);
 VAR_1->in.args[0].value = VAR_10;
}

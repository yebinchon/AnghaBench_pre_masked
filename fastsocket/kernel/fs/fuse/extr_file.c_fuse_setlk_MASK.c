
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_10__ {int error; } ;
struct TYPE_11__ {TYPE_4__ h; } ;
struct fuse_req {TYPE_5__ out; } ;
struct fuse_conn {int dummy; } ;
struct file_lock {int fl_flags; scalar_t__ fl_type; TYPE_3__* fl_lmops; } ;
struct TYPE_8__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int pid_t ;
struct TYPE_12__ {int tgid; } ;
struct TYPE_9__ {scalar_t__ fl_grant; } ;
struct TYPE_7__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 TYPE_6__* VAR_8 ;
 struct fuse_req* FUNC_2 (struct fuse_conn*) ;
 int FUNC_3 (struct fuse_req*,struct file*,struct file_lock*,int,int ,int) ;
 int FUNC_4 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_5 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_9, struct file_lock *VAR_10, int VAR_11)
{
 struct inode *VAR_12 = VAR_9->f_path.dentry->d_inode;
 struct fuse_conn *VAR_13 = FUNC_6(VAR_12);
 struct fuse_req *VAR_14;
 int VAR_15 = (VAR_10->fl_flags & VAR_4) ? VAR_6 : VAR_5;
 pid_t VAR_16 = VAR_10->fl_type != VAR_7 ? VAR_8->tgid : 0;
 int VAR_17;

 if (VAR_10->fl_lmops && VAR_10->fl_lmops->fl_grant) {

  return -VAR_1;
 }


 if (VAR_10->fl_flags & VAR_3)
  return 0;

 VAR_14 = FUNC_2(VAR_13);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 FUNC_3(VAR_14, VAR_9, VAR_10, VAR_15, VAR_16, VAR_11);
 FUNC_5(VAR_13, VAR_14);
 VAR_17 = VAR_14->out.h.error;

 if (VAR_17 == -VAR_0)
  VAR_17 = -VAR_2;
 FUNC_4(VAR_13, VAR_14);
 return VAR_17;
}

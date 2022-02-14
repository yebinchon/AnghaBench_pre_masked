
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
struct kstat {int dummy; } ;
struct inode {int i_mode; } ;
struct TYPE_13__ {int error; } ;
struct TYPE_14__ {int numargs; TYPE_5__ h; TYPE_4__* args; } ;
struct TYPE_9__ {int nodeid; int opcode; } ;
struct TYPE_11__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_6__ out; TYPE_3__ in; } ;
struct TYPE_15__ {int mode; } ;
struct fuse_getattr_in {TYPE_7__ attr; int fh; int getattr_flags; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int minor; } ;
struct fuse_attr_out {TYPE_7__ attr; int fh; int getattr_flags; } ;
struct file {struct fuse_file* private_data; } ;
typedef int outarg ;
typedef int inarg ;
struct TYPE_12__ {int size; struct fuse_getattr_in* value; } ;
struct TYPE_10__ {int size; struct fuse_getattr_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct fuse_getattr_in*) ;
 int FUNC_4 (struct inode*,TYPE_7__*,int ,int ) ;
 int FUNC_5 (struct inode*,TYPE_7__*,struct kstat*) ;
 int FUNC_6 (struct fuse_conn*) ;
 struct fuse_req* FUNC_7 (struct fuse_conn*) ;
 int FUNC_8 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_9 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct fuse_getattr_in*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_5, struct kstat *VAR_6,
      struct file *VAR_7)
{
 int VAR_8;
 struct fuse_getattr_in VAR_9;
 struct fuse_attr_out VAR_10;
 struct fuse_conn *VAR_11 = FUNC_10(VAR_5);
 struct fuse_req *VAR_12;
 u64 VAR_13;

 VAR_12 = FUNC_7(VAR_11);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_13 = FUNC_6(VAR_11);

 FUNC_13(&VAR_9, 0, sizeof(VAR_9));
 FUNC_13(&VAR_10, 0, sizeof(VAR_10));

 if (VAR_7 && FUNC_2(VAR_5->i_mode)) {
  struct fuse_file *VAR_14 = VAR_7->private_data;

  VAR_9.getattr_flags |= VAR_3;
  VAR_9.fh = VAR_14->fh;
 }
 VAR_12->in.h.opcode = VAR_2;
 VAR_12->in.h.nodeid = FUNC_11(VAR_5);
 VAR_12->in.numargs = 1;
 VAR_12->in.args[0].size = sizeof(VAR_9);
 VAR_12->in.args[0].value = &VAR_9;
 VAR_12->out.numargs = 1;
 if (VAR_11->minor < 9)
  VAR_12->out.args[0].size = VAR_1;
 else
  VAR_12->out.args[0].size = sizeof(VAR_10);
 VAR_12->out.args[0].value = &VAR_10;
 FUNC_9(VAR_11, VAR_12);
 VAR_8 = VAR_12->out.h.error;
 FUNC_8(VAR_11, VAR_12);
 if (!VAR_8) {
  if ((VAR_5->i_mode ^ VAR_10.attr.mode) & VAR_4) {
   FUNC_12(VAR_5);
   VAR_8 = -VAR_0;
  } else {
   FUNC_4(VAR_5, &VAR_10.attr,
            FUNC_3(&VAR_10),
            VAR_13);
   if (VAR_6)
    FUNC_5(VAR_5, &VAR_10.attr, VAR_6);
  }
 }
 return VAR_8;
}

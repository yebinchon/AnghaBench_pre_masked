
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct inode {int i_mode; scalar_t__ i_size; int i_mapping; } ;
struct iattr {int ia_valid; int ia_size; } ;
struct TYPE_15__ {int mode; scalar_t__ size; } ;
struct fuse_setattr_in {TYPE_7__ attr; int lock_owner; int valid; int fh; } ;
struct TYPE_13__ {int error; } ;
struct TYPE_14__ {int numargs; TYPE_5__ h; TYPE_4__* args; } ;
struct TYPE_9__ {int nodeid; int opcode; } ;
struct TYPE_11__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_6__ out; TYPE_3__ in; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int flags; int minor; int lock; scalar_t__ atomic_o_trunc; } ;
struct fuse_attr_out {TYPE_7__ attr; int lock_owner; int valid; int fh; } ;
struct file {struct fuse_file* private_data; } ;
typedef int outarg ;
typedef scalar_t__ loff_t ;
typedef int inarg ;
struct TYPE_16__ {int files; } ;
struct TYPE_12__ {int size; struct fuse_setattr_in* value; } ;
struct TYPE_10__ {int size; struct fuse_setattr_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct fuse_setattr_in*) ;
 TYPE_8__* VAR_10 ;
 int FUNC_5 (struct inode*,TYPE_7__*,int ) ;
 struct fuse_req* FUNC_6 (struct fuse_conn*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct fuse_conn*,int ) ;
 int FUNC_9 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_12 (struct inode*) ;
 struct fuse_conn* FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,scalar_t__) ;
 int FUNC_16 (struct iattr*,struct fuse_setattr_in*) ;
 int FUNC_17 (struct inode*,struct iattr*) ;
 int FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct fuse_setattr_in*,int ,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct inode*,scalar_t__,scalar_t__) ;

int FUNC_25(struct inode *VAR_11, struct iattr *VAR_12,
      struct file *VAR_13)
{
 struct fuse_conn *VAR_14 = FUNC_13(VAR_11);
 struct fuse_req *VAR_15;
 struct fuse_setattr_in VAR_16;
 struct fuse_attr_out VAR_17;
 bool VAR_18 = 0;
 loff_t VAR_19;
 int VAR_20;

 if (VAR_14->flags & VAR_7) {
  VAR_20 = FUNC_17(VAR_11, VAR_12);
  if (VAR_20)
   return VAR_20;
 }

 if ((VAR_12->ia_valid & VAR_0) && VAR_14->atomic_o_trunc)
  return 0;

 if (VAR_12->ia_valid & VAR_1) {
  VAR_20 = FUNC_18(VAR_11, VAR_12->ia_size);
  if (VAR_20)
   return VAR_20;
  VAR_18 = 1;
 }

 VAR_15 = FUNC_6(VAR_14);
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 if (VAR_18)
  FUNC_12(VAR_11);

 FUNC_21(&VAR_16, 0, sizeof(VAR_16));
 FUNC_21(&VAR_17, 0, sizeof(VAR_17));
 FUNC_16(VAR_12, &VAR_16);
 if (VAR_13) {
  struct fuse_file *VAR_21 = VAR_13->private_data;
  VAR_16.valid |= VAR_4;
  VAR_16.fh = VAR_21->fh;
 }
 if (VAR_12->ia_valid & VAR_1) {

  VAR_16.valid |= VAR_5;
  VAR_16.lock_owner = FUNC_8(VAR_14, VAR_10->files);
 }
 VAR_15->in.h.opcode = VAR_8;
 VAR_15->in.h.nodeid = FUNC_14(VAR_11);
 VAR_15->in.numargs = 1;
 VAR_15->in.args[0].size = sizeof(VAR_16);
 VAR_15->in.args[0].value = &VAR_16;
 VAR_15->out.numargs = 1;
 if (VAR_14->minor < 9)
  VAR_15->out.args[0].size = VAR_6;
 else
  VAR_15->out.args[0].size = sizeof(VAR_17);
 VAR_15->out.args[0].value = &VAR_17;
 FUNC_11(VAR_14, VAR_15);
 VAR_20 = VAR_15->out.h.error;
 FUNC_9(VAR_14, VAR_15);
 if (VAR_20) {
  if (VAR_20 == -VAR_2)
   FUNC_7(VAR_11);
  goto error;
 }

 if ((VAR_11->i_mode ^ VAR_17.attr.mode) & VAR_9) {
  FUNC_20(VAR_11);
  VAR_20 = -VAR_3;
  goto error;
 }

 FUNC_22(&VAR_14->lock);
 FUNC_5(VAR_11, &VAR_17.attr,
          FUNC_4(&VAR_17));
 VAR_19 = VAR_11->i_size;
 FUNC_15(VAR_11, VAR_17.attr.size);

 if (VAR_18) {

  FUNC_3(VAR_11);
 }
 FUNC_23(&VAR_14->lock);





 if (FUNC_2(VAR_11->i_mode) && VAR_19 != VAR_17.attr.size) {
  FUNC_24(VAR_11, VAR_19, VAR_17.attr.size);
  FUNC_19(VAR_11->i_mapping);
 }

 return 0;

error:
 if (VAR_18)
  FUNC_10(VAR_11);

 return VAR_20;
}

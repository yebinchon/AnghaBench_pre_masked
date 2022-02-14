
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


struct inode {int i_mode; int i_sb; } ;
struct TYPE_10__ {int error; } ;
struct TYPE_11__ {int numargs; TYPE_4__ h; TYPE_3__* args; } ;
struct TYPE_7__ {int nodeid; } ;
struct TYPE_8__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_5__ out; TYPE_2__ in; } ;
struct TYPE_12__ {int mode; } ;
struct fuse_entry_out {int nodeid; TYPE_6__ attr; int generation; } ;
struct fuse_conn {int minor; int inst_mutex; } ;
struct dentry {int dummy; } ;
typedef int outarg ;
struct TYPE_9__ {int size; struct fuse_entry_out* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 struct dentry* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct fuse_entry_out*) ;
 int FUNC_7 (struct dentry*,struct fuse_entry_out*) ;
 struct fuse_req* FUNC_8 (struct fuse_conn*) ;
 struct inode* FUNC_9 (int ,int ,int ,TYPE_6__*,int ,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_12 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_13 (struct fuse_conn*,struct fuse_req*,int ,int) ;
 int FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct fuse_entry_out*,int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct fuse_conn *VAR_5, struct fuse_req *VAR_6,
       struct inode *VAR_7, struct dentry *VAR_8,
       int VAR_9)
{
 struct fuse_entry_out VAR_10;
 struct inode *VAR_11;
 int VAR_12;
 struct fuse_req *VAR_13;

 VAR_13 = FUNC_8(VAR_5);
 if (FUNC_0(VAR_13)) {
  FUNC_11(VAR_5, VAR_6);
  return FUNC_1(VAR_13);
 }

 FUNC_17(&VAR_10, 0, sizeof(VAR_10));
 VAR_6->in.h.nodeid = FUNC_14(VAR_7);
 VAR_6->out.numargs = 1;
 if (VAR_5->minor < 9)
  VAR_6->out.args[0].size = VAR_3;
 else
  VAR_6->out.args[0].size = sizeof(VAR_10);
 VAR_6->out.args[0].value = &VAR_10;
 FUNC_12(VAR_5, VAR_6);
 VAR_12 = VAR_6->out.h.error;
 FUNC_11(VAR_5, VAR_6);
 if (VAR_12)
  goto out_put_forget_req;

 VAR_12 = -VAR_1;
 if (FUNC_15(VAR_10.nodeid))
  goto out_put_forget_req;

 if ((VAR_10.attr.mode ^ VAR_9) & VAR_4)
  goto out_put_forget_req;

 VAR_11 = FUNC_9(VAR_7->i_sb, VAR_10.nodeid, VAR_10.generation,
     &VAR_10.attr, FUNC_6(&VAR_10), 0);
 if (!VAR_11) {
  FUNC_13(VAR_5, VAR_13, VAR_10.nodeid, 1);
  return -VAR_2;
 }
 FUNC_11(VAR_5, VAR_13);

 if (FUNC_2(VAR_11->i_mode)) {
  struct dentry *VAR_14;
  FUNC_18(&VAR_5->inst_mutex);
  VAR_14 = FUNC_3(VAR_11);
  if (VAR_14) {

   FUNC_19(&VAR_5->inst_mutex);
   FUNC_5(VAR_14);
   FUNC_16(VAR_11);
   return -VAR_0;
  }
  FUNC_4(VAR_8, VAR_11);
  FUNC_19(&VAR_5->inst_mutex);
 } else
  FUNC_4(VAR_8, VAR_11);

 FUNC_7(VAR_8, &VAR_10);
 FUNC_10(VAR_7);
 return 0;

 out_put_forget_req:
 FUNC_11(VAR_5, VAR_13);
 return VAR_12;
}

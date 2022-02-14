
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
struct TYPE_11__ {int error; } ;
struct TYPE_12__ {TYPE_5__ h; } ;
struct TYPE_7__ {int nodeid; int opcode; } ;
struct TYPE_9__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_6__ out; TYPE_3__ in; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_10__ {int name; scalar_t__ len; } ;
struct dentry {struct inode* d_inode; TYPE_4__ d_name; } ;
struct TYPE_8__ {int value; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (struct inode*) ;
 struct fuse_req* FUNC_3 (struct fuse_conn*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_8 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;
 struct fuse_conn *VAR_5 = FUNC_9(VAR_2);
 struct fuse_req *VAR_6 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_6->in.h.opcode = VAR_1;
 VAR_6->in.h.nodeid = FUNC_10(VAR_2);
 VAR_6->in.numargs = 1;
 VAR_6->in.args[0].size = VAR_3->d_name.len + 1;
 VAR_6->in.args[0].value = VAR_3->d_name.name;
 FUNC_8(VAR_5, VAR_6);
 VAR_4 = VAR_6->out.h.error;
 FUNC_7(VAR_5, VAR_6);
 if (!VAR_4) {
  struct inode *VAR_7 = VAR_3->d_inode;






  FUNC_2(VAR_7);
  FUNC_4(VAR_7);
  FUNC_4(VAR_2);
  FUNC_6(VAR_3);
 } else if (VAR_4 == -VAR_0)
  FUNC_5(VAR_3);
 return VAR_4;
}

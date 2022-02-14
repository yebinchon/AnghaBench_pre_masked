
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
struct fuse_conn {int no_removexattr; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_7__ {char const* value; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 struct fuse_req* FUNC_2 (struct fuse_conn*) ;
 int FUNC_3 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_4 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_3, const char *VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_inode;
 struct fuse_conn *VAR_6 = FUNC_5(VAR_5);
 struct fuse_req *VAR_7;
 int VAR_8;

 if (VAR_6->no_removexattr)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->in.h.opcode = VAR_2;
 VAR_7->in.h.nodeid = FUNC_6(VAR_5);
 VAR_7->in.numargs = 1;
 VAR_7->in.args[0].size = FUNC_7(VAR_4) + 1;
 VAR_7->in.args[0].value = VAR_4;
 FUNC_4(VAR_6, VAR_7);
 VAR_8 = VAR_7->out.h.error;
 FUNC_3(VAR_6, VAR_7);
 if (VAR_8 == -VAR_0) {
  VAR_6->no_removexattr = 1;
  VAR_8 = -VAR_1;
 }
 return VAR_8;
}

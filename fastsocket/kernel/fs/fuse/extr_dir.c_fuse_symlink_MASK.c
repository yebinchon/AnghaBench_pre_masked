
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_5__ {int opcode; } ;
struct TYPE_8__ {int numargs; TYPE_3__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_4__ in; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_6__ {int len; char const* name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_7__ {int size; char const* value; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int VAR_1 ;
 int FUNC_2 (struct fuse_conn*,struct fuse_req*,struct inode*,struct dentry*,int ) ;
 struct fuse_req* FUNC_3 (struct fuse_conn*) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct dentry *VAR_3,
   const char *VAR_4)
{
 struct fuse_conn *VAR_5 = FUNC_4(VAR_2);
 unsigned VAR_6 = FUNC_5(VAR_4) + 1;
 struct fuse_req *VAR_7 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->in.h.opcode = VAR_0;
 VAR_7->in.numargs = 2;
 VAR_7->in.args[0].size = VAR_3->d_name.len + 1;
 VAR_7->in.args[0].value = VAR_3->d_name.name;
 VAR_7->in.args[1].size = VAR_6;
 VAR_7->in.args[1].value = VAR_4;
 return FUNC_2(VAR_5, VAR_7, VAR_2, VAR_3, VAR_1);
}


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
struct TYPE_8__ {int error; } ;
struct TYPE_10__ {int argvar; int numargs; TYPE_4__* args; TYPE_3__ h; } ;
struct TYPE_6__ {int nodeid; int opcode; } ;
struct TYPE_7__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_5__ out; TYPE_2__ in; } ;
struct fuse_conn {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_9__ {size_t size; char* value; } ;


 int VAR_0 ;
 char* FUNC_0 (struct fuse_req*) ;
 char* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct fuse_req*) ;
 size_t VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 struct fuse_req* FUNC_5 (struct fuse_conn*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_8 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;

__attribute__((used)) static char *FUNC_11(struct dentry *VAR_4)
{
 struct inode *VAR_5 = VAR_4->d_inode;
 struct fuse_conn *VAR_6 = FUNC_9(VAR_5);
 struct fuse_req *VAR_7 = FUNC_5(VAR_6);
 char *VAR_8;

 if (FUNC_2(VAR_7))
  return FUNC_0(VAR_7);

 VAR_8 = (char *) FUNC_3(VAR_2);
 if (!VAR_8) {
  VAR_8 = FUNC_1(-VAR_0);
  goto out;
 }
 VAR_7->in.h.opcode = VAR_1;
 VAR_7->in.h.nodeid = FUNC_10(VAR_5);
 VAR_7->out.argvar = 1;
 VAR_7->out.numargs = 1;
 VAR_7->out.args[0].size = VAR_3 - 1;
 VAR_7->out.args[0].value = VAR_8;
 FUNC_8(VAR_6, VAR_7);
 if (VAR_7->out.h.error) {
  FUNC_4((unsigned long) VAR_8);
  VAR_8 = FUNC_1(VAR_7->out.h.error);
 } else
  VAR_8[VAR_7->out.args[0].size] = '\0';
 out:
 FUNC_7(VAR_6, VAR_7);
 FUNC_6(VAR_5);
 return VAR_8;
}


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
struct fuse_conn {int no_access; } ;
struct fuse_access_in {int mask; } ;
typedef int inarg ;
struct TYPE_7__ {int size; struct fuse_access_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fuse_req*) ;
 struct fuse_req* FUNC_2 (struct fuse_conn*) ;
 int FUNC_3 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_4 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct fuse_access_in*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_5, int VAR_6)
{
 struct fuse_conn *VAR_7 = FUNC_5(VAR_5);
 struct fuse_req *VAR_8;
 struct fuse_access_in VAR_9;
 int VAR_10;

 if (VAR_7->no_access)
  return 0;

 VAR_8 = FUNC_2(VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.mask = VAR_6 & (VAR_3 | VAR_4 | VAR_2);
 VAR_8->in.h.opcode = VAR_1;
 VAR_8->in.h.nodeid = FUNC_6(VAR_5);
 VAR_8->in.numargs = 1;
 VAR_8->in.args[0].size = sizeof(VAR_9);
 VAR_8->in.args[0].value = &VAR_9;
 FUNC_4(VAR_7, VAR_8);
 VAR_10 = VAR_8->out.h.error;
 FUNC_3(VAR_7, VAR_8);
 if (VAR_10 == -VAR_0) {
  VAR_7->no_access = 1;
  VAR_10 = 0;
 }
 return VAR_10;
}

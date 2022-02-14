
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


typedef int u64 ;
struct TYPE_11__ {int error; } ;
struct TYPE_12__ {int numargs; TYPE_5__ h; TYPE_4__* args; } ;
struct TYPE_7__ {int opcode; int nodeid; } ;
struct TYPE_9__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_6__ out; TYPE_3__ in; } ;
struct fuse_open_out {int dummy; } ;
struct fuse_open_in {int flags; } ;
struct fuse_conn {int atomic_o_trunc; } ;
struct file {int f_flags; } ;
typedef int inarg ;
struct TYPE_10__ {int size; struct fuse_open_out* value; } ;
struct TYPE_8__ {int size; struct fuse_open_in* value; } ;


 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fuse_req*) ;
 struct fuse_req* FUNC_2 (struct fuse_conn*) ;
 int FUNC_3 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_4 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_5 (struct fuse_open_in*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct fuse_conn *VAR_4, u64 VAR_5, struct file *VAR_6,
     int VAR_7, struct fuse_open_out *VAR_8)
{
 struct fuse_open_in VAR_9;
 struct fuse_req *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_4);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.flags = VAR_6->f_flags & ~(VAR_0 | VAR_1 | VAR_2);
 if (!VAR_4->atomic_o_trunc)
  VAR_9.flags &= ~VAR_3;
 VAR_10->in.h.opcode = VAR_7;
 VAR_10->in.h.nodeid = VAR_5;
 VAR_10->in.numargs = 1;
 VAR_10->in.args[0].size = sizeof(VAR_9);
 VAR_10->in.args[0].value = &VAR_9;
 VAR_10->out.numargs = 1;
 VAR_10->out.args[0].size = sizeof(*VAR_8);
 VAR_10->out.args[0].value = VAR_8;
 FUNC_4(VAR_4, VAR_10);
 VAR_11 = VAR_10->out.h.error;
 FUNC_3(VAR_4, VAR_10);

 return VAR_11;
}

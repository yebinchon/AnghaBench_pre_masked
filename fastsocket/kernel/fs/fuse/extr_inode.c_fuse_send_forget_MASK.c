
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_5__ {void* nodeid; int opcode; } ;
struct TYPE_7__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_forget_in {void* nlookup; } ;
struct TYPE_8__ {struct fuse_forget_in forget_in; } ;
struct fuse_req {TYPE_3__ in; TYPE_4__ misc; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_6__ {int size; struct fuse_forget_in* value; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_conn*,struct fuse_req*) ;

void FUNC_1(struct fuse_conn *VAR_1, struct fuse_req *VAR_2,
        u64 VAR_3, u64 VAR_4)
{
 struct fuse_forget_in *VAR_5 = &VAR_2->misc.forget_in;
 VAR_5->nlookup = VAR_4;
 VAR_2->in.h.opcode = VAR_0;
 VAR_2->in.h.nodeid = VAR_3;
 VAR_2->in.numargs = 1;
 VAR_2->in.args[0].size = sizeof(struct fuse_forget_in);
 VAR_2->in.args[0].value = VAR_5;
 FUNC_0(VAR_1, VAR_2);
}

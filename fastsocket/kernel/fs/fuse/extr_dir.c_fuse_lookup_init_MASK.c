
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct qstr {int name; scalar_t__ len; } ;
struct TYPE_10__ {int numargs; TYPE_4__* args; } ;
struct TYPE_6__ {int nodeid; int opcode; } ;
struct TYPE_8__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_5__ out; TYPE_3__ in; } ;
struct fuse_entry_out {int dummy; } ;
struct fuse_conn {int minor; } ;
struct TYPE_9__ {int size; struct fuse_entry_out* value; } ;
struct TYPE_7__ {int value; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fuse_entry_out*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct fuse_conn *VAR_2, struct fuse_req *VAR_3,
        u64 VAR_4, struct qstr *VAR_5,
        struct fuse_entry_out *VAR_6)
{
 FUNC_0(VAR_6, 0, sizeof(struct fuse_entry_out));
 VAR_3->in.h.opcode = VAR_1;
 VAR_3->in.h.nodeid = VAR_4;
 VAR_3->in.numargs = 1;
 VAR_3->in.args[0].size = VAR_5->len + 1;
 VAR_3->in.args[0].value = VAR_5->name;
 VAR_3->out.numargs = 1;
 if (VAR_2->minor < 9)
  VAR_3->out.args[0].size = VAR_0;
 else
  VAR_3->out.args[0].size = sizeof(struct fuse_entry_out);
 VAR_3->out.args[0].value = VAR_6;
}

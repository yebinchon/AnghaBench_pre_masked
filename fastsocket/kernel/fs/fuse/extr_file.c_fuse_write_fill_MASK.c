
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


struct fuse_write_out {int dummy; } ;
struct fuse_write_in {size_t size; int offset; int fh; } ;
struct TYPE_16__ {int numargs; TYPE_7__* args; } ;
struct TYPE_11__ {int nodeid; int opcode; } ;
struct TYPE_14__ {int numargs; TYPE_5__* args; TYPE_3__ h; } ;
struct TYPE_9__ {struct fuse_write_out out; struct fuse_write_in in; } ;
struct TYPE_10__ {TYPE_1__ write; } ;
struct fuse_req {TYPE_8__ out; TYPE_6__ in; TYPE_2__ misc; } ;
struct fuse_file {TYPE_4__* fc; int nodeid; int fh; } ;
typedef int loff_t ;
struct TYPE_15__ {int size; struct fuse_write_out* value; } ;
struct TYPE_13__ {int size; struct fuse_write_in* value; } ;
struct TYPE_12__ {int minor; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct fuse_req *VAR_2, struct fuse_file *VAR_3,
       loff_t VAR_4, size_t VAR_5)
{
 struct fuse_write_in *VAR_6 = &VAR_2->misc.write.in;
 struct fuse_write_out *VAR_7 = &VAR_2->misc.write.out;

 VAR_6->fh = VAR_3->fh;
 VAR_6->offset = VAR_4;
 VAR_6->size = VAR_5;
 VAR_2->in.h.opcode = VAR_1;
 VAR_2->in.h.nodeid = VAR_3->nodeid;
 VAR_2->in.numargs = 2;
 if (VAR_3->fc->minor < 9)
  VAR_2->in.args[0].size = VAR_0;
 else
  VAR_2->in.args[0].size = sizeof(struct fuse_write_in);
 VAR_2->in.args[0].value = VAR_6;
 VAR_2->in.args[1].size = VAR_5;
 VAR_2->out.numargs = 1;
 VAR_2->out.args[0].size = sizeof(struct fuse_write_out);
 VAR_2->out.args[0].value = VAR_7;
}

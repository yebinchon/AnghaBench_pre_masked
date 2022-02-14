
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int argvar; int numargs; TYPE_6__* args; } ;
struct TYPE_10__ {int opcode; int nodeid; } ;
struct TYPE_12__ {int numargs; TYPE_4__* args; TYPE_3__ h; } ;
struct fuse_read_in {size_t size; int flags; int offset; int fh; } ;
struct TYPE_8__ {struct fuse_read_in in; } ;
struct TYPE_9__ {TYPE_1__ read; } ;
struct fuse_req {TYPE_7__ out; TYPE_5__ in; TYPE_2__ misc; } ;
struct fuse_file {int nodeid; int fh; } ;
struct file {int f_flags; struct fuse_file* private_data; } ;
typedef int loff_t ;
struct TYPE_13__ {size_t size; } ;
struct TYPE_11__ {int size; struct fuse_read_in* value; } ;



void FUNC_0(struct fuse_req *VAR_0, struct file *VAR_1, loff_t VAR_2,
      size_t VAR_3, int VAR_4)
{
 struct fuse_read_in *VAR_5 = &VAR_0->misc.read.in;
 struct fuse_file *VAR_6 = VAR_1->private_data;

 VAR_5->fh = VAR_6->fh;
 VAR_5->offset = VAR_2;
 VAR_5->size = VAR_3;
 VAR_5->flags = VAR_1->f_flags;
 VAR_0->in.h.opcode = VAR_4;
 VAR_0->in.h.nodeid = VAR_6->nodeid;
 VAR_0->in.numargs = 1;
 VAR_0->in.args[0].size = sizeof(struct fuse_read_in);
 VAR_0->in.args[0].value = VAR_5;
 VAR_0->out.argvar = 1;
 VAR_0->out.numargs = 1;
 VAR_0->out.args[0].size = VAR_3;
}

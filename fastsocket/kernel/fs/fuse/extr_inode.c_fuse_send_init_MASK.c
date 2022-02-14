
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


struct fuse_init_in {int max_readahead; int flags; int minor; int major; } ;
struct TYPE_14__ {int init_out; struct fuse_init_in init_in; } ;
struct TYPE_13__ {int numargs; int argvar; TYPE_5__* args; } ;
struct TYPE_9__ {int opcode; } ;
struct TYPE_11__ {int numargs; TYPE_3__* args; TYPE_2__ h; } ;
struct fuse_req {int end; TYPE_7__ misc; TYPE_6__ out; TYPE_4__ in; } ;
struct fuse_init_out {int dummy; } ;
struct TYPE_8__ {int ra_pages; } ;
struct fuse_conn {TYPE_1__ bdi; } ;
struct TYPE_12__ {int size; int * value; } ;
struct TYPE_10__ {int size; struct fuse_init_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct fuse_conn*,struct fuse_req*) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_1(struct fuse_conn *VAR_14, struct fuse_req *VAR_15)
{
 struct fuse_init_in *VAR_16 = &VAR_15->misc.init_in;

 VAR_16->major = VAR_10;
 VAR_16->minor = VAR_9;
 VAR_16->max_readahead = VAR_14->bdi.ra_pages * VAR_12;
 VAR_16->flags |= VAR_1 | VAR_11 | VAR_2 |
  VAR_7 | VAR_4 | VAR_5 |
  VAR_3 | VAR_6 | VAR_0;
 VAR_15->in.h.opcode = VAR_8;
 VAR_15->in.numargs = 1;
 VAR_15->in.args[0].size = sizeof(*VAR_16);
 VAR_15->in.args[0].value = VAR_16;
 VAR_15->out.numargs = 1;



 VAR_15->out.argvar = 1;
 VAR_15->out.args[0].size = sizeof(struct fuse_init_out);
 VAR_15->out.args[0].value = &VAR_15->misc.init_out;
 VAR_15->end = VAR_13;
 FUNC_0(VAR_14, VAR_15);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int opcode; int nodeid; } ;
struct TYPE_10__ {int numargs; TYPE_4__* args; TYPE_3__ h; } ;
struct fuse_release_in {int flags; int fh; } ;
struct TYPE_6__ {struct fuse_release_in in; } ;
struct TYPE_7__ {TYPE_1__ release; } ;
struct fuse_req {TYPE_5__ in; TYPE_2__ misc; } ;
struct fuse_file {int nodeid; int fh; int poll_wait; int polled_node; int write_entry; struct fuse_req* reserved_req; struct fuse_conn* fc; } ;
struct fuse_conn {int lock; int polled_files; } ;
struct TYPE_9__ {int size; struct fuse_release_in* value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fuse_file *VAR_0, int VAR_1, int VAR_2)
{
 struct fuse_conn *VAR_3 = VAR_0->fc;
 struct fuse_req *VAR_4 = VAR_0->reserved_req;
 struct fuse_release_in *VAR_5 = &VAR_4->misc.release.in;

 FUNC_3(&VAR_3->lock);
 FUNC_1(&VAR_0->write_entry);
 if (!FUNC_0(&VAR_0->polled_node))
  FUNC_2(&VAR_0->polled_node, &VAR_3->polled_files);
 FUNC_4(&VAR_3->lock);

 FUNC_5(&VAR_0->poll_wait);

 VAR_5->fh = VAR_0->fh;
 VAR_5->flags = VAR_1;
 VAR_4->in.h.opcode = VAR_2;
 VAR_4->in.h.nodeid = VAR_0->nodeid;
 VAR_4->in.numargs = 1;
 VAR_4->in.args[0].size = sizeof(struct fuse_release_in);
 VAR_4->in.args[0].value = VAR_5;
}

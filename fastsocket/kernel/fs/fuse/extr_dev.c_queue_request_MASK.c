
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int unique; } ;
struct TYPE_4__ {scalar_t__ args; int numargs; TYPE_1__ h; } ;
struct fuse_req {int waiting; int state; int list; TYPE_2__ in; } ;
struct fuse_in_header {int dummy; } ;
struct fuse_conn {int fasync; int waitq; int num_waiting; int pending; } ;
struct fuse_arg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fuse_conn*) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ,struct fuse_arg*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fuse_conn *VAR_3, struct fuse_req *VAR_4)
{
 VAR_4->in.h.unique = FUNC_1(VAR_3);
 VAR_4->in.h.len = sizeof(struct fuse_in_header) +
  FUNC_3(VAR_4->in.numargs, (struct fuse_arg *) VAR_4->in.args);
 FUNC_4(&VAR_4->list, &VAR_3->pending);
 VAR_4->state = VAR_0;
 if (!VAR_4->waiting) {
  VAR_4->waiting = 1;
  FUNC_0(&VAR_3->num_waiting);
 }
 FUNC_5(&VAR_3->waitq);
 FUNC_2(&VAR_3->fasync, VAR_2, VAR_1);
}

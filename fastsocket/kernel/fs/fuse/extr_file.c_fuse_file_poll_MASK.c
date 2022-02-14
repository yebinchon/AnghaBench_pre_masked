
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


struct TYPE_11__ {int error; } ;
struct TYPE_12__ {int numargs; TYPE_5__ h; TYPE_4__* args; } ;
struct TYPE_7__ {int nodeid; int opcode; } ;
struct TYPE_9__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_6__ out; TYPE_3__ in; } ;
struct fuse_poll_out {int revents; } ;
struct fuse_poll_in {int flags; int kh; int fh; } ;
struct fuse_file {int nodeid; int poll_wait; int kh; int fh; struct fuse_conn* fc; } ;
struct fuse_conn {int no_poll; } ;
struct file {struct fuse_file* private_data; } ;
typedef int poll_table ;
typedef int outarg ;
typedef int inarg ;
struct TYPE_10__ {int size; struct fuse_poll_out* value; } ;
struct TYPE_8__ {int size; struct fuse_poll_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int VAR_4 ;
 struct fuse_req* FUNC_1 (struct fuse_conn*) ;
 int FUNC_2 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_3 (struct fuse_conn*,struct fuse_file*) ;
 int FUNC_4 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_5 (struct file*,int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;

unsigned FUNC_7(struct file *VAR_5, poll_table *VAR_6)
{
 struct fuse_file *VAR_7 = VAR_5->private_data;
 struct fuse_conn *VAR_8 = VAR_7->fc;
 struct fuse_poll_in VAR_9 = { .fh = VAR_7->fh, .kh = VAR_7->kh };
 struct fuse_poll_out VAR_10;
 struct fuse_req *VAR_11;
 int VAR_12;

 if (VAR_8->no_poll)
  return VAR_0;

 FUNC_5(VAR_5, &VAR_7->poll_wait, VAR_6);





 if (FUNC_6(&VAR_7->poll_wait)) {
  VAR_9.flags |= VAR_3;
  FUNC_3(VAR_8, VAR_7);
 }

 VAR_11 = FUNC_1(VAR_8);
 if (FUNC_0(VAR_11))
  return VAR_4;

 VAR_11->in.h.opcode = VAR_2;
 VAR_11->in.h.nodeid = VAR_7->nodeid;
 VAR_11->in.numargs = 1;
 VAR_11->in.args[0].size = sizeof(VAR_9);
 VAR_11->in.args[0].value = &VAR_9;
 VAR_11->out.numargs = 1;
 VAR_11->out.args[0].size = sizeof(VAR_10);
 VAR_11->out.args[0].value = &VAR_10;
 FUNC_4(VAR_8, VAR_11);
 VAR_12 = VAR_11->out.h.error;
 FUNC_2(VAR_8, VAR_11);

 if (!VAR_12)
  return VAR_10.revents;
 if (VAR_12 == -VAR_1) {
  VAR_8->no_poll = 1;
  return VAR_0;
 }
 return VAR_4;
}

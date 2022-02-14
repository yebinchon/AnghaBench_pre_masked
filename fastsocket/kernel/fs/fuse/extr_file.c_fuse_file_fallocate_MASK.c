
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_mutex; } ;
struct TYPE_9__ {int error; } ;
struct TYPE_10__ {TYPE_4__ h; } ;
struct TYPE_6__ {int nodeid; int opcode; } ;
struct TYPE_8__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_5__ out; TYPE_3__ in; } ;
struct fuse_file {int nodeid; int fh; struct fuse_conn* fc; } ;
struct fuse_fallocate_in {int mode; scalar_t__ length; scalar_t__ offset; int fh; } ;
struct fuse_conn {int no_fallocate; } ;
typedef scalar_t__ loff_t ;
typedef int inarg ;
struct TYPE_7__ {int size; struct fuse_fallocate_in* value; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 struct fuse_req* FUNC_2 (struct fuse_conn*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inode*,scalar_t__,scalar_t__) ;

long FUNC_12(struct inode *VAR_5, struct fuse_file *VAR_6, int VAR_7,
    loff_t VAR_8, loff_t VAR_9)
{
 struct fuse_conn *VAR_10 = VAR_6->fc;
 struct fuse_req *VAR_11;
 struct fuse_fallocate_in VAR_12 = {
  .fh = VAR_6->fh,
  .offset = VAR_8,
  .length = VAR_9,
  .mode = VAR_7
 };
 int VAR_13;
 bool VAR_14 = !(VAR_7 & VAR_2) ||
      (VAR_7 & VAR_3);

 if (VAR_10->no_fallocate)
  return -VAR_1;

 if (VAR_14) {
  FUNC_9(&VAR_5->i_mutex);
  if (VAR_7 & VAR_3)
   FUNC_7(VAR_5);
 }

 VAR_11 = FUNC_2(VAR_10);
 if (FUNC_0(VAR_11)) {
  VAR_13 = FUNC_1(VAR_11);
  goto out;
 }

 VAR_11->in.h.opcode = VAR_4;
 VAR_11->in.h.nodeid = VAR_6->nodeid;
 VAR_11->in.numargs = 1;
 VAR_11->in.args[0].size = sizeof(VAR_12);
 VAR_11->in.args[0].value = &VAR_12;
 FUNC_6(VAR_10, VAR_11);
 VAR_13 = VAR_11->out.h.error;
 if (VAR_13 == -VAR_0) {
  VAR_10->no_fallocate = 1;
  VAR_13 = -VAR_1;
 }
 FUNC_4(VAR_10, VAR_11);

 if (VAR_13)
  goto out;


 if (!(VAR_7 & VAR_2))
  FUNC_8(VAR_5, VAR_8 + VAR_9);

 if (VAR_7 & VAR_3)
  FUNC_11(VAR_5, VAR_8, VAR_8 + VAR_9 - 1);

 FUNC_3(VAR_5);

out:
 if (VAR_14) {
  if (VAR_7 & VAR_3)
   FUNC_5(VAR_5);
  FUNC_10(&VAR_5->i_mutex);
 }

 return VAR_13;
}

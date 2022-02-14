
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


struct inode {int dummy; } ;
struct TYPE_11__ {int error; } ;
struct TYPE_12__ {TYPE_5__ h; } ;
struct TYPE_7__ {void* nodeid; int opcode; } ;
struct TYPE_9__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_6__ out; TYPE_3__ in; } ;
struct fuse_rename_in {void* newdir; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_10__ {int len; struct fuse_rename_in* name; } ;
struct dentry {struct inode* d_inode; TYPE_4__ d_name; } ;
typedef int inarg ;
struct TYPE_8__ {int size; struct fuse_rename_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 struct fuse_req* FUNC_2 (struct fuse_conn*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_7 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_8 (struct inode*) ;
 void* FUNC_9 (struct inode*) ;
 int FUNC_10 (struct fuse_rename_in*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_2, struct dentry *VAR_3,
         struct inode *VAR_4, struct dentry *VAR_5)
{
 int VAR_6;
 struct fuse_rename_in VAR_7;
 struct fuse_conn *VAR_8 = FUNC_8(VAR_2);
 struct fuse_req *VAR_9 = FUNC_2(VAR_8);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 FUNC_10(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.newdir = FUNC_9(VAR_4);
 VAR_9->in.h.opcode = VAR_1;
 VAR_9->in.h.nodeid = FUNC_9(VAR_2);
 VAR_9->in.numargs = 3;
 VAR_9->in.args[0].size = sizeof(VAR_7);
 VAR_9->in.args[0].value = &VAR_7;
 VAR_9->in.args[1].size = VAR_3->d_name.len + 1;
 VAR_9->in.args[1].value = VAR_3->d_name.name;
 VAR_9->in.args[2].size = VAR_5->d_name.len + 1;
 VAR_9->in.args[2].value = VAR_5->d_name.name;
 FUNC_7(VAR_8, VAR_9);
 VAR_6 = VAR_9->out.h.error;
 FUNC_6(VAR_8, VAR_9);
 if (!VAR_6) {

  FUNC_3(VAR_3->d_inode);

  FUNC_3(VAR_2);
  if (VAR_2 != VAR_4)
   FUNC_3(VAR_4);


  if (VAR_5->d_inode) {
   FUNC_3(VAR_5->d_inode);
   FUNC_5(VAR_5);
  }
 } else if (VAR_6 == -VAR_0) {





  FUNC_4(VAR_3);
  if (VAR_5->d_inode)
   FUNC_4(VAR_5);
 }

 return VAR_6;
}

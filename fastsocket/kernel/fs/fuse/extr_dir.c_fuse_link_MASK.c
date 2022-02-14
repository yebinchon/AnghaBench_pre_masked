
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_5__ {int opcode; } ;
struct TYPE_7__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {TYPE_3__ in; } ;
struct fuse_link_in {int oldnodeid; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_8__ {int len; struct fuse_link_in* name; } ;
struct dentry {TYPE_4__ d_name; struct inode* d_inode; } ;
typedef int inarg ;
struct TYPE_6__ {int size; struct fuse_link_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (struct fuse_conn*,struct fuse_req*,struct inode*,struct dentry*,int ) ;
 struct fuse_req* FUNC_3 (struct fuse_conn*) ;
 int FUNC_4 (struct inode*) ;
 struct fuse_conn* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct fuse_link_in*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_2, struct inode *VAR_3,
       struct dentry *VAR_4)
{
 int VAR_5;
 struct fuse_link_in VAR_6;
 struct inode *VAR_7 = VAR_2->d_inode;
 struct fuse_conn *VAR_8 = FUNC_5(VAR_7);
 struct fuse_req *VAR_9 = FUNC_3(VAR_8);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.oldnodeid = FUNC_6(VAR_7);
 VAR_9->in.h.opcode = VAR_1;
 VAR_9->in.numargs = 2;
 VAR_9->in.args[0].size = sizeof(VAR_6);
 VAR_9->in.args[0].value = &VAR_6;
 VAR_9->in.args[1].size = VAR_4->d_name.len + 1;
 VAR_9->in.args[1].value = VAR_4->d_name.name;
 VAR_5 = FUNC_2(VAR_8, VAR_9, VAR_3, VAR_4, VAR_7->i_mode);






 if (!VAR_5 || VAR_5 == -VAR_0)
  FUNC_4(VAR_7);
 return VAR_5;
}

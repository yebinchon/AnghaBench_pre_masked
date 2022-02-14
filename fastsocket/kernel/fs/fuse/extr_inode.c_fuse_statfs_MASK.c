
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct kstatfs {int f_type; } ;
struct fuse_statfs_out {int st; } ;
struct TYPE_9__ {int error; } ;
struct TYPE_10__ {int numargs; TYPE_4__ h; TYPE_3__* args; } ;
struct TYPE_6__ {int nodeid; int opcode; } ;
struct TYPE_7__ {TYPE_1__ h; scalar_t__ numargs; } ;
struct fuse_req {TYPE_5__ out; TYPE_2__ in; } ;
struct fuse_conn {int minor; } ;
struct dentry {int d_inode; struct super_block* d_sb; } ;
typedef int outarg ;
struct TYPE_8__ {int size; struct fuse_statfs_out* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (struct kstatfs*,int *) ;
 int FUNC_3 (struct fuse_conn*) ;
 struct fuse_req* FUNC_4 (struct fuse_conn*) ;
 int FUNC_5 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_7 (struct super_block*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct fuse_statfs_out*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_3, struct kstatfs *VAR_4)
{
 struct super_block *VAR_5 = VAR_3->d_sb;
 struct fuse_conn *VAR_6 = FUNC_7(VAR_5);
 struct fuse_req *VAR_7;
 struct fuse_statfs_out VAR_8;
 int VAR_9;

 if (!FUNC_3(VAR_6)) {
  VAR_4->f_type = VAR_2;
  return 0;
 }

 VAR_7 = FUNC_4(VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_9(&VAR_8, 0, sizeof(VAR_8));
 VAR_7->in.numargs = 0;
 VAR_7->in.h.opcode = VAR_1;
 VAR_7->in.h.nodeid = FUNC_8(VAR_3->d_inode);
 VAR_7->out.numargs = 1;
 VAR_7->out.args[0].size =
  VAR_6->minor < 4 ? VAR_0 : sizeof(VAR_8);
 VAR_7->out.args[0].value = &VAR_8;
 FUNC_6(VAR_6, VAR_7);
 VAR_9 = VAR_7->out.h.error;
 if (!VAR_9)
  FUNC_2(VAR_4, &VAR_8.st);
 FUNC_5(VAR_6, VAR_7);
 return VAR_9;
}

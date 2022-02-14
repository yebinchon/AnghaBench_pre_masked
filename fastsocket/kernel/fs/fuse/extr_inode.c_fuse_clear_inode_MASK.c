
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct fuse_inode {int * forget_req; int nlookup; int nodeid; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_conn*,int *,int ,int ) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_1)
{
 if (VAR_1->i_sb->s_flags & VAR_0) {
  struct fuse_conn *VAR_2 = FUNC_1(VAR_1);
  struct fuse_inode *VAR_3 = FUNC_2(VAR_1);
  FUNC_0(VAR_2, VAR_3->forget_req, VAR_3->nodeid, VAR_3->nlookup);
  VAR_3->forget_req = ((void*)0);
 }
}

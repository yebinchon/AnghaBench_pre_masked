
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_inode {scalar_t__ forget_req; int queued_writes; int write_files; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,struct inode*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_1)
{
 struct fuse_inode *VAR_2 = FUNC_2(VAR_1);
 FUNC_0(!FUNC_4(&VAR_2->write_files));
 FUNC_0(!FUNC_4(&VAR_2->queued_writes));
 if (VAR_2->forget_req)
  FUNC_1(VAR_2->forget_req);
 FUNC_3(VAR_0, VAR_1);
}

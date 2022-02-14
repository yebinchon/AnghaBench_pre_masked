
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_inode {scalar_t__ writectr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct inode*) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_1)
{
 struct fuse_inode *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->writectr != VAR_0);
 VAR_2->writectr = 0;
 FUNC_1(VAR_1);
}

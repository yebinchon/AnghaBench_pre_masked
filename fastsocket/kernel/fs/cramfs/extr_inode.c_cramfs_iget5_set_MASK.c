
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;
struct cramfs_inode {int dummy; } ;


 int FUNC_0 (struct cramfs_inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, void *VAR_1)
{
 struct cramfs_inode *VAR_2 = VAR_1;
 VAR_0->i_ino = FUNC_0(VAR_2);
 return 0;
}

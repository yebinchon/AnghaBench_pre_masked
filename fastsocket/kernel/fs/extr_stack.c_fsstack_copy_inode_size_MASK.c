
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_blocks; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;

void FUNC_2(struct inode *VAR_0, const struct inode *VAR_1)
{
 FUNC_1(VAR_0, FUNC_0((struct inode *)VAR_1));
 VAR_0->i_blocks = VAR_1->i_blocks;
}

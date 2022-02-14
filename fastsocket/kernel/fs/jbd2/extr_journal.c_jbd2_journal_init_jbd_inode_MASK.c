
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jbd2_inode {int i_list; scalar_t__ i_flags; struct inode* i_vfs_inode; int * i_next_transaction; int * i_transaction; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct jbd2_inode *VAR_0, struct inode *VAR_1)
{
 VAR_0->i_transaction = ((void*)0);
 VAR_0->i_next_transaction = ((void*)0);
 VAR_0->i_vfs_inode = VAR_1;
 VAR_0->i_flags = 0;
 FUNC_0(&VAR_0->i_list);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; int i_writecount; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct file *VAR_0)
{
 struct inode *VAR_1 = VAR_0->f_mapping->host;

 FUNC_1(&VAR_1->i_lock);
 FUNC_0(&VAR_1->i_writecount, 1);
 FUNC_2(&VAR_1->i_lock);
}

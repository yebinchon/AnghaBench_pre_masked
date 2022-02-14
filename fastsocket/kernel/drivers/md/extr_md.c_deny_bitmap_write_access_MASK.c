
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; int i_writecount; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file * VAR_1)
{
 struct inode *VAR_2 = VAR_1->f_mapping->host;

 FUNC_2(&VAR_2->i_lock);
 if (FUNC_0(&VAR_2->i_writecount) > 1) {
  FUNC_3(&VAR_2->i_lock);
  return -VAR_0;
 }
 FUNC_1(&VAR_2->i_writecount, -1);
 FUNC_3(&VAR_2->i_lock);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; int i_writecount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct inode * VAR_1)
{
 FUNC_2(&VAR_1->i_lock);
 if (FUNC_1(&VAR_1->i_writecount) < 0) {
  FUNC_3(&VAR_1->i_lock);
  return -VAR_0;
 }
 FUNC_0(&VAR_1->i_writecount);
 FUNC_3(&VAR_1->i_lock);

 return 0;
}

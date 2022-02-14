
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_link; struct file_lock* fl_next; int fl_block; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct file_lock*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct file_lock *VAR_1,
          struct file_lock *VAR_2)
{
 FUNC_0(!FUNC_4(&VAR_2->fl_block));
 FUNC_3(&VAR_2->fl_block, &VAR_1->fl_block);
 VAR_2->fl_next = VAR_1;
 if (FUNC_1(VAR_1))
  FUNC_2(&VAR_2->fl_link, &VAR_0);
}

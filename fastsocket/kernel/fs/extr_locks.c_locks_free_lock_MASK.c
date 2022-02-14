
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_link; int fl_block; int fl_wait; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct file_lock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file_lock*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct file_lock *VAR_1)
{
 FUNC_0(FUNC_4(&VAR_1->fl_wait));
 FUNC_0(!FUNC_2(&VAR_1->fl_block));
 FUNC_0(!FUNC_2(&VAR_1->fl_link));

 FUNC_3(VAR_1);
 FUNC_1(VAR_0, VAR_1);
}

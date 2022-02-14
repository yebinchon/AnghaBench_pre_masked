
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int * fl_next; int fl_link; int fl_block; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct file_lock *VAR_0)
{
 FUNC_0(&VAR_0->fl_block);
 FUNC_0(&VAR_0->fl_link);
 VAR_0->fl_next = ((void*)0);
}

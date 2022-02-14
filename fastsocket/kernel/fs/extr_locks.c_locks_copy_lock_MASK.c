
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_lmops; int fl_ops; int fl_file; } ;


 int FUNC_0 (struct file_lock*,struct file_lock*) ;
 int FUNC_1 (struct file_lock*,struct file_lock*) ;
 int FUNC_2 (struct file_lock*) ;

void FUNC_3(struct file_lock *VAR_0, struct file_lock *VAR_1)
{
 FUNC_2(VAR_0);

 FUNC_0(VAR_0, VAR_1);
 VAR_0->fl_file = VAR_1->fl_file;
 VAR_0->fl_ops = VAR_1->fl_ops;
 VAR_0->fl_lmops = VAR_1->fl_lmops;

 FUNC_1(VAR_0, VAR_1);
}

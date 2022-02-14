
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int name; int count; } ;
struct nubus_dev {struct proc_dir_entry* procdir; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct nubus_dev *VAR_2)
{
 struct proc_dir_entry *VAR_3;

 if ((VAR_3 = VAR_2->procdir)) {
  if (FUNC_0(&VAR_3->count))
   return -VAR_0;
  FUNC_1(VAR_3->name, VAR_1);
  VAR_2->procdir = ((void*)0);
 }
 return 0;
}

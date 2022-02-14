
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int name; struct proc_dir_entry* next; struct proc_dir_entry* subdir; } ;


 int FUNC_0 (int ,struct proc_dir_entry*) ;

__attribute__((used)) static void FUNC_1(struct proc_dir_entry *VAR_0)
{
 struct proc_dir_entry *VAR_1, *VAR_2;
 VAR_1 = VAR_0->subdir;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->name, VAR_0);
  VAR_1 = VAR_2;
 }
}

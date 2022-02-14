
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int name; struct i2o_controller* data; struct proc_dir_entry* next; struct proc_dir_entry* subdir; } ;
struct i2o_controller {int name; } ;


 int FUNC_0 (struct proc_dir_entry*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,struct proc_dir_entry*) ;

__attribute__((used)) static void FUNC_3(struct proc_dir_entry *VAR_0,
    struct i2o_controller *VAR_1)
{
 struct proc_dir_entry *VAR_2, *VAR_3;

 VAR_2 = VAR_0->subdir;
 while (VAR_2) {
  VAR_3 = VAR_2->next;
  if (VAR_2->data == VAR_1) {
   FUNC_0(VAR_2);
   FUNC_2(VAR_2->name, VAR_0);
  }
  FUNC_1("removing IOP /proc/i2o/%s\n", VAR_1->name);
  VAR_2 = VAR_3;
 }
}

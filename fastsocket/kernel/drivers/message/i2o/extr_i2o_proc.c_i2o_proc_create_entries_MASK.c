
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct TYPE_3__ {int fops; int mode; scalar_t__ name; } ;
typedef TYPE_1__ i2o_proc_entry ;


 struct proc_dir_entry* FUNC_0 (scalar_t__,int ,struct proc_dir_entry*,int ,void*) ;

__attribute__((used)) static int FUNC_1(struct proc_dir_entry *VAR_0,
       i2o_proc_entry * VAR_1, void *VAR_2)
{
 struct proc_dir_entry *VAR_3;

 while (VAR_1->name) {
  VAR_3 = FUNC_0(VAR_1->name, VAR_1->mode, VAR_0,
           VAR_1->fops, VAR_2);
  if (!VAR_3)
   return -1;

  VAR_1++;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_entry {int entry; int fops; int mode; int name; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct proc_entry *VAR_1)
{
 VAR_1->entry = FUNC_0(VAR_1->name, VAR_1->mode, VAR_0, VAR_1->fops);
 if (!VAR_1->entry)
  return -1;
 return 0;
}

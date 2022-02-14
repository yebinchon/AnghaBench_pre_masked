
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int parent; int name; int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct proc_dir_entry *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->data);
  FUNC_1(VAR_0->name, VAR_0->parent);
 }
}

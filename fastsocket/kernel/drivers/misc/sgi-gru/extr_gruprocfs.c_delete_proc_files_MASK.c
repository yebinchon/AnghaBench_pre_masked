
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc_entry {char* name; scalar_t__ entry; } ;
struct TYPE_3__ {struct TYPE_3__* parent; } ;


 struct proc_entry* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct proc_entry *VAR_2;

 if (VAR_1) {
  for (VAR_2 = VAR_0; VAR_2->name; VAR_2++)
   if (VAR_2->entry)
    FUNC_0(VAR_2->name, VAR_1);
  FUNC_0("gru", VAR_1->parent);
 }
}

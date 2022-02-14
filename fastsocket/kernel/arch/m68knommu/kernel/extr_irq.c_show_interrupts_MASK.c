
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct irqaction {int name; struct irqaction* next; } ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* chip; struct irqaction* action; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct seq_file*,char*,int) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,char*) ;

int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 struct irqaction *VAR_4;
 int VAR_5 = *((loff_t *) VAR_3);

 if (VAR_5 == 0)
  FUNC_3(VAR_2, "           CPU0\n");

 if (VAR_5 < VAR_0) {
  VAR_4 = VAR_1[VAR_5].action;
  if (VAR_4) {
   FUNC_1(VAR_2, "%3d: ", VAR_5);
   FUNC_1(VAR_2, "%10u ", FUNC_0(VAR_5));
   FUNC_1(VAR_2, "%14s  ", VAR_1[VAR_5].chip->name);

   FUNC_1(VAR_2, "%s", VAR_4->name);
   for (VAR_4 = VAR_4->next; VAR_4; VAR_4 = VAR_4->next)
    FUNC_1(VAR_2, ", %s", VAR_4->name);
   FUNC_2(VAR_2, '\n');
  }
 }

 return 0;
}

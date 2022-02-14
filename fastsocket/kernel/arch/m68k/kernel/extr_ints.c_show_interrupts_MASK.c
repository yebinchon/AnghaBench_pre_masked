
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct irq_node {int devname; struct irq_node* next; } ;
struct irq_controller {int name; } ;
typedef int loff_t ;
struct TYPE_2__ {int * irqs; } ;


 struct irq_controller** VAR_0 ;
 struct irq_node** VAR_1 ;
 TYPE_1__ FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 struct irq_controller *VAR_4;
 struct irq_node *VAR_5;
 int VAR_6 = *(loff_t *) VAR_3;


 if (VAR_1[VAR_6]) {
  VAR_4 = VAR_0[VAR_6];
  VAR_5 = VAR_1[VAR_6];
  FUNC_1(VAR_2, "%-8s %3u: %10u %s", VAR_4->name, VAR_6, FUNC_0(0).irqs[VAR_6], VAR_5->devname);
  while ((VAR_5 = VAR_5->next))
   FUNC_1(VAR_2, ", %s", VAR_5->devname);
  FUNC_2(VAR_2, "\n");
 }
 return 0;
}

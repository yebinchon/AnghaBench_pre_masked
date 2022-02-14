
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {void* dev_id; int flags; struct irqaction* next; int name; } ;
struct TYPE_2__ {struct irqaction* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 struct irqaction** VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct irqaction*) ;
 int FUNC_2 (char*,unsigned int,...) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (unsigned int) ;

void FUNC_6(unsigned int VAR_5, void *VAR_6)
{
 struct irqaction *VAR_7, **VAR_8;
 struct irqaction *VAR_9 = ((void*)0);
        unsigned long VAR_10;

 FUNC_3(&VAR_3, VAR_10);
 if (VAR_5 < 15)
  VAR_8 = VAR_5 + VAR_2;
 else
  VAR_8 = &(VAR_4[VAR_5 - (1 << 5)].action);
 VAR_7 = *VAR_8;
 if (!VAR_7) {
  FUNC_2("Trying to free free IRQ%d\n",VAR_5);
  goto out_unlock;
 }
 if (VAR_6) {
  for (; VAR_7; VAR_7 = VAR_7->next) {
   if (VAR_7->dev_id == VAR_6)
    break;
   VAR_9 = VAR_7;
  }
  if (!VAR_7) {
   FUNC_2("Trying to free free shared IRQ%d\n",VAR_5);
   goto out_unlock;
  }
 } else if (VAR_7->flags & VAR_0) {
  FUNC_2("Trying to free shared IRQ%d with NULL device ID\n", VAR_5);
  goto out_unlock;
 }
 if (VAR_7->flags & VAR_1)
 {



  FUNC_2("Attempt to free statically allocated IRQ%d (%s)\n",
         VAR_5, VAR_7->name);
  goto out_unlock;
 }

 if (VAR_7 && VAR_9)
  VAR_9->next = VAR_7->next;
 else
  *VAR_8 = VAR_7->next;

 FUNC_4(&VAR_3, VAR_10);

 FUNC_5(VAR_5);

 FUNC_3(&VAR_3, VAR_10);

 FUNC_1(VAR_7);

 if (!(*VAR_8))
  FUNC_0(VAR_5);

out_unlock:
 FUNC_4(&VAR_3, VAR_10);
}

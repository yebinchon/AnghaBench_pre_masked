
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {void* dev_id; int flags; struct irqaction* next; int name; int handler; } ;
struct TYPE_2__ {struct irqaction* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int FUNC_1 (struct irqaction*) ;
 int FUNC_2 (char*,unsigned int,...) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (unsigned int) ;

void FUNC_6(unsigned int VAR_7, void *VAR_8)
{
 struct irqaction * VAR_9;
 struct irqaction **VAR_10;
        unsigned long VAR_11;
 unsigned int VAR_12;

 if (VAR_4 == VAR_6) {
  extern void FUNC_0(unsigned int, void *);

  FUNC_0(VAR_7, VAR_8);
  return;
 }
 VAR_12 = VAR_7 & (VAR_1 - 1);
        if (VAR_12 > 14) {
                FUNC_2("Trying to free bogus IRQ %d\n", VAR_7);
                return;
        }

 FUNC_3(&VAR_3, VAR_11);

 VAR_10 = &VAR_5[VAR_12].action;
 VAR_9 = *VAR_10;

 if (!VAR_9->handler) {
  FUNC_2("Trying to free free IRQ%d\n",VAR_7);
  goto out_unlock;
 }
 if (VAR_8) {
  for (; VAR_9; VAR_9 = VAR_9->next) {
   if (VAR_9->dev_id == VAR_8)
    break;
   VAR_10 = &VAR_9->next;
  }
  if (!VAR_9) {
   FUNC_2("Trying to free free shared IRQ%d\n",VAR_7);
   goto out_unlock;
  }
 } else if (VAR_9->flags & VAR_0) {
  FUNC_2("Trying to free shared IRQ%d with NULL device ID\n", VAR_7);
  goto out_unlock;
 }
 if (VAR_9->flags & VAR_2)
 {



  FUNC_2("Attempt to free statically allocated IRQ%d (%s)\n",
         VAR_7, VAR_9->name);
  goto out_unlock;
 }

 *VAR_10 = VAR_9->next;

 FUNC_4(&VAR_3, VAR_11);

 FUNC_5(VAR_7);

 FUNC_3(&VAR_3, VAR_11);

 FUNC_1(VAR_9);

 if (!VAR_5[VAR_12].action)
  FUNC_0(VAR_7);

out_unlock:
 FUNC_4(&VAR_3, VAR_11);
}

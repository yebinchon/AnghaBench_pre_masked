
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {unsigned long flags; char const* name; void* dev_id; struct irqaction* next; scalar_t__ handler; } ;
typedef scalar_t__ irq_handler_t ;
struct TYPE_2__ {struct irqaction* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (unsigned int) ;
 int VAR_9 ;
 struct irqaction* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,unsigned int,...) ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ VAR_12 ;
 struct irqaction* VAR_13 ;
 scalar_t__ VAR_14 ;

int FUNC_5(unsigned int VAR_15,
  irq_handler_t VAR_16,
  unsigned long VAR_17, const char * VAR_18, void *VAR_19)
{
 struct irqaction * VAR_20, **VAR_21;
 unsigned long VAR_22;
 unsigned int VAR_23;
 int VAR_24;

 if (VAR_10 == VAR_14) {
  extern int FUNC_6(unsigned int,
          irq_handler_t ,
          unsigned long, const char *, void *);
  return FUNC_6(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);
 }
 VAR_23 = VAR_15 & (VAR_7 - 1);
 if(VAR_23 > 14) {
  VAR_24 = -VAR_1;
  goto out;
 }
 if (!VAR_16) {
  VAR_24 = -VAR_1;
  goto out;
 }

 FUNC_3(&VAR_9, VAR_22);

 VAR_21 = &VAR_11[VAR_23].action;
 VAR_20 = *VAR_21;
 if (VAR_20) {
  if (!(VAR_20->flags & VAR_5) || !(VAR_17 & VAR_5)) {
   VAR_24 = -VAR_0;
   goto out_unlock;
  }
  if ((VAR_20->flags & VAR_4) != (VAR_17 & VAR_4)) {
   FUNC_2("Attempt to mix fast and slow interrupts on IRQ%d denied\n", VAR_15);
   VAR_24 = -VAR_0;
   goto out_unlock;
  }
  for ( ; VAR_20; VAR_20 = *VAR_21)
   VAR_21 = &VAR_20->next;
 }




 if (VAR_17 & VAR_8) {
  if (VAR_12 < VAR_6)
   VAR_20 = &VAR_13[VAR_12++];
  else
   FUNC_2("Request for IRQ%d (%s) SA_STATIC_ALLOC failed using kmalloc\n", VAR_15, VAR_18);
 }

 if (VAR_20 == ((void*)0))
  VAR_20 = FUNC_1(sizeof(struct irqaction),
           VAR_3);

 if (!VAR_20) {
  VAR_24 = -VAR_2;
  goto out_unlock;
 }

 VAR_20->handler = VAR_16;
 VAR_20->flags = VAR_17;
 VAR_20->name = VAR_18;
 VAR_20->next = ((void*)0);
 VAR_20->dev_id = VAR_19;

 *VAR_21 = VAR_20;

 FUNC_0(VAR_15);

 VAR_24 = 0;
out_unlock:
 FUNC_4(&VAR_9, VAR_22);
out:
 return VAR_24;
}

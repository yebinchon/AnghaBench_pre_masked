
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {unsigned long flags; char const* name; struct irqaction* next; void* dev_id; scalar_t__ handler; } ;
typedef scalar_t__ irq_handler_t ;
struct TYPE_2__ {struct irqaction* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (unsigned int) ;
 struct irqaction** VAR_8 ;
 int VAR_9 ;
 struct irqaction* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,unsigned int,...) ;
 TYPE_1__* VAR_10 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ VAR_11 ;
 struct irqaction* VAR_12 ;

int FUNC_5(unsigned int VAR_13,
  irq_handler_t VAR_14,
  unsigned long VAR_15, const char * VAR_16, void *VAR_17)
{
 struct irqaction *VAR_18, *VAR_19 = ((void*)0), **VAR_20;
 unsigned long VAR_21;
 int VAR_22;

 if(VAR_13 > 14 && VAR_13 < (1 << 5)) {
  VAR_22 = -VAR_1;
  goto out;
 }

 if (!VAR_14) {
  VAR_22 = -VAR_1;
  goto out;
 }

 FUNC_3(&VAR_9, VAR_21);

 if (VAR_13 >= (1 << 5))
  VAR_20 = &(VAR_10[VAR_13 - (1 << 5)].action);
 else
  VAR_20 = VAR_13 + VAR_8;
 VAR_18 = *VAR_20;

 if (VAR_18) {
  if ((VAR_18->flags & VAR_5) && (VAR_15 & VAR_5)) {
   for (VAR_19 = VAR_18; VAR_19->next; VAR_19 = VAR_19->next);
  } else {
   VAR_22 = -VAR_0;
   goto out_unlock;
  }
  if ((VAR_18->flags & VAR_4) ^ (VAR_15 & VAR_4)) {
   FUNC_2("Attempt to mix fast and slow interrupts on IRQ%d denied\n", VAR_13);
   VAR_22 = -VAR_0;
   goto out_unlock;
  }
  VAR_18 = ((void*)0);
 }




 if (VAR_15 & VAR_7) {
  if (VAR_11 < VAR_6)
   VAR_18 = &VAR_12[VAR_11++];
  else
   FUNC_2("Request for IRQ%d (%s) SA_STATIC_ALLOC failed using kmalloc\n", VAR_13, VAR_16);
 }

 if (VAR_18 == ((void*)0))
  VAR_18 = FUNC_1(sizeof(struct irqaction),
           VAR_3);

 if (!VAR_18) {
  VAR_22 = -VAR_2;
  goto out_unlock;
 }

 VAR_18->handler = VAR_14;
 VAR_18->flags = VAR_15;
 VAR_18->name = VAR_16;
 VAR_18->next = ((void*)0);
 VAR_18->dev_id = VAR_17;

 if (VAR_19)
  VAR_19->next = VAR_18;
 else
  *VAR_20 = VAR_18;

 FUNC_0(VAR_13);

 VAR_22 = 0;
out_unlock:
 FUNC_4(&VAR_9, VAR_21);
out:
 return VAR_22;
}

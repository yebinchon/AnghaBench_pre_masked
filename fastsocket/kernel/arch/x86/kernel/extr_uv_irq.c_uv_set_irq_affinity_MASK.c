
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uv_IO_APIC_route_entry {unsigned int dest; scalar_t__ mask; scalar_t__ trigger; scalar_t__ polarity; int dest_mode; int delivery_mode; int vector; } ;
struct irq_desc {struct irq_cfg* chip_data; } ;
struct irq_cfg {scalar_t__ move_in_progress; int vector; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {int irq_dest_mode; int irq_delivery_mode; } ;


 TYPE_1__* VAR_0 ;
 struct irq_desc* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct irq_cfg*) ;
 scalar_t__ FUNC_2 (struct irq_desc*,struct cpumask const*,unsigned int*) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned long*,int*) ;
 int FUNC_4 (int,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1, const struct cpumask *VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_0(VAR_1);
 struct irq_cfg *VAR_4 = VAR_3->chip_data;
 unsigned int VAR_5;
 unsigned long VAR_6;
 struct uv_IO_APIC_route_entry *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_3, VAR_2, &VAR_5))
  return -1;

 VAR_6 = 0;
 VAR_7 = (struct uv_IO_APIC_route_entry *)&VAR_6;

 VAR_7->vector = VAR_4->vector;
 VAR_7->delivery_mode = VAR_0->irq_delivery_mode;
 VAR_7->dest_mode = VAR_0->irq_dest_mode;
 VAR_7->polarity = 0;
 VAR_7->trigger = 0;
 VAR_7->mask = 0;
 VAR_7->dest = VAR_5;


 if (FUNC_3(VAR_1, &VAR_8, &VAR_9))
  return -1;

 FUNC_4(VAR_9, VAR_8, VAR_6);

 if (VAR_4->move_in_progress)
  FUNC_1(VAR_4);

 return 0;
}

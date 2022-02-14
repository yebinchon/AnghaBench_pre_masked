
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uv_IO_APIC_route_entry {int dest; scalar_t__ mask; scalar_t__ trigger; scalar_t__ polarity; int dest_mode; int delivery_mode; int vector; } ;
struct irq_desc {int status; } ;
struct irq_cfg {scalar_t__ move_in_progress; int vector; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {int (* cpu_mask_to_apicid ) (struct cpumask const*) ;int irq_dest_mode; int irq_delivery_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (unsigned int,struct irq_cfg*,struct cpumask const*) ;
 struct cpumask* FUNC_2 (int) ;
 int VAR_4 ;
 struct irq_cfg* FUNC_3 (unsigned int) ;
 struct irq_desc* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct irq_cfg*) ;
 int FUNC_6 (unsigned int,int *,int ,char*) ;
 int FUNC_7 (struct cpumask const*) ;
 int FUNC_8 (int) ;
 int VAR_5 ;
 int FUNC_9 (int,unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_10(char *VAR_6, unsigned int VAR_7, int VAR_8, int VAR_9,
         unsigned long VAR_10, int VAR_11)
{
 const struct cpumask *VAR_12 = FUNC_2(VAR_8);
 struct irq_desc *VAR_13 = FUNC_4(VAR_7);
 struct irq_cfg *VAR_14;
 int VAR_15;
 unsigned long VAR_16;
 struct uv_IO_APIC_route_entry *VAR_17;
 int VAR_18;

 FUNC_0(sizeof(struct uv_IO_APIC_route_entry) !=
   sizeof(unsigned long));

 VAR_14 = FUNC_3(VAR_7);

 VAR_18 = FUNC_1(VAR_7, VAR_14, VAR_12);
 if (VAR_18 != 0)
  return VAR_18;

 if (VAR_11 == VAR_2)
  VAR_13->status |= VAR_1;
 else
  VAR_13->status |= VAR_0;

 FUNC_6(VAR_7, &VAR_5, VAR_4,
          VAR_6);

 VAR_16 = 0;
 VAR_17 = (struct uv_IO_APIC_route_entry *)&VAR_16;
 VAR_17->vector = VAR_14->vector;
 VAR_17->delivery_mode = VAR_3->irq_delivery_mode;
 VAR_17->dest_mode = VAR_3->irq_dest_mode;
 VAR_17->polarity = 0;
 VAR_17->trigger = 0;
 VAR_17->mask = 0;
 VAR_17->dest = VAR_3->cpu_mask_to_apicid(VAR_12);

 VAR_15 = FUNC_8(VAR_9);
 FUNC_9(VAR_15, VAR_10, VAR_16);

 if (VAR_14->move_in_progress)
  FUNC_5(VAR_14);

 return VAR_7;
}

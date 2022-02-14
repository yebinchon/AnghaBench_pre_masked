
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irte {int present; int vector; unsigned int dest; int mask; int trigger; int polarity; int dest_mode; int delivery_mode; int dest_id; int dlvry_mode; scalar_t__ trigger_mode; int dst_mode; } ;
struct intel_iommu {int dummy; } ;
struct IR_IO_APIC_route_entry {int index2; int format; int index; int vector; scalar_t__ zero; } ;
struct IO_APIC_route_entry {int present; int vector; unsigned int dest; int mask; int trigger; int polarity; int dest_mode; int delivery_mode; int dest_id; int dlvry_mode; scalar_t__ trigger_mode; int dst_mode; } ;
typedef int irte ;
struct TYPE_2__ {int irq_dest_mode; int irq_delivery_mode; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct intel_iommu*,int,int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct intel_iommu* FUNC_2 (int) ;
 int FUNC_3 (struct irte*,int ,int) ;
 int FUNC_4 (int,struct irte*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct irte*,int) ;

int FUNC_7(int VAR_2, int VAR_3,
         struct IO_APIC_route_entry *VAR_4,
         unsigned int VAR_5, int VAR_6,
         int VAR_7, int VAR_8, int VAR_9)
{



 FUNC_3(VAR_4,0,sizeof(*VAR_4));

 if (VAR_1) {
  struct intel_iommu *VAR_10 = FUNC_2(VAR_2);
  struct irte VAR_11;
  struct IR_IO_APIC_route_entry *VAR_12 =
   (struct IR_IO_APIC_route_entry *) VAR_4;
  int VAR_13;

  if (!VAR_10)
   FUNC_5("No mapping iommu for ioapic %d\n", VAR_2);

  VAR_13 = FUNC_1(VAR_10, VAR_3, 1);
  if (VAR_13 < 0)
   FUNC_5("Failed to allocate IRTE for ioapic %d\n", VAR_2);

  FUNC_3(&VAR_11, 0, sizeof(VAR_11));

  VAR_11.present = 1;
  VAR_11.dst_mode = VAR_0->irq_dest_mode;







  VAR_11.trigger_mode = 0;
  VAR_11.dlvry_mode = VAR_0->irq_delivery_mode;
  VAR_11.vector = VAR_8;
  VAR_11.dest_id = FUNC_0(VAR_5);


  FUNC_6(&VAR_11, VAR_2);

  FUNC_4(VAR_3, &VAR_11);

  VAR_12->index2 = (VAR_13 >> 15) & 0x1;
  VAR_12->zero = 0;
  VAR_12->format = 1;
  VAR_12->index = (VAR_13 & 0x7fff);




  VAR_12->vector = VAR_9;
 } else {
  VAR_4->delivery_mode = VAR_0->irq_delivery_mode;
  VAR_4->dest_mode = VAR_0->irq_dest_mode;
  VAR_4->dest = VAR_5;
  VAR_4->vector = VAR_8;
 }

 VAR_4->mask = 0;
 VAR_4->trigger = VAR_6;
 VAR_4->polarity = VAR_7;




 if (VAR_6)
  VAR_4->mask = 1;
 return 0;
}

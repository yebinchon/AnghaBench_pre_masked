
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct io_apic_irq_attr {int dummy; } ;
struct TYPE_4__ {scalar_t__ apicid; } ;
struct TYPE_3__ {int srcbus; scalar_t__ dstapic; int srcbusirq; int dstirq; int irqtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct io_apic_irq_attr*,int,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int,int ) ;

int FUNC_7(int VAR_8, int VAR_9, int VAR_10,
    struct io_apic_irq_attr *VAR_11)
{
 int VAR_12, VAR_13, VAR_14 = -1;

 FUNC_1(VAR_0,
      "querying PCI -> IRQ mapping bus:%d, slot:%d, pin:%d.\n",
      VAR_8, VAR_9, VAR_10);
 if (FUNC_6(VAR_8, VAR_3)) {
  FUNC_1(VAR_1,
       "PCI BIOS passed nonexistent PCI bus %d!\n", VAR_8);
  return -1;
 }
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  int VAR_15 = VAR_6[VAR_13].srcbus;

  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
   if (VAR_4[VAR_12].apicid == VAR_6[VAR_13].dstapic ||
       VAR_6[VAR_13].dstapic == VAR_2)
    break;

  if (!FUNC_6(VAR_15, VAR_3) &&
      !VAR_6[VAR_13].irqtype &&
      (VAR_8 == VAR_15) &&
      (VAR_9 == ((VAR_6[VAR_13].srcbusirq >> 2) & 0x1f))) {
   int VAR_16 = FUNC_4(VAR_13, VAR_12, VAR_6[VAR_13].dstirq);

   if (!(VAR_12 || FUNC_0(VAR_16)))
    continue;

   if (VAR_10 == (VAR_6[VAR_13].srcbusirq & 3)) {
    FUNC_5(VAR_11, VAR_12,
           VAR_6[VAR_13].dstirq,
           FUNC_3(VAR_13),
           FUNC_2(VAR_13));
    return VAR_16;
   }




   if (VAR_14 < 0) {
    FUNC_5(VAR_11, VAR_12,
           VAR_6[VAR_13].dstirq,
           FUNC_3(VAR_13),
           FUNC_2(VAR_13));
    VAR_14 = VAR_16;
   }
  }
 }
 return VAR_14;
}

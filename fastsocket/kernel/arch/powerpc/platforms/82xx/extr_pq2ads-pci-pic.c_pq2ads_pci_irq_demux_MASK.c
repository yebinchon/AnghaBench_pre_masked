
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pq2ads_pci_pic {int host; TYPE_1__* regs; } ;
struct irq_desc {struct pq2ads_pci_pic* handler_data; } ;
struct TYPE_2__ {int mask; int stat; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_0, struct irq_desc *VAR_1)
{
 struct pq2ads_pci_pic *VAR_2 = VAR_1->handler_data;
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6;

 for (;;) {
  VAR_3 = FUNC_1(&VAR_2->regs->stat);
  VAR_4 = FUNC_1(&VAR_2->regs->mask);

  VAR_5 = VAR_3 & ~VAR_4;

  if (!VAR_5)
   break;

  for (VAR_6 = 0; VAR_5 != 0; ++VAR_6, VAR_5 <<= 1) {
   if (VAR_5 & 0x80000000) {
    int VAR_7 = FUNC_2(VAR_2->host, VAR_6);
    FUNC_0(VAR_7);
   }
  }
 }
}

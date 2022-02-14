
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcap_chip {int isr_work; int workqueue; } ;
struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* ack ) (unsigned int) ;} ;


 struct pcap_chip* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_0, struct irq_desc *VAR_1)
{
 struct pcap_chip *VAR_2 = FUNC_0(VAR_0);

 VAR_1->chip->ack(VAR_0);
 FUNC_1(VAR_2->workqueue, &VAR_2->isr_work);
 return;
}

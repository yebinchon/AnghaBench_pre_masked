
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_chip {int dummy; } ;
struct mpic {scalar_t__ spurious_vec; scalar_t__* ipi_vecs; int flags; scalar_t__ irq_count; struct irq_chip hc_ht_irq; struct irq_chip hc_irq; struct irq_chip hc_ipi; scalar_t__ protected; } ;
struct irq_host {struct mpic* host_data; } ;
typedef scalar_t__ irq_hw_number_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct mpic*,scalar_t__) ;
 int FUNC_3 (struct mpic*,scalar_t__) ;
 int FUNC_4 (unsigned int,struct irq_chip*,int ) ;
 int FUNC_5 (unsigned int,struct mpic*) ;
 int FUNC_6 (unsigned int,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct irq_host *VAR_5, unsigned int VAR_6,
    irq_hw_number_t VAR_7)
{
 struct mpic *VAR_8 = VAR_5->host_data;
 struct irq_chip *VAR_9;

 FUNC_0("mpic: map virq %d, hwirq 0x%lx\n", VAR_6, VAR_7);

 if (VAR_7 == VAR_8->spurious_vec)
  return -VAR_0;
 if (VAR_8->protected && FUNC_7(VAR_7, VAR_8->protected))
  return -VAR_0;
 if (VAR_7 >= VAR_8->irq_count)
  return -VAR_0;

 FUNC_3(VAR_8, VAR_7);


 VAR_9 = &VAR_8->hc_irq;







 FUNC_0("mpic: mapping to irq chip @%p\n", VAR_9);

 FUNC_5(VAR_6, VAR_8);
 FUNC_4(VAR_6, VAR_9, VAR_3);


 FUNC_6(VAR_6, VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_desc {unsigned int status; int handle_irq; } ;
typedef int irq_hw_number_t ;
struct TYPE_4__ {scalar_t__ hwirq; } ;
struct TYPE_3__ {int sc_siel; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct irq_desc* FUNC_0 (unsigned int) ;
 int VAR_5 ;
 unsigned int FUNC_1 (int *) ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (int *,unsigned int) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_8, unsigned int VAR_9)
{
 struct irq_desc *VAR_10 = FUNC_0(VAR_8);

 VAR_10->status &= ~(VAR_4 | VAR_0);
 VAR_10->status |= VAR_9 & VAR_4;
 if (VAR_9 & (VAR_2 | VAR_3))
  VAR_10->status |= VAR_0;

 if (VAR_9 & VAR_1) {
  irq_hw_number_t VAR_11 = (unsigned int)VAR_6[VAR_8].hwirq;
  unsigned int VAR_12 = FUNC_1(&VAR_7->sc_siel);


  if ((VAR_11 & 1) == 0) {
   VAR_12 |= (0x80000000 >> VAR_11);
   FUNC_2(&VAR_7->sc_siel, VAR_12);
   VAR_10->handle_irq = VAR_5;
  }
 }
 return 0;
}

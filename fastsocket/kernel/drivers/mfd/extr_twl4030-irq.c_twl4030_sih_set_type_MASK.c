
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sih_agent {unsigned int irq_base; int edge_work; int edge_change; } ;
struct irq_desc {unsigned int status; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct sih_agent* FUNC_1 (unsigned int) ;
 struct irq_desc* FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (int ,int *) ;
 int VAR_4 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(unsigned VAR_6, unsigned VAR_7)
{
 struct sih_agent *VAR_8 = FUNC_1(VAR_6);
 struct irq_desc *VAR_9 = FUNC_2(VAR_6);
 unsigned long VAR_10;

 if (!VAR_9) {
  FUNC_3("twl4030: Invalid IRQ: %d\n", VAR_6);
  return -VAR_0;
 }

 if (VAR_7 & ~(VAR_1 | VAR_2))
  return -VAR_0;

 FUNC_5(&VAR_4, VAR_10);
 if ((VAR_9->status & VAR_3) != VAR_7) {
  VAR_9->status &= ~VAR_3;
  VAR_9->status |= VAR_7;
  VAR_8->edge_change |= FUNC_0(VAR_6 - VAR_8->irq_base);
  FUNC_4(VAR_5, &VAR_8->edge_work);
 }
 FUNC_6(&VAR_4, VAR_10);
 return 0;
}

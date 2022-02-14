
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_host {int inval_irq; } ;
struct TYPE_2__ {struct irq_host* host; int hwirq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

unsigned int FUNC_3(struct irq_host *VAR_5,
       unsigned int VAR_6,
       unsigned int VAR_7)
{
 unsigned long VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11 = VAR_0;

 if (VAR_6 == 0 || VAR_6 > (VAR_4 - VAR_1))
  return VAR_0;

 FUNC_1(&VAR_2, VAR_8);


 if (VAR_6 == 1 && VAR_7 >= VAR_1 &&
     VAR_7 < VAR_4 && VAR_3[VAR_7].host == ((void*)0)) {
  VAR_11 = VAR_7;
  goto hint_found;
 }




 for (VAR_9 = VAR_1, VAR_10 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (VAR_3[VAR_9].host != ((void*)0))
   VAR_10 = 0;
  else
   VAR_10++;

  if (VAR_10 == VAR_6) {
   VAR_11 = VAR_9 - VAR_6 + 1;
   break;
  }
 }
 if (VAR_11 == VAR_0) {
  FUNC_2(&VAR_2, VAR_8);
  return VAR_0;
 }
 hint_found:
 for (VAR_9 = VAR_11; VAR_9 < (VAR_11 + VAR_6); VAR_9++) {
  VAR_3[VAR_9].hwirq = VAR_5->inval_irq;
  FUNC_0();
  VAR_3[VAR_9].host = VAR_5;
 }
 FUNC_2(&VAR_2, VAR_8);
 return VAR_11;
}

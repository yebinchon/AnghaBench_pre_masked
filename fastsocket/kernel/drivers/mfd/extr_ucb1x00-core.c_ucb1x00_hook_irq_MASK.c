
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_irq {void (* fn ) (int,void*) ;void* devid; } ;
struct ucb1x00 {int lock; struct ucb1x00_irq* irq_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ucb1x00 *VAR_2, unsigned int VAR_3, void (*VAR_4)(int, void *), void *VAR_5)
{
 struct ucb1x00_irq *VAR_6;
 int VAR_7 = -VAR_1;

 if (VAR_3 < 16) {
  VAR_6 = VAR_2->irq_handler + VAR_3;
  VAR_7 = -VAR_0;

  FUNC_0(&VAR_2->lock);
  if (VAR_6->fn == ((void*)0)) {
   VAR_6->devid = VAR_5;
   VAR_6->fn = VAR_4;
   VAR_7 = 0;
  }
  FUNC_1(&VAR_2->lock);
 }
 return VAR_7;
}

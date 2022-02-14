
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* irq_handlers; } ;
struct TYPE_3__ {void (* callback ) (void*) ;void* data; scalar_t__ irq_mask; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 () ;

void FUNC_2(unsigned long VAR_2, void (*VAR_3)(void *VAR_4),
    void *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_1.irq_handlers[VAR_6].callback == VAR_3 &&
      VAR_1.irq_handlers[VAR_6].data == VAR_5) {
   VAR_1.irq_handlers[VAR_6].irq_mask = 0;
   VAR_1.irq_handlers[VAR_6].callback = ((void*)0);
   VAR_1.irq_handlers[VAR_6].data = ((void*)0);
   FUNC_1();
   return;
  }
 }

 FUNC_0();
}

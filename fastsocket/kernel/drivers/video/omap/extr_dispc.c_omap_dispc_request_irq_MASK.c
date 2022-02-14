
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* irq_handlers; } ;
struct TYPE_3__ {void (* callback ) (void*) ;unsigned long irq_mask; void* data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 () ;

int FUNC_2(unsigned long VAR_3, void (*VAR_4)(void *VAR_5),
      void *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_4 == ((void*)0));

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_2.irq_handlers[VAR_7].callback)
   continue;

  VAR_2.irq_handlers[VAR_7].irq_mask = VAR_3;
  VAR_2.irq_handlers[VAR_7].callback = VAR_4;
  VAR_2.irq_handlers[VAR_7].data = VAR_6;
  FUNC_1();

  return 0;
 }

 return -VAR_0;
}

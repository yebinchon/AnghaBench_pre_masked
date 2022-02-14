
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* irq_handlers; } ;
struct TYPE_3__ {unsigned long irq_mask; int callback; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,unsigned long) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_4;
 unsigned long VAR_5 = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!VAR_3.irq_handlers[VAR_4].callback)
   continue;

  VAR_5 |= VAR_3.irq_handlers[VAR_4].irq_mask;
 }

 FUNC_1(1);
 FUNC_0(VAR_0, 0x7fff, VAR_5);
 FUNC_1(0);
}

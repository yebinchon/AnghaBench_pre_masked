
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcf50633 {TYPE_1__* irq_handler; } ;
struct TYPE_2__ {int data; int (* handler ) (int,int ) ;} ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct pcf50633 *VAR_0, int VAR_1)
{
 if (VAR_0->irq_handler[VAR_1].handler)
  VAR_0->irq_handler[VAR_1].handler(VAR_1, VAR_0->irq_handler[VAR_1].data);
}

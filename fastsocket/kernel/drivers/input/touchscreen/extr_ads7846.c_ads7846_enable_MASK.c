
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ads7846 {TYPE_1__* spi; scalar_t__ irq_disabled; scalar_t__ disabled; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ads7846 *VAR_0)
{
 if (!VAR_0->disabled)
  return;

 VAR_0->disabled = 0;
 VAR_0->irq_disabled = 0;
 FUNC_0(VAR_0->spi->irq);
}

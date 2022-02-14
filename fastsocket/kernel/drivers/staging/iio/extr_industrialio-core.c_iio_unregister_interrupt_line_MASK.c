
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {TYPE_1__** interrupts; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct iio_dev *VAR_0, int VAR_1)
{

 FUNC_0();
 FUNC_1(VAR_0->interrupts[VAR_1]->irq,
   VAR_0->interrupts[VAR_1]);
 FUNC_2(VAR_0->interrupts[VAR_1]);
}

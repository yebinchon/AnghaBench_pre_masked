
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633 {int irq_work; int work_queue; int irq; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct pcf50633 *VAR_3 = VAR_2;

 FUNC_0(VAR_3->dev, "pcf50633_irq\n");

 FUNC_2(VAR_3->dev);
 FUNC_1(VAR_3->irq);
 FUNC_3(VAR_3->work_queue, &VAR_3->irq_work);

 return VAR_0;
}

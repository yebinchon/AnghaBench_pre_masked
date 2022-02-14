
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int irq_work; int irq_wq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct wm831x *VAR_3 = VAR_2;



 FUNC_0(VAR_1);

 FUNC_1(VAR_3->irq_wq, &VAR_3->irq_work);

 return VAR_0;
}

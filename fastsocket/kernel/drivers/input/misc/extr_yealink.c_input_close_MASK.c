
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yealink_dev {int shutdown; int urb_irq; int urb_ctl; } ;
struct input_dev {int dummy; } ;


 struct yealink_dev* FUNC_0 (struct input_dev*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct yealink_dev *VAR_1 = FUNC_0(VAR_0);

 VAR_1->shutdown = 1;




 FUNC_1();

 FUNC_2(VAR_1->urb_ctl);
 FUNC_2(VAR_1->urb_irq);

 VAR_1->shutdown = 0;
 FUNC_1();
}

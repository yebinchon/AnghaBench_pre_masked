
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qe_pin {int num; struct qe_gpio_chip* controller; } ;
struct qe_gpio_chip {int lock; int * pin_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct qe_pin*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct qe_pin *VAR_1)
{
 struct qe_gpio_chip *VAR_2 = VAR_1->controller;
 unsigned long VAR_3;
 const int VAR_4 = VAR_1->num;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_3(VAR_0, &VAR_2->pin_flags[VAR_4]);
 FUNC_2(&VAR_2->lock, VAR_3);

 FUNC_0(VAR_1);
}

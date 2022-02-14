
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct matrix_keypad {int stopped; TYPE_1__ work; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (struct matrix_keypad*) ;
 int FUNC_1 (int *) ;
 struct matrix_keypad* FUNC_2 (struct input_dev*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_0)
{
 struct matrix_keypad *VAR_1 = FUNC_2(VAR_0);

 VAR_1->stopped = 1;
 FUNC_3();
 FUNC_1(&VAR_1->work.work);




 FUNC_0(VAR_1);
}

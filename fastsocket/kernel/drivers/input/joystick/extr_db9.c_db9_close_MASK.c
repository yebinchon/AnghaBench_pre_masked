
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {int dummy; } ;
struct input_dev {int dummy; } ;
struct db9 {int mutex; TYPE_1__* pd; int timer; int used; } ;
struct TYPE_2__ {struct parport* port; } ;


 int FUNC_0 (int *) ;
 struct db9* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct parport*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct parport*,int) ;

__attribute__((used)) static void FUNC_7(struct input_dev *VAR_0)
{
 struct db9 *VAR_1 = FUNC_1(VAR_0);
 struct parport *VAR_2 = VAR_1->pd->port;

 FUNC_2(&VAR_1->mutex);
 if (!--VAR_1->used) {
  FUNC_0(&VAR_1->timer);
  FUNC_6(VAR_2, 0x00);
  FUNC_4(VAR_2);
  FUNC_5(VAR_1->pd);
 }
 FUNC_3(&VAR_1->mutex);
}

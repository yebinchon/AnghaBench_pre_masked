
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tgfx {int sem; TYPE_1__* pd; int timer; int used; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (int *) ;
 struct tgfx* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_0)
{
 struct tgfx *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->sem);
 if (!--VAR_1->used) {
  FUNC_0(&VAR_1->timer);
  FUNC_5(VAR_1->pd->port, 0x00);
  FUNC_4(VAR_1->pd);
 }
 FUNC_3(&VAR_1->sem);
}

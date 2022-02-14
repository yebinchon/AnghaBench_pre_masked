
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct gc {int mutex; int timer; TYPE_1__* pd; int used; } ;
struct TYPE_2__ {int port; } ;


 scalar_t__ VAR_0 ;
 struct gc* FUNC_0 (struct input_dev*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_2)
{
 struct gc *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_3->mutex);
 if (VAR_4)
  return VAR_4;

 if (!VAR_3->used++) {
  FUNC_4(VAR_3->pd);
  FUNC_5(VAR_3->pd->port, 0x04);
  FUNC_1(&VAR_3->timer, VAR_1 + VAR_0);
 }

 FUNC_3(&VAR_3->mutex);
 return 0;
}

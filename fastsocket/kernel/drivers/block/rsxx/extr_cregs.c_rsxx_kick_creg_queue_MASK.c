
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int queue; } ;
struct rsxx_cardinfo {TYPE_1__ creg_ctrl; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rsxx_cardinfo *VAR_0)
{
 FUNC_2(&VAR_0->creg_ctrl.lock);
 if (!FUNC_1(&VAR_0->creg_ctrl.queue))
  FUNC_0(VAR_0);
 FUNC_3(&VAR_0->creg_ctrl.lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ state; int * adjust_state; int lock; int state_queue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct phy_device *VAR_1)
{
 FUNC_0(&VAR_1->state_queue);

 FUNC_1(&VAR_1->lock);
 if (VAR_1->state > VAR_0)
  VAR_1->state = VAR_0;
 FUNC_2(&VAR_1->lock);

 VAR_1->adjust_state = ((void*)0);
}

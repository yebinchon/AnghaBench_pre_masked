
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {scalar_t__ medium_state; int state_change_wq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;

int
FUNC_1(struct tape_device *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_1->state_change_wq,
  (VAR_1->medium_state == VAR_0));
}

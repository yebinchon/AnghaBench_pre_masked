
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {scalar_t__ driver_type; int dev; int rc_map; int * input_dev; int timer_keyup; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rc_dev*) ;

void FUNC_6(struct rc_dev *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->timer_keyup);

 if (VAR_1->driver_type == VAR_0)
  FUNC_5(VAR_1);

 FUNC_3(VAR_1->input_dev);
 VAR_1->input_dev = ((void*)0);

 FUNC_4(&VAR_1->rc_map);
 FUNC_0(1, "Freed keycode table\n");

 FUNC_2(&VAR_1->dev);
}

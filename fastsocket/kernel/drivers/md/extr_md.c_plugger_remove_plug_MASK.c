
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plug_handle {int unplug_timer; int unplug_flag; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int FUNC_2(struct plug_handle *VAR_1)
{
 if (FUNC_1(VAR_0, &VAR_1->unplug_flag)) {
  FUNC_0(&VAR_1->unplug_timer);
  return 1;
 } else
  return 0;
}

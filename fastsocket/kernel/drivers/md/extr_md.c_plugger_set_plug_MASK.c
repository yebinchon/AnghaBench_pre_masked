
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plug_handle {int unplug_timer; int unplug_flag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct plug_handle *VAR_2)
{
 if (!FUNC_2(VAR_0, &VAR_2->unplug_flag))
  FUNC_0(&VAR_2->unplug_timer, VAR_1 + FUNC_1(3)+1);
}

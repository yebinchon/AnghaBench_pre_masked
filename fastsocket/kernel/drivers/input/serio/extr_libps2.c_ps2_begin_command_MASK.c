
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int serio; int cmd_mutex; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ps2dev *VAR_0)
{
 FUNC_2(&VAR_0->cmd_mutex);

 if (FUNC_0(VAR_0->serio))
  FUNC_1();
}

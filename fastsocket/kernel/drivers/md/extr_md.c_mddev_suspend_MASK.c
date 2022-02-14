
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int suspended; int safemode_timer; TYPE_1__* pers; int active_io; int sb_wait; } ;
struct TYPE_2__ {int (* quiesce ) (struct mddev*,int) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mddev*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct mddev *VAR_0)
{
 FUNC_0(VAR_0->suspended);
 VAR_0->suspended = 1;
 FUNC_4();
 FUNC_5(VAR_0->sb_wait, FUNC_1(&VAR_0->active_io) == 0);
 VAR_0->pers->quiesce(VAR_0, 1);

 FUNC_2(&VAR_0->safemode_timer);
}

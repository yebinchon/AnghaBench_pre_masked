
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tflags; int timerlock; int timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(int VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 FUNC_1(&VAR_2->timerlock, VAR_8);
 if ((VAR_6 & VAR_1) && (!(VAR_2->tflags & VAR_1))) {

  VAR_3 = 0;
  VAR_4 = 0;
 }
 VAR_9 = VAR_2->tflags;
 if (VAR_7)
  VAR_2->tflags |= VAR_6;
 else
  VAR_2->tflags &= ~VAR_6;
 if (VAR_2->tflags && !VAR_9)
  FUNC_0(&VAR_2->timer, VAR_5+VAR_0);
 FUNC_2(&VAR_2->timerlock, VAR_8);
}

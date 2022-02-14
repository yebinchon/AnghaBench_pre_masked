
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; int timer_start; } ;
struct tcpcb {TYPE_1__ tentry; scalar_t__* t_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tcpcb*) ;

void
FUNC_1(struct tcpcb *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3->t_timer[VAR_4] = 0;
 VAR_3->tentry.timer_start = VAR_2;
 VAR_3->tentry.index = VAR_0;
}

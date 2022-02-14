
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ev_get; TYPE_1__* ev_put; TYPE_1__* ev_queue; } ;
struct s_smc {TYPE_2__ q; } ;
struct TYPE_3__ {int class; int event; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct s_smc*,int ,int ) ;

void FUNC_2(struct s_smc *VAR_3, int VAR_4, int VAR_5)
{
 FUNC_0("queue class %d event %d\n",VAR_4,VAR_5) ;
 VAR_3->q.ev_put->class = VAR_4 ;
 VAR_3->q.ev_put->event = VAR_5 ;
 if (++VAR_3->q.ev_put == &VAR_3->q.ev_queue[VAR_0])
  VAR_3->q.ev_put = VAR_3->q.ev_queue ;

 if (VAR_3->q.ev_put == VAR_3->q.ev_get) {
  FUNC_1(VAR_3,VAR_1, VAR_2) ;
 }
}

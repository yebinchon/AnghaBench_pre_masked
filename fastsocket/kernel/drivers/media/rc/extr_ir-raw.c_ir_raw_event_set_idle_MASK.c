
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rc_dev {int idle; int (* s_idle ) (struct rc_dev*,int) ;TYPE_1__* raw; } ;
struct TYPE_5__ {int timeout; } ;
struct TYPE_4__ {TYPE_2__ this_ev; } ;


 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct rc_dev*,TYPE_2__*) ;
 int FUNC_3 (struct rc_dev*,int) ;

void FUNC_4(struct rc_dev *VAR_0, bool VAR_1)
{
 if (!VAR_0->raw)
  return;

 FUNC_0(2, "%s idle mode\n", VAR_1 ? "enter" : "leave");

 if (VAR_1) {
  VAR_0->raw->this_ev.timeout = 1;
  FUNC_2(VAR_0, &VAR_0->raw->this_ev);
  FUNC_1(&VAR_0->raw->this_ev);
 }

 if (VAR_0->s_idle)
  VAR_0->s_idle(VAR_0, VAR_1);

 VAR_0->idle = VAR_1;
}

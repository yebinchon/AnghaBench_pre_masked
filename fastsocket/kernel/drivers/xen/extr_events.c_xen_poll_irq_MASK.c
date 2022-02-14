
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_poll {int nr_ports; int ports; scalar_t__ timeout; } ;
typedef int evtchn_port_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,struct sched_poll*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(int VAR_1)
{
 evtchn_port_t VAR_2 = FUNC_3(VAR_1);

 if (FUNC_2(VAR_2)) {
  struct sched_poll VAR_3;

  VAR_3.nr_ports = 1;
  VAR_3.timeout = 0;
  FUNC_4(VAR_3.ports, &VAR_2);

  if (FUNC_1(VAR_0, &VAR_3) != 0)
   FUNC_0();
 }
}

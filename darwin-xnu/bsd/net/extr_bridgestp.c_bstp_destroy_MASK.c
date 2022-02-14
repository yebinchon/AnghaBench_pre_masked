
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_port {scalar_t__ bp_active; int bp_rtagetask; int bp_statetask; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct bstp_port *VAR_0)
{
 FUNC_0(VAR_0->bp_active == 0, ("port is still attached"));
 FUNC_1(&VAR_0->bp_statetask);
 FUNC_1(&VAR_0->bp_rtagetask);
}

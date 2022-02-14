
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ipmi_smi_t ;
struct TYPE_3__ {int recv_tasklet; int watchdog_pretimeouts_to_deliver; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(ipmi_smi_t VAR_0)
{
 FUNC_0(&VAR_0->watchdog_pretimeouts_to_deliver, 1);
 FUNC_1(&VAR_0->recv_tasklet);
}

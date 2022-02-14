
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_port {int rport_work; TYPE_1__* adapter; scalar_t__ rport; int rport_task; } ;
struct TYPE_2__ {int work_queue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct zfcp_port*) ;
 int FUNC_2 (struct zfcp_port*) ;

void FUNC_3(struct zfcp_port *VAR_1)
{
 FUNC_1(VAR_1);
 VAR_1->rport_task = VAR_0;

 if (VAR_1->rport && FUNC_0(VAR_1->adapter->work_queue,
          &VAR_1->rport_work))
  return;

 FUNC_2(VAR_1);
}

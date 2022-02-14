
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int comm; int pid; } ;
struct TYPE_3__ {int version; int release; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int ,int ,int ,int,int ) ;
 int FUNC_3 (int *,int *,unsigned long*) ;
 scalar_t__ FUNC_4 (int ,char*) ;

void FUNC_5(void)
{
 unsigned long VAR_1;

 FUNC_2("Pid: %d, comm: %.20s %s %s %.*s\n",
  VAR_0->pid, VAR_0->comm, FUNC_1(),
  FUNC_0()->release,
  (int)FUNC_4(FUNC_0()->version, " "),
  FUNC_0()->version);
 FUNC_3(((void*)0), ((void*)0), &VAR_1);
}

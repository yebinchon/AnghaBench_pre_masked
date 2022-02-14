
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* arg; int (* f ) (void*) ;scalar_t__ cpu; } ;
typedef TYPE_1__ xcArg_t ;
typedef scalar_t__ processorid_t ;
typedef int (* dtrace_xcall_t ) (void*) ;
struct TYPE_4__ {scalar_t__ cpu_id; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*) ;
 int VAR_5 ;

void
FUNC_5(processorid_t VAR_6, dtrace_xcall_t VAR_7, void *VAR_8)
{
#pragma unused(cpu)

 FUNC_0(VAR_6 == VAR_0->cpu_id || VAR_6 == VAR_1);

 (*VAR_7)(VAR_8);
 return;

}

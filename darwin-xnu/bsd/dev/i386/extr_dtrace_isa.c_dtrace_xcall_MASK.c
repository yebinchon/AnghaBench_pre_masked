
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* arg; int f; scalar_t__ cpu; } ;
typedef TYPE_1__ xcArg_t ;
typedef scalar_t__ processorid_t ;
typedef int dtrace_xcall_t ;
typedef int cpu_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,void*) ;
 int VAR_3 ;

void
FUNC_2(processorid_t VAR_4, dtrace_xcall_t VAR_5, void *VAR_6)
{
 xcArg_t VAR_7;

 VAR_7.cpu = VAR_4;
 VAR_7.f = VAR_5;
 VAR_7.arg = VAR_6;

 if (VAR_4 == VAR_2) {
  FUNC_1 (VAR_1, VAR_0, VAR_3, (void*)&VAR_7);
 }
 else {
  FUNC_1 (FUNC_0((cpu_t)VAR_4), VAR_0, VAR_3, (void*)&VAR_7);
 }
}

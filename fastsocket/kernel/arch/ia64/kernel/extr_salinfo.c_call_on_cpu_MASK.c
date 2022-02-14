
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cpumask_t ;
struct TYPE_3__ {int cpus_allowed; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 void FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, void (*VAR_2)(void *), void *VAR_3)
{
 cpumask_t VAR_4 = VAR_0->cpus_allowed;
 cpumask_t VAR_5 = FUNC_0(VAR_1);
 FUNC_1(VAR_0, VAR_5);
 (*VAR_2)(VAR_3);
 FUNC_1(VAR_0, VAR_4);
}

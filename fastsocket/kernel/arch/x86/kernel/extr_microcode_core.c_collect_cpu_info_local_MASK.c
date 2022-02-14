
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_info_ctx {int cpu_sig; int err; } ;
struct TYPE_2__ {int (* collect_cpu_info ) (int ,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct cpu_info_ctx *VAR_2 = VAR_1;

 VAR_2->err = VAR_0->collect_cpu_info(FUNC_0(),
         VAR_2->cpu_sig);
}

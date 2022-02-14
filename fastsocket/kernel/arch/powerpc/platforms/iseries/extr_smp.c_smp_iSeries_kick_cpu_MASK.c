
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dyn_proc_status; } ;
struct TYPE_3__ {int cpu_start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(int VAR_3)
{
 FUNC_0((VAR_3 < 0) || (VAR_3 >= VAR_0));


 if (VAR_1[VAR_3].dyn_proc_status >= 2)
  return;






 VAR_2[VAR_3].cpu_start = 1;
}

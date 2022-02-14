
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* cpu_warm_data_t ;
struct TYPE_2__ {scalar_t__ cwd_result; int cwd_deadline; int cwd_call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(
  void *VAR_2)
{
 cpu_warm_data_t VAR_3 = (cpu_warm_data_t)VAR_2;

 FUNC_0(VAR_3->cwd_call, VAR_3->cwd_deadline, VAR_1 | VAR_0);
 VAR_3->cwd_result = 0;

 return;
}

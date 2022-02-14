
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_t ;
struct uthread {int uu_aio_task; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

task_t
FUNC_2(void)
{
 return ((struct uthread *)FUNC_1(FUNC_0()))->uu_aio_task;
}

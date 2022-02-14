
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_3__ {scalar_t__ last_run_time; scalar_t__ last_made_runnable_time; } ;



uint64_t
FUNC_0(thread_t VAR_0)
{
 return VAR_0->last_made_runnable_time - VAR_0->last_run_time;
}

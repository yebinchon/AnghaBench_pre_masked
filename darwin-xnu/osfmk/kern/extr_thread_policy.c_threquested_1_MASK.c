
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct TYPE_5__ {int requested_policy; TYPE_1__* task; } ;
struct TYPE_4__ {int requested_policy; } ;



uintptr_t
FUNC_0(thread_t VAR_0)
{

 return *(uintptr_t*)&VAR_0->task->requested_policy;




}

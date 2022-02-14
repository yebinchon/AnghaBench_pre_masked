
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_2__* thread_t ;
struct TYPE_8__ {scalar_t__ bsd_info; } ;
struct TYPE_6__ {scalar_t__ cthread_self; } ;
struct TYPE_7__ {scalar_t__ inspection; TYPE_4__* task; TYPE_1__ machine; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;

uint64_t
FUNC_2(
 thread_t VAR_2)
{
 uint64_t VAR_3;
 uint64_t VAR_4;

 if (VAR_2 == VAR_0)
  return 0;

 VAR_4 = VAR_2->machine.cthread_self;
 if (VAR_4 == 0)
  return 0;

 if (VAR_2->inspection == VAR_1)
  VAR_3 = VAR_4 + FUNC_1(VAR_2->task);
 else if (VAR_2->task->bsd_info)
  VAR_3 = VAR_4 + FUNC_0(VAR_2->task->bsd_info);
 else
  VAR_3 = 0;

 return VAR_3;
}

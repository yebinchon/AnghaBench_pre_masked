
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_3__* thread_t ;
struct TYPE_6__ {scalar_t__ cthread_self; } ;
struct TYPE_8__ {TYPE_2__* task; TYPE_1__ machine; } ;
struct TYPE_7__ {scalar_t__ bsd_info; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

uint64_t
FUNC_1(
 thread_t VAR_1)
{
 uint64_t VAR_2;
 uint64_t VAR_3;
 uint64_t VAR_4;

 if (VAR_1 == VAR_0)
  return 0;

 VAR_4 = VAR_1->machine.cthread_self;
 if (VAR_4 == 0)
  return 0;

 if (VAR_1->task->bsd_info) {
  VAR_3 = FUNC_0(VAR_1->task->bsd_info);


  if (VAR_3 == 0) {
   VAR_2 = 0;
  } else {
   VAR_2 = VAR_4 + VAR_3;
  }
 } else {
  VAR_2 = 0;
 }

 return VAR_2;
}

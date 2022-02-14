
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ failureCount; } ;
typedef TYPE_1__ TaskExecution ;


 scalar_t__ VAR_0 ;

bool
FUNC_0(TaskExecution *VAR_1)
{
 if (VAR_1->failureCount >= VAR_0)
 {
  return 1;
 }

 return 0;
}

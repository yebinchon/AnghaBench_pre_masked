
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ taskStatus; } ;
typedef TYPE_1__ WorkerTask ;
typedef scalar_t__ TaskStatus ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(WorkerTask *VAR_1)
{
 TaskStatus VAR_2 = VAR_1->taskStatus;
 if (VAR_2 == VAR_0)
 {
  return 1;
 }

 return 0;
}

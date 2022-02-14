
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ trackerFailureCount; scalar_t__ connectionFailureCount; } ;
typedef TYPE_1__ TaskTracker ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(TaskTracker *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_1->trackerFailureCount < VAR_0 &&
  VAR_1->connectionFailureCount < VAR_0)
 {
  VAR_2 = 1;
 }

 return VAR_2;
}

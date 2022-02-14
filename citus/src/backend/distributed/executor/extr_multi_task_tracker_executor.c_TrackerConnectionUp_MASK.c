
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ trackerStatus; int connectionId; } ;
typedef TYPE_1__ TaskTracker ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_1(TaskTracker *VAR_1)
{
 bool VAR_2 = 0;


 if (VAR_1->trackerStatus == VAR_0)
 {
  VAR_2 = FUNC_0(VAR_1->connectionId);
 }

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ TrackerStatus ;
struct TYPE_4__ {scalar_t__ trackerStatus; scalar_t__ connectPollCount; int connectionFailureCount; int connectionId; } ;
typedef TYPE_1__ TaskTracker ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(TaskTracker *VAR_5)
{
 TrackerStatus VAR_6 = VAR_5->trackerStatus;
 if (VAR_6 == VAR_1)
 {
  bool VAR_7 = FUNC_0(VAR_5->connectionId);
  if (VAR_7)
  {
   VAR_5->trackerStatus = VAR_1;
  }
  else
  {
   VAR_5->trackerStatus = VAR_2;


   FUNC_1(VAR_5->connectionId);
   VAR_5->connectionId = VAR_0;
  }
 }
 else if (VAR_6 == VAR_4 ||
    VAR_6 == VAR_3)
 {
  VAR_5->trackerStatus = FUNC_2(VAR_5);
 }
 else if (VAR_6 == VAR_2)
 {
  VAR_5->connectionFailureCount++;
  VAR_5->connectPollCount = 0;

  VAR_5->trackerStatus = VAR_4;
 }
}

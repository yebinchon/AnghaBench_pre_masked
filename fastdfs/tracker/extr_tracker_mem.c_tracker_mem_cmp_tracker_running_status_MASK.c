
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int running_time; int restart_interval; scalar_t__ if_leader; } ;
typedef TYPE_1__ TrackerRunningStatus ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 TrackerRunningStatus *VAR_2;
 TrackerRunningStatus *VAR_3;
 int VAR_4;

 VAR_2 = (TrackerRunningStatus *)VAR_0;
 VAR_3 = (TrackerRunningStatus *)VAR_1;

    if (VAR_2->if_leader)
    {
        return 1;
    }
    else if (VAR_3->if_leader)
    {
        return -1;
    }

 VAR_4 = VAR_2->running_time - VAR_3->running_time;
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 return VAR_3->restart_interval - VAR_2->restart_interval;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int if_leader; int running_time; int restart_interval; TYPE_1__* pTrackerServer; } ;
typedef TYPE_2__ TrackerRunningStatus ;
struct TYPE_6__ {int port; int ip_addr; } ;
struct TYPE_4__ {TYPE_3__* connections; } ;
typedef TYPE_3__ ConnectionInfo ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 TrackerRunningStatus *VAR_2;
 TrackerRunningStatus *VAR_3;
 ConnectionInfo *VAR_4;
 ConnectionInfo *VAR_5;
 int VAR_6;

 VAR_2 = (TrackerRunningStatus *)VAR_0;
 VAR_3 = (TrackerRunningStatus *)VAR_1;
 VAR_6 = VAR_2->if_leader - VAR_3->if_leader;
 if (VAR_6 != 0)
 {
  return VAR_6;
 }

 VAR_6 = VAR_2->running_time - VAR_3->running_time;
 if (VAR_6 != 0)
 {
  return VAR_6;
 }

 VAR_6 = VAR_3->restart_interval - VAR_2->restart_interval;
 if (VAR_6 != 0)
 {
  return VAR_6;
 }

 VAR_4 = VAR_2->pTrackerServer->connections;
 VAR_5 = VAR_3->pTrackerServer->connections;
 VAR_6 = FUNC_0(VAR_4->ip_addr, VAR_5->ip_addr);
 if (VAR_6 != 0)
 {
  return VAR_6;
 }

 return VAR_4->port - VAR_5->port;
}

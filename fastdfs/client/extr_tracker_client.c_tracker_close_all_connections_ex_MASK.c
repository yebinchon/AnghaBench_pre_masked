
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_3__ {int server_count; int * servers; } ;
typedef TYPE_1__ TrackerServerGroup ;


 int FUNC_0 (int *) ;

void FUNC_1(TrackerServerGroup *VAR_0)
{
 TrackerServerInfo *VAR_1;
 TrackerServerInfo *VAR_2;

 VAR_2 = VAR_0->servers + VAR_0->server_count;
 for (VAR_1=VAR_0->servers; VAR_1<VAR_2; VAR_1++)
 {
  FUNC_0(VAR_1);
 }
}

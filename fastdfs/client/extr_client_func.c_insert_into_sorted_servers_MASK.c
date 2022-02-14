
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_3__ {int server_count; int * servers; } ;
typedef TYPE_1__ TrackerServerGroup ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(TrackerServerGroup *VAR_0, TrackerServerInfo *VAR_1)

{
 TrackerServerInfo *VAR_2;
 for (VAR_2=VAR_0->servers+VAR_0->server_count;
  VAR_2>VAR_0->servers; VAR_2--)
 {
  if (FUNC_1(VAR_1, VAR_2-1) > 0)
  {
   FUNC_0(VAR_2, VAR_1,
    sizeof(TrackerServerInfo));
   return;
  }

  FUNC_0(VAR_2, VAR_2-1, sizeof(TrackerServerInfo));
 }

 FUNC_0(VAR_2, VAR_1, sizeof(TrackerServerInfo));
}

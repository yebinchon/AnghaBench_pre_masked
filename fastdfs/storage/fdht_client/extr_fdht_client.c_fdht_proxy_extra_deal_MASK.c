
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int server_count; int group_count; int * servers; TYPE_1__* groups; int proxy_server; int use_proxy; } ;
struct TYPE_4__ {int count; int ** servers; } ;
typedef TYPE_1__ ServerArray ;
typedef TYPE_2__ GroupArray ;
typedef int FDHTServerInfo ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(GroupArray *VAR_0, bool *VAR_1)
{
 int VAR_2;
 ServerArray *VAR_3;
 FDHTServerInfo **VAR_4;
 FDHTServerInfo **VAR_5;

 if (!VAR_0->use_proxy)
 {
  return;
 }

 *VAR_1 = 1;
 VAR_0->server_count = 1;
 FUNC_0(VAR_0->servers, &VAR_0->proxy_server, sizeof(FDHTServerInfo));


 VAR_3 = VAR_0->groups;
 for (VAR_2=0; VAR_2<VAR_0->group_count; VAR_2++)
 {
  VAR_5 = VAR_3->servers + VAR_3->count;
  for (VAR_4=VAR_3->servers; VAR_4<VAR_5; VAR_4++)

  {
   *VAR_4 = VAR_0->servers;
  }

  VAR_3++;
 }
}

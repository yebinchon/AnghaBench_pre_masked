
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sock; } ;
struct TYPE_5__ {int server_count; int use_proxy; TYPE_2__* servers; } ;
typedef TYPE_1__ GroupArray ;
typedef TYPE_2__ FDHTServerInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(GroupArray *VAR_0)
{
 FDHTServerInfo *VAR_1;
 FDHTServerInfo *VAR_2;

 if (VAR_0->servers != ((void*)0))
 {
  VAR_2 = VAR_0->servers + VAR_0->server_count;
  for (VAR_1=VAR_0->servers; VAR_1<VAR_2; VAR_1++)

  {
   if (VAR_1->sock >= 0)
   {
    if (!VAR_0->use_proxy)
    {
     FUNC_1(VAR_1);
    }
    FUNC_0(VAR_1->sock);
    VAR_1->sock = -1;
   }
  }
 }
}

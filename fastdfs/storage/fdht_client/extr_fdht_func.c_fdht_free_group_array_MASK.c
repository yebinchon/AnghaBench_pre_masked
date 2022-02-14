
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int group_count; int server_count; TYPE_1__* groups; TYPE_1__* servers; } ;
struct TYPE_6__ {int sock; struct TYPE_6__* servers; } ;
typedef TYPE_1__ ServerArray ;
typedef TYPE_2__ GroupArray ;
typedef TYPE_1__ FDHTServerInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(GroupArray *VAR_0)
{
 ServerArray *VAR_1;
 ServerArray *VAR_2;
 FDHTServerInfo *VAR_3;
 FDHTServerInfo *VAR_4;

 if (VAR_0->servers != ((void*)0))
 {
  VAR_2 = VAR_0->groups + VAR_0->group_count;
  for (VAR_1=VAR_0->groups; VAR_1<VAR_2;
    VAR_1++)
  {
   if (VAR_1->servers == ((void*)0))
   {
    continue;
   }

   FUNC_1(VAR_1->servers);
   VAR_1->servers = ((void*)0);
  }

  VAR_4 = VAR_0->servers + VAR_0->server_count;
  for (VAR_3=VAR_0->servers; VAR_3<VAR_4; VAR_3++)

  {
   if (VAR_3->sock >= 0)
   {
    FUNC_0(VAR_3->sock);
    VAR_3->sock = -1;
   }
  }

  FUNC_1(VAR_0->servers);
  VAR_0->servers = ((void*)0);
 }

 if (VAR_0->groups != ((void*)0))
 {
  FUNC_1(VAR_0->groups);
  VAR_0->groups = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sock; } ;
struct TYPE_5__ {int server_count; scalar_t__ use_proxy; TYPE_2__* servers; } ;
typedef TYPE_1__ GroupArray ;
typedef TYPE_2__ FDHTServerInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;

int FUNC_2(GroupArray *VAR_2, const bool VAR_3, int *VAR_4, int *VAR_5)

{
 FDHTServerInfo *VAR_6;
 FDHTServerInfo *VAR_7;
 int VAR_8;
 int VAR_9;

 *VAR_4 = 0;
 *VAR_5 = 0;
 if (VAR_2->servers == ((void*)0))
 {
  return VAR_0;
 }

 VAR_9 = 0;

 VAR_7 = VAR_2->servers + VAR_2->server_count;
 for (VAR_6=VAR_2->servers; VAR_6<VAR_7; VAR_6++)

 {
  if ((VAR_8=FUNC_0(VAR_6, VAR_1)) != 0)

  {
   VAR_9 = VAR_8;
   (*VAR_5)++;
  }
  else
  {
   (*VAR_4)++;
   if (VAR_3 || VAR_2->use_proxy)
   {
    FUNC_1(VAR_6->sock, 3600);
   }
  }
 }

 if (VAR_9 != 0)
 {
  return VAR_9;
 }
 else
 {
  return *VAR_4 > 0 ? 0: VAR_0;
 }
}

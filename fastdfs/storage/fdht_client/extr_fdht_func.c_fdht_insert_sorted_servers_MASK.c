
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int server_count; int * servers; } ;
typedef TYPE_1__ GroupArray ;
typedef int FDHTServerInfo ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(GroupArray *VAR_0, FDHTServerInfo *VAR_1)

{
 FDHTServerInfo *VAR_2;

 for (VAR_2=VAR_0->servers + VAR_0->server_count; VAR_2 > VAR_0->servers; VAR_2--)

 {
  if (FUNC_0(VAR_2-1, VAR_1)<0)
  {
   break;
  }

  FUNC_1(VAR_2, VAR_2 - 1, sizeof(FDHTServerInfo));
 }

 FUNC_1(VAR_2, VAR_1, sizeof(FDHTServerInfo));
}

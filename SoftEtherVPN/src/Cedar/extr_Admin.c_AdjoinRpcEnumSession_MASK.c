
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {scalar_t__ NumSession; int * Sessions; } ;
typedef int RPC_ENUM_SESSION_ITEM ;
typedef TYPE_1__ RPC_ENUM_SESSION ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int) ;

void FUNC_2(RPC_ENUM_SESSION *VAR_0, RPC_ENUM_SESSION *VAR_1)
{
 UINT VAR_2;
 UINT VAR_3, VAR_4;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->NumSession == 0)
 {
  return;
 }

 VAR_2 = VAR_0->NumSession;
 VAR_0->NumSession += VAR_1->NumSession;
 VAR_0->Sessions = FUNC_1(VAR_0->Sessions, sizeof(RPC_ENUM_SESSION_ITEM) * VAR_0->NumSession);

 VAR_4 = 0;
 for (VAR_3 = VAR_2;VAR_3 < VAR_0->NumSession;VAR_3++)
 {
  FUNC_0(&VAR_0->Sessions[VAR_3], &VAR_1->Sessions[VAR_4++], sizeof(RPC_ENUM_SESSION_ITEM));
 }
}

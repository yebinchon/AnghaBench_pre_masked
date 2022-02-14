
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int NewAccountName; int OldAccountName; int HubName; } ;
typedef TYPE_1__ RPC_RENAME_LINK ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, RPC_RENAME_LINK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "HubName", VAR_1->HubName);
 FUNC_1(VAR_0, "OldAccountName", VAR_1->OldAccountName);
 FUNC_1(VAR_0, "NewAccountName", VAR_1->NewAccountName);
}

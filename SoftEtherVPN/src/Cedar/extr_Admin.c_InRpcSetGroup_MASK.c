
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Policy; int Traffic; int Note; int Realname; int Name; int HubName; } ;
typedef TYPE_1__ RPC_SET_GROUP ;
typedef int POLICY ;
typedef int PACK ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int) ;

void FUNC_7(RPC_SET_GROUP *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, sizeof(RPC_SET_GROUP));
 FUNC_3(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 FUNC_3(VAR_1, "Name", VAR_0->Name, sizeof(VAR_0->Name));
 FUNC_4(VAR_1, "Realname", VAR_0->Realname, sizeof(VAR_0->Realname));
 FUNC_4(VAR_1, "Note", VAR_0->Note, sizeof(VAR_0->Note));
 FUNC_1(&VAR_0->Traffic, VAR_1);

 if (FUNC_2(VAR_1, "UsePolicy"))
 {
  VAR_0->Policy = FUNC_6(sizeof(POLICY));
  FUNC_0(VAR_0->Policy, VAR_1);
 }
}

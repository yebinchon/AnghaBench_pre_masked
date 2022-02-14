
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Policy; int Traffic; int Note; int Realname; int Name; int HubName; } ;
typedef TYPE_1__ RPC_SET_GROUP ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;

void FUNC_5(PACK *VAR_0, RPC_SET_GROUP *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, "HubName", VAR_1->HubName);
 FUNC_3(VAR_0, "Name", VAR_1->Name);
 FUNC_4(VAR_0, "Realname", VAR_1->Realname);
 FUNC_4(VAR_0, "Note", VAR_1->Note);
 FUNC_1(VAR_0, &VAR_1->Traffic);

 if (VAR_1->Policy != ((void*)0))
 {
  FUNC_2(VAR_0, "UsePolicy", 1);
  FUNC_0(VAR_0, VAR_1->Policy);
 }
}

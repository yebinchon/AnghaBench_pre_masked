
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumLink; TYPE_1__* Links; int HubName; } ;
struct TYPE_6__ {int HubName; int LastError; void* Connected; int ConnectedTime; void* Online; int Hostname; int AccountName; } ;
typedef TYPE_1__ RPC_ENUM_LINK_ITEM ;
typedef TYPE_2__ RPC_ENUM_LINK ;
typedef int PACK ;


 void* FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (int *,char*,int ,int,size_t) ;
 int FUNC_6 (int *,char*,int ,int,size_t) ;
 int FUNC_7 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_8 (int) ;

void FUNC_9(RPC_ENUM_LINK *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_0, sizeof(RPC_ENUM_LINK));
 FUNC_4(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->NumLink = FUNC_1(VAR_1, "AccountName");
 VAR_0->Links = FUNC_8(sizeof(RPC_ENUM_LINK_ITEM) * VAR_0->NumLink);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumLink;VAR_2++)
 {
  RPC_ENUM_LINK_ITEM *VAR_3 = &VAR_0->Links[VAR_2];

  FUNC_6(VAR_1, "AccountName", VAR_3->AccountName, sizeof(VAR_3->AccountName), VAR_2);
  FUNC_5(VAR_1, "Hostname", VAR_3->Hostname, sizeof(VAR_3->Hostname), VAR_2);
  FUNC_5(VAR_1, "ConnectedHubName", VAR_3->HubName, sizeof(VAR_3->HubName), VAR_2);
  VAR_3->Online = FUNC_0(VAR_1, "Online", VAR_2);
  VAR_3->ConnectedTime = FUNC_2(VAR_1, "ConnectedTime", VAR_2);
  VAR_3->Connected = FUNC_0(VAR_1, "Connected", VAR_2);
  VAR_3->LastError = FUNC_3(VAR_1, "LastError", VAR_2);
  FUNC_5(VAR_1, "LinkHubName", VAR_3->HubName, sizeof(VAR_3->HubName), VAR_2);
 }
}

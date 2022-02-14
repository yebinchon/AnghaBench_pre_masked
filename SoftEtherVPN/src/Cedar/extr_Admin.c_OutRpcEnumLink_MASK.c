
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumLink; TYPE_1__* Links; int HubName; } ;
struct TYPE_4__ {int HubName; int LastError; int Connected; int ConnectedTime; int Online; int Hostname; int AccountName; } ;
typedef TYPE_1__ RPC_ENUM_LINK_ITEM ;
typedef TYPE_2__ RPC_ENUM_LINK ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ,size_t,size_t) ;
 int FUNC_5 (int *,char*,int ,size_t,size_t) ;
 int FUNC_6 (int *,char*) ;

void FUNC_7(PACK *VAR_0, RPC_ENUM_LINK *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "HubName", VAR_1->HubName);

 FUNC_6(VAR_0, "LinkList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumLink;VAR_2++)
 {
  RPC_ENUM_LINK_ITEM *VAR_3 = &VAR_1->Links[VAR_2];

  FUNC_5(VAR_0, "AccountName", VAR_3->AccountName, VAR_2, VAR_1->NumLink);
  FUNC_3(VAR_0, "ConnectedHubName", VAR_3->HubName, VAR_2, VAR_1->NumLink);
  FUNC_3(VAR_0, "Hostname", VAR_3->Hostname, VAR_2, VAR_1->NumLink);
  FUNC_0(VAR_0, "Online", VAR_3->Online, VAR_2, VAR_1->NumLink);
  FUNC_4(VAR_0, "ConnectedTime", VAR_3->ConnectedTime, VAR_2, VAR_1->NumLink);
  FUNC_0(VAR_0, "Connected", VAR_3->Connected, VAR_2, VAR_1->NumLink);
  FUNC_1(VAR_0, "LastError", VAR_3->LastError, VAR_2, VAR_1->NumLink);
  FUNC_3(VAR_0, "TargetHubName", VAR_3->HubName, VAR_2, VAR_1->NumLink);
 }
 FUNC_6(VAR_0, ((void*)0));
}

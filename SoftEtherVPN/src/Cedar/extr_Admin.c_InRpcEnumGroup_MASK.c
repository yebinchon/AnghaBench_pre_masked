
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumGroup; TYPE_1__* Groups; int HubName; } ;
struct TYPE_6__ {int DenyAccess; int NumUsers; int Note; int Realname; int Name; } ;
typedef TYPE_1__ RPC_ENUM_GROUP_ITEM ;
typedef TYPE_2__ RPC_ENUM_GROUP ;
typedef int PACK ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (int *,char*,int ,int,size_t) ;
 int FUNC_5 (int *,char*,int ,int,size_t) ;
 int FUNC_6 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_7 (int) ;

void FUNC_8(RPC_ENUM_GROUP *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_0, sizeof(RPC_ENUM_GROUP));
 FUNC_3(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->NumGroup = FUNC_1(VAR_1, "Name");
 VAR_0->Groups = FUNC_7(sizeof(RPC_ENUM_GROUP_ITEM) * VAR_0->NumGroup);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumGroup;VAR_2++)
 {
  RPC_ENUM_GROUP_ITEM *VAR_3 = &VAR_0->Groups[VAR_2];

  FUNC_4(VAR_1, "Name", VAR_3->Name, sizeof(VAR_3->Name), VAR_2);
  FUNC_5(VAR_1, "Realname", VAR_3->Realname, sizeof(VAR_3->Realname), VAR_2);
  FUNC_5(VAR_1, "Note", VAR_3->Note, sizeof(VAR_3->Note), VAR_2);
  VAR_3->NumUsers = FUNC_2(VAR_1, "NumUsers", VAR_2);
  VAR_3->DenyAccess = FUNC_0(VAR_1, "DenyAccess", VAR_2);
 }
}

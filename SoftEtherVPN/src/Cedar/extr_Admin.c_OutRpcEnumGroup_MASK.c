
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumGroup; TYPE_1__* Groups; int HubName; } ;
struct TYPE_4__ {int DenyAccess; int NumUsers; int Note; int Realname; int Name; } ;
typedef TYPE_1__ RPC_ENUM_GROUP_ITEM ;
typedef TYPE_2__ RPC_ENUM_GROUP ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ,size_t,size_t) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(PACK *VAR_0, RPC_ENUM_GROUP *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "HubName", VAR_1->HubName);

 FUNC_5(VAR_0, "GroupList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumGroup;VAR_2++)
 {
  RPC_ENUM_GROUP_ITEM *VAR_3 = &VAR_1->Groups[VAR_2];

  FUNC_3(VAR_0, "Name", VAR_3->Name, VAR_2, VAR_1->NumGroup);
  FUNC_4(VAR_0, "Realname", VAR_3->Realname, VAR_2, VAR_1->NumGroup);
  FUNC_4(VAR_0, "Note", VAR_3->Note, VAR_2, VAR_1->NumGroup);
  FUNC_1(VAR_0, "NumUsers", VAR_3->NumUsers, VAR_2, VAR_1->NumGroup);
  FUNC_0(VAR_0, "DenyAccess", VAR_3->DenyAccess, VAR_2, VAR_1->NumGroup);
 }
 FUNC_5(VAR_0, ((void*)0));
}

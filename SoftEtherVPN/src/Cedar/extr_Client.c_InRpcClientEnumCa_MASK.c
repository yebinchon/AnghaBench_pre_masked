
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int NumItem; TYPE_1__** Items; } ;
struct TYPE_5__ {int Expires; int IssuerName; int SubjectName; int Key; } ;
typedef TYPE_1__ RPC_CLIENT_ENUM_CA_ITEM ;
typedef TYPE_2__ RPC_CLIENT_ENUM_CA ;
typedef int PACK ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int) ;
 void* FUNC_5 (int) ;

void FUNC_6(RPC_CLIENT_ENUM_CA *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(RPC_CLIENT_ENUM_CA));
 VAR_0->NumItem = FUNC_2(VAR_1, "NumItem");

 VAR_0->Items = FUNC_5(sizeof(RPC_CLIENT_ENUM_CA_ITEM *) * VAR_0->NumItem);
 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  RPC_CLIENT_ENUM_CA_ITEM *VAR_3 = FUNC_5(sizeof(RPC_CLIENT_ENUM_CA_ITEM));
  VAR_0->Items[VAR_2] = VAR_3;

  VAR_3->Key = FUNC_1(VAR_1, "Key", VAR_2);
  FUNC_3(VAR_1, "SubjectName", VAR_3->SubjectName, sizeof(VAR_3->SubjectName), VAR_2);
  FUNC_3(VAR_1, "IssuerName", VAR_3->IssuerName, sizeof(VAR_3->IssuerName), VAR_2);
  VAR_3->Expires = FUNC_0(VAR_1, "Expires", VAR_2);
 }
}

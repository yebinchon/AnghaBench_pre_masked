
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumCa; TYPE_1__* Ca; int HubName; } ;
struct TYPE_6__ {int Expires; int IssuerName; int SubjectName; int Key; } ;
typedef TYPE_1__ RPC_HUB_ENUM_CA_ITEM ;
typedef TYPE_2__ RPC_HUB_ENUM_CA ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (int *,char*,int ,int,size_t) ;
 int FUNC_5 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_6 (int) ;

void FUNC_7(RPC_HUB_ENUM_CA *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, sizeof(RPC_HUB_ENUM_CA));
 FUNC_3(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->NumCa = FUNC_0(VAR_1, "Key");
 VAR_0->Ca = FUNC_6(sizeof(RPC_HUB_ENUM_CA_ITEM) * VAR_0->NumCa);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumCa;VAR_2++)
 {
  RPC_HUB_ENUM_CA_ITEM *VAR_3 = &VAR_0->Ca[VAR_2];

  VAR_3->Key = FUNC_2(VAR_1, "Key", VAR_2);
  FUNC_4(VAR_1, "SubjectName", VAR_3->SubjectName, sizeof(VAR_3->SubjectName), VAR_2);
  FUNC_4(VAR_1, "IssuerName", VAR_3->IssuerName, sizeof(VAR_3->IssuerName), VAR_2);
  VAR_3->Expires = FUNC_1(VAR_1, "Expires", VAR_2);
 }
}

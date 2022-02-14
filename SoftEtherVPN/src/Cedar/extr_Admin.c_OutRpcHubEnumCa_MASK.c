
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumCa; TYPE_1__* Ca; int HubName; } ;
struct TYPE_4__ {int Expires; int IssuerName; int SubjectName; int Key; } ;
typedef TYPE_1__ RPC_HUB_ENUM_CA_ITEM ;
typedef TYPE_2__ RPC_HUB_ENUM_CA ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*) ;

void FUNC_5(PACK *VAR_0, RPC_HUB_ENUM_CA *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }
 FUNC_1(VAR_0, "HubName", VAR_1->HubName);

 FUNC_4(VAR_0, "CAList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumCa;VAR_2++)
 {
  RPC_HUB_ENUM_CA_ITEM *VAR_3 = &VAR_1->Ca[VAR_2];

  FUNC_0(VAR_0, "Key", VAR_3->Key, VAR_2, VAR_1->NumCa);
  FUNC_3(VAR_0, "SubjectName", VAR_3->SubjectName, VAR_2, VAR_1->NumCa);
  FUNC_3(VAR_0, "IssuerName", VAR_3->IssuerName, VAR_2, VAR_1->NumCa);
  FUNC_2(VAR_0, "Expires", VAR_3->Expires, VAR_2, VAR_1->NumCa);
 }
 FUNC_4(VAR_0, ((void*)0));
}

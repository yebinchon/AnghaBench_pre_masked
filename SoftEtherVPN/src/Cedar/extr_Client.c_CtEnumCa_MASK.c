
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int notAfter; int issuer_name; int subject_name; } ;
typedef TYPE_3__ X ;
typedef size_t UINT ;
struct TYPE_15__ {TYPE_2__* Cedar; } ;
struct TYPE_14__ {int NumItem; TYPE_1__** Items; } ;
struct TYPE_12__ {int CaList; } ;
struct TYPE_11__ {int Key; int Expires; int IssuerName; int SubjectName; } ;
typedef int RPC_CLIENT_ENUM_CA_ITEM ;
typedef TYPE_4__ RPC_CLIENT_ENUM_CA ;
typedef TYPE_5__ CLIENT ;


 int FUNC_0 (int ,int,int ) ;
 TYPE_3__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,int) ;
 void* FUNC_7 (int) ;

bool FUNC_8(CLIENT *VAR_0, RPC_CLIENT_ENUM_CA *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_6(VAR_1, sizeof(RPC_CLIENT_ENUM_CA));

 FUNC_3(VAR_0->Cedar->CaList);
 {
  UINT VAR_2;
  VAR_1->NumItem = FUNC_2(VAR_0->Cedar->CaList);
  VAR_1->Items = FUNC_7(sizeof(RPC_CLIENT_ENUM_CA_ITEM *) * VAR_1->NumItem);

  for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
  {
   X *VAR_3 = FUNC_1(VAR_0->Cedar->CaList, VAR_2);
   VAR_1->Items[VAR_2] = FUNC_7(sizeof(RPC_CLIENT_ENUM_CA_ITEM));
   FUNC_0(VAR_1->Items[VAR_2]->SubjectName, sizeof(VAR_1->Items[VAR_2]->SubjectName), VAR_3->subject_name);
   FUNC_0(VAR_1->Items[VAR_2]->IssuerName, sizeof(VAR_1->Items[VAR_2]->IssuerName), VAR_3->issuer_name);
   VAR_1->Items[VAR_2]->Expires = VAR_3->notAfter;
   VAR_1->Items[VAR_2]->Key = FUNC_4(VAR_3);
  }
 }
 FUNC_5(VAR_0->Cedar->CaList);

 return 1;
}

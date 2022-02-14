
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int hubname ;
typedef size_t UINT ;
struct TYPE_18__ {int Key; int CrlInfo; } ;
struct TYPE_17__ {TYPE_2__* Server; } ;
struct TYPE_16__ {TYPE_1__* HubDb; } ;
struct TYPE_15__ {char* HubName; size_t NumItem; TYPE_6__* Items; } ;
struct TYPE_14__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_13__ {int CrlList; } ;
typedef TYPE_2__ SERVER ;
typedef int RPC_ENUM_CRL_ITEM ;
typedef TYPE_3__ RPC_ENUM_CRL ;
typedef TYPE_4__ HUB ;
typedef int CRL ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *,char*) ;
 int * FUNC_4 (int ,size_t) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (char*,int,char*) ;
 int FUNC_10 (int ,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*,int) ;
 TYPE_6__* FUNC_13 (int) ;

UINT FUNC_14(ADMIN *VAR_7, RPC_ENUM_CRL *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 HUB *VAR_11;
 UINT VAR_12 = VAR_3;
 char VAR_13[VAR_4 + 1];

 VAR_0;
 VAR_5;
 if (VAR_9->ServerType == VAR_6)
 {
  return VAR_2;
 }

 FUNC_9(VAR_13, sizeof(VAR_13), VAR_8->HubName);
 FUNC_1(VAR_8);
 FUNC_12(VAR_8, sizeof(RPC_ENUM_CRL));

 FUNC_9(VAR_8->HubName, sizeof(VAR_8->HubName), VAR_13);

 VAR_11 = FUNC_3(VAR_10, VAR_13);

 if (VAR_11 == ((void*)0))
 {
  VAR_12 = VAR_1;
 }
 else
 {
  if (VAR_11->HubDb == ((void*)0))
  {
   VAR_12 = VAR_2;
  }
  else
  {
   FUNC_6(VAR_11->HubDb->CrlList);
   {
    UINT VAR_14;

    VAR_8->NumItem = FUNC_5(VAR_11->HubDb->CrlList);
    VAR_8->Items = FUNC_13(sizeof(RPC_ENUM_CRL_ITEM) * VAR_8->NumItem);

    for (VAR_14 = 0;VAR_14 < FUNC_5(VAR_11->HubDb->CrlList);VAR_14++)
    {
     CRL *VAR_15 = FUNC_4(VAR_11->HubDb->CrlList, VAR_14);
     wchar_t *VAR_16 = FUNC_2(VAR_15);

     FUNC_10(VAR_8->Items[VAR_14].CrlInfo, sizeof(VAR_8->Items[VAR_14].CrlInfo), VAR_16);
     FUNC_0(VAR_16);

     VAR_8->Items[VAR_14].Key = FUNC_7(VAR_15);
    }
   }
   FUNC_11(VAR_11->HubDb->CrlList);
  }

  FUNC_8(VAR_11);
 }

 return VAR_12;
}

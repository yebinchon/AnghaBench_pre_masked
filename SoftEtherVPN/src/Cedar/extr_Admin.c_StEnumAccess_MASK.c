
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int hubname ;
typedef size_t UINT ;
struct TYPE_18__ {int UniqueId; } ;
struct TYPE_17__ {TYPE_1__* Server; } ;
struct TYPE_16__ {int AccessList; } ;
struct TYPE_15__ {char* HubName; size_t NumAccess; TYPE_5__* Accesses; } ;
struct TYPE_14__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ENUM_ACCESS_LIST ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;
typedef TYPE_5__ ACCESS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (char*,int,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 TYPE_5__* FUNC_13 (int) ;

UINT FUNC_14(ADMIN *VAR_7, RPC_ENUM_ACCESS_LIST *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 HUB *VAR_11;
 UINT VAR_12;
 char VAR_13[VAR_4 + 1];

 VAR_0;
 VAR_5;
 if (VAR_9->ServerType == VAR_6)
 {
  return VAR_2;
 }

 FUNC_6(VAR_10);
 {
  VAR_11 = FUNC_2(VAR_10, VAR_8->HubName);
 }
 FUNC_10(VAR_10);

 if (VAR_11 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_9(VAR_13, sizeof(VAR_13), VAR_8->HubName);
 FUNC_1(VAR_8);
 FUNC_12(VAR_8, sizeof(RPC_ENUM_ACCESS_LIST));
 FUNC_9(VAR_8->HubName, sizeof(VAR_8->HubName), VAR_13);

 FUNC_7(VAR_11->AccessList);
 {
  VAR_8->NumAccess = FUNC_5(VAR_11->AccessList);
  VAR_8->Accesses = FUNC_13(sizeof(ACCESS) * VAR_8->NumAccess);

  for (VAR_12 = 0;VAR_12 < FUNC_5(VAR_11->AccessList);VAR_12++)
  {
   ACCESS *VAR_14 = &VAR_8->Accesses[VAR_12];
   FUNC_0(VAR_14, FUNC_4(VAR_11->AccessList, VAR_12), sizeof(ACCESS));
   VAR_14->UniqueId = FUNC_3(FUNC_4(VAR_11->AccessList, VAR_12));
  }
 }
 FUNC_11(VAR_11->AccessList);

 FUNC_8(VAR_11);

 return VAR_3;
}

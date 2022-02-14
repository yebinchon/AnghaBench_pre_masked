
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int tmp ;
typedef int hubname ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {TYPE_1__* Server; } ;
struct TYPE_19__ {int Me; } ;
struct TYPE_18__ {int HubName; } ;
struct TYPE_17__ {scalar_t__ ServerType; int FarmMemberList; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ENUM_MAC_TABLE ;
typedef int HUB ;
typedef TYPE_3__ FARM_MEMBER ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,char*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char*,TYPE_2__*) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int) ;

UINT FUNC_10(ADMIN *VAR_4, RPC_ENUM_MAC_TABLE *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 HUB *VAR_8 = ((void*)0);
 UINT VAR_9 = VAR_1;
 char VAR_10[VAR_2 + 1];
 UINT VAR_11;

 VAR_0;


 FUNC_7(VAR_10, sizeof(VAR_10), VAR_5->HubName);
 FUNC_1(VAR_5);
 FUNC_9(VAR_5, sizeof(RPC_ENUM_MAC_TABLE));

 VAR_9 = FUNC_6(VAR_6, VAR_10, VAR_5);
 if (VAR_9 != VAR_1)
 {
  return VAR_9;
 }

 if (VAR_6->ServerType == VAR_3)
 {

  FUNC_4(VAR_6->FarmMemberList);
  {
   for (VAR_11 = 0;VAR_11 < FUNC_3(VAR_6->FarmMemberList);VAR_11++)
   {
    FARM_MEMBER *VAR_12 = FUNC_2(VAR_6->FarmMemberList, VAR_11);
    if (VAR_12->Me == 0)
    {
     RPC_ENUM_MAC_TABLE VAR_13;

     FUNC_9(&VAR_13, sizeof(VAR_13));

     FUNC_5(VAR_6, VAR_12, VAR_10, &VAR_13);

     FUNC_0(VAR_5, &VAR_13);
     FUNC_1(&VAR_13);
    }
   }
  }
  FUNC_8(VAR_6->FarmMemberList);
 }

 return VAR_9;
}

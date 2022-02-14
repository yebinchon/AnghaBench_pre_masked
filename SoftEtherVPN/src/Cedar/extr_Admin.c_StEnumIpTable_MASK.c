
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
struct TYPE_18__ {char* HubName; } ;
struct TYPE_17__ {scalar_t__ ServerType; int FarmMemberList; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ENUM_IP_TABLE ;
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
 int FUNC_7 (char*,int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int) ;

UINT FUNC_10(ADMIN *VAR_4, RPC_ENUM_IP_TABLE *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 UINT VAR_8 = VAR_1;
 char VAR_9[VAR_2 + 1];
 UINT VAR_10;

 VAR_0;


 FUNC_7(VAR_9, sizeof(VAR_9), VAR_5->HubName);
 FUNC_1(VAR_5);
 FUNC_9(VAR_5, sizeof(RPC_ENUM_IP_TABLE));
 FUNC_7(VAR_5->HubName, sizeof(VAR_5->HubName), VAR_9);

 VAR_8 = FUNC_6(VAR_6, VAR_9, VAR_5);
 if (VAR_8 != VAR_1)
 {
  return VAR_8;
 }

 if (VAR_6->ServerType == VAR_3)
 {

  FUNC_4(VAR_6->FarmMemberList);
  {
   for (VAR_10 = 0;VAR_10 < FUNC_3(VAR_6->FarmMemberList);VAR_10++)
   {
    FARM_MEMBER *VAR_11 = FUNC_2(VAR_6->FarmMemberList, VAR_10);
    if (VAR_11->Me == 0)
    {
     RPC_ENUM_IP_TABLE VAR_12;

     FUNC_9(&VAR_12, sizeof(VAR_12));

     FUNC_5(VAR_6, VAR_11, VAR_9, &VAR_12);

     FUNC_0(VAR_5, &VAR_12);
     FUNC_1(&VAR_12);
    }
   }
  }
  FUNC_8(VAR_6->FarmMemberList);
 }

 return VAR_8;
}

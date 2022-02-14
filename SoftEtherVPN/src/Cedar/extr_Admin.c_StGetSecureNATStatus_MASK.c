
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int tmp ;
typedef int hubname ;
typedef scalar_t__ UINT ;
struct TYPE_25__ {TYPE_2__* Server; } ;
struct TYPE_24__ {int Me; } ;
struct TYPE_23__ {scalar_t__ Type; int lock_online; TYPE_1__* SecureNAT; } ;
struct TYPE_22__ {char* HubName; scalar_t__ NumDhcpClients; scalar_t__ NumTcpSessions; scalar_t__ NumUdpSessions; } ;
struct TYPE_21__ {int FarmMemberList; int * Cedar; } ;
struct TYPE_20__ {int Nat; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_NAT_STATUS ;
typedef TYPE_4__ HUB ;
typedef TYPE_5__ FARM_MEMBER ;
typedef int CEDAR ;
typedef TYPE_6__ ADMIN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_5__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int ,TYPE_3__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_5__*,char*,TYPE_3__*) ;
 int FUNC_11 (char*,int,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_3__*,int) ;

UINT FUNC_16(ADMIN *VAR_8, RPC_NAT_STATUS *VAR_9)
{
 SERVER *VAR_10 = VAR_8->Server;
 CEDAR *VAR_11 = VAR_10->Cedar;
 HUB *VAR_12;
 UINT VAR_13 = VAR_3;
 char VAR_14[VAR_7 + 1];
 UINT VAR_15;

 VAR_0;

 FUNC_11(VAR_14, sizeof(VAR_14), VAR_9->HubName);

 FUNC_6(VAR_11);
 {
  VAR_12 = FUNC_1(VAR_11, VAR_9->HubName);
 }
 FUNC_13(VAR_11);

 if (VAR_12 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_12->Type == VAR_6 || FUNC_2(VAR_10, "b_support_securenat") == 0)
 {
  FUNC_9(VAR_12);
  return VAR_2;
 }

 FUNC_5(VAR_12->lock_online);
 {
  if (VAR_12->SecureNAT == ((void*)0))
  {
   VAR_13 = VAR_4;
  }
  else
  {
   FUNC_8(VAR_12->SecureNAT->Nat, VAR_9);
  }
 }
 FUNC_12(VAR_12->lock_online);

 if (VAR_12->Type == VAR_5)
 {
  if (VAR_13 == VAR_4)
  {

   FUNC_7(VAR_10->FarmMemberList);
   {
    for (VAR_15 = 0;VAR_15 < FUNC_4(VAR_10->FarmMemberList);VAR_15++)
    {
     FARM_MEMBER *VAR_16 = FUNC_3(VAR_10->FarmMemberList, VAR_15);
     if (VAR_16->Me == 0)
     {
      RPC_NAT_STATUS VAR_17;

      FUNC_15(&VAR_17, sizeof(VAR_17));

      FUNC_10(VAR_10, VAR_16, VAR_14, &VAR_17);

      if (VAR_17.NumDhcpClients == 0 && VAR_17.NumTcpSessions == 0 && VAR_17.NumUdpSessions == 0)
      {
      }
      else
      {
       FUNC_0(VAR_9, &VAR_17, sizeof(RPC_NAT_STATUS));
       VAR_13 = VAR_3;
       break;
      }
     }
    }
   }
   FUNC_14(VAR_10->FarmMemberList);
  }
 }

 FUNC_9(VAR_12);

 FUNC_11(VAR_9->HubName, sizeof(VAR_9->HubName), VAR_14);
 VAR_13 = VAR_3;

 return VAR_13;
}

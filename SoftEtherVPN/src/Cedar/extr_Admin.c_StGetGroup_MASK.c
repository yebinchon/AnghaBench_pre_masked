
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int hubname ;
struct TYPE_12__ {char* Name; int lock; int Traffic; int Note; int RealName; } ;
typedef TYPE_1__ USERGROUP ;
typedef int UINT ;
struct TYPE_15__ {TYPE_2__* Server; } ;
struct TYPE_14__ {char* Name; char* HubName; int Policy; int Traffic; int Note; int Realname; } ;
struct TYPE_13__ {scalar_t__ ServerType; int * Cedar; } ;
typedef int TRAFFIC ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_SET_GROUP ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (char*,int,char*) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*,int) ;

UINT FUNC_18(ADMIN *VAR_9, RPC_SET_GROUP *VAR_10)
{
 SERVER *VAR_11 = VAR_9->Server;
 CEDAR *VAR_12 = VAR_11->Cedar;
 HUB *VAR_13 = ((void*)0);
 UINT VAR_14 = VAR_4;
 char VAR_15[VAR_6 + 1];

 if (FUNC_7(VAR_10->Name) || FUNC_8(VAR_10->Name) == 0)
 {
  return VAR_2;
 }

 VAR_0;
 VAR_7;
 if (VAR_11->ServerType == VAR_8)
 {
  return VAR_3;
 }

 FUNC_13(VAR_15, sizeof(VAR_15), VAR_10->HubName);

 FUNC_10(VAR_12);
 {
  VAR_13 = FUNC_6(VAR_12, VAR_10->HubName);
 }
 FUNC_16(VAR_12);

 if (VAR_13 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_1(VAR_13);
 {
  USERGROUP *VAR_16 = FUNC_0(VAR_13, VAR_10->Name);

  if (VAR_16 == ((void*)0))
  {
   VAR_14 = VAR_5;
  }
  else
  {
   FUNC_4(VAR_10);
   FUNC_17(VAR_10, sizeof(RPC_SET_GROUP));

   FUNC_13(VAR_10->HubName, sizeof(VAR_10->HubName), VAR_15);

   FUNC_9(VAR_16->lock);
   {
    FUNC_13(VAR_10->Name, sizeof(VAR_10->Name), VAR_16->Name);
    FUNC_14(VAR_10->Realname, sizeof(VAR_10->Realname), VAR_16->RealName);
    FUNC_14(VAR_10->Note, sizeof(VAR_10->Note), VAR_16->Note);
    FUNC_3(&VAR_10->Traffic, VAR_16->Traffic, sizeof(TRAFFIC));
   }
   FUNC_15(VAR_16->lock);

   VAR_10->Policy = FUNC_5(VAR_16);

   FUNC_11(VAR_16);
  }
 }
 FUNC_2(VAR_13);

 FUNC_12(VAR_13);

 return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int tmp ;
typedef int t ;
struct TYPE_23__ {int Name; } ;
typedef TYPE_2__ UNIX_VLAN ;
typedef scalar_t__ UINT ;
struct TYPE_26__ {TYPE_1__* ClientOption; } ;
struct TYPE_25__ {int AccountList; int UnixVLanList; } ;
struct TYPE_24__ {int DeviceName; } ;
struct TYPE_22__ {int DeviceName; } ;
struct TYPE_21__ {scalar_t__ OsType; } ;
typedef TYPE_3__ RPC_CLIENT_CREATE_VLAN ;
typedef TYPE_4__ CLIENT ;
typedef TYPE_5__ ACCOUNT ;


 int FUNC_0 (TYPE_4__*,char*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*,int,char*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_10__* FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 TYPE_5__* FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_4 ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 () ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_20 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_25 (TYPE_2__*,int) ;

bool FUNC_26(CLIENT *VAR_8, RPC_CLIENT_CREATE_VLAN *VAR_9)
{
 UINT VAR_10;
 bool VAR_11;

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return 0;
 }
 VAR_11 = 0;
 FUNC_13(VAR_8->AccountList);
 {
  for (VAR_10 = 0;VAR_10 < FUNC_12(VAR_8->AccountList);VAR_10++)
  {
   ACCOUNT *VAR_12 = FUNC_11(VAR_8->AccountList, VAR_10);
   if (FUNC_21(VAR_12->ClientOption->DeviceName, VAR_9->DeviceName) == 0)
   {
    VAR_11 = 1;
   }
  }
 }
 FUNC_24(VAR_8->AccountList);
 FUNC_13(VAR_8->UnixVLanList);
 {
  UNIX_VLAN *VAR_13, VAR_14;

  FUNC_25(&VAR_14, sizeof(VAR_14));
  FUNC_22(VAR_14.Name, sizeof(VAR_14.Name), VAR_9->DeviceName);

  VAR_13 = FUNC_20(VAR_8->UnixVLanList, &VAR_14);
  if (VAR_13 == ((void*)0))
  {
   FUNC_24(VAR_8->UnixVLanList);
   FUNC_5(VAR_8, VAR_1);
   return 0;
  }


  if (FUNC_6(VAR_8->UnixVLanList, VAR_13))
  {
   FUNC_8(VAR_13);
  }

  FUNC_0(VAR_8, "LC_DELETE_VLAN", VAR_9->DeviceName);

  FUNC_23(VAR_9->DeviceName);
 }
 FUNC_24(VAR_8->UnixVLanList);

 FUNC_1(VAR_8);

 FUNC_3(VAR_8);
 FUNC_2(VAR_8);
 FUNC_4(VAR_8);

 return 1;
}

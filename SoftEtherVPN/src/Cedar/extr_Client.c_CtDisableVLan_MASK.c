
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int tmp ;
typedef int t ;
struct TYPE_19__ {int Enabled; int Name; } ;
typedef TYPE_2__ UNIX_VLAN ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int lock; int * ClientSession; TYPE_1__* ClientOption; } ;
struct TYPE_21__ {int AccountList; int UnixVLanList; } ;
struct TYPE_20__ {int DeviceName; } ;
struct TYPE_18__ {int DeviceName; } ;
struct TYPE_17__ {scalar_t__ OsType; } ;
typedef TYPE_3__ RPC_CLIENT_CREATE_VLAN ;
typedef TYPE_4__ CLIENT ;
typedef TYPE_5__ ACCOUNT ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int,char*,int ) ;
 TYPE_10__* FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 TYPE_5__* FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_16 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_21 (TYPE_2__*,int) ;

bool FUNC_22(CLIENT *VAR_8, RPC_CLIENT_CREATE_VLAN *VAR_9)
{
 UINT VAR_10;
 bool VAR_11;

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return 0;
 }
 VAR_11 = 0;
 FUNC_10(VAR_8->AccountList);
 {
  for (VAR_10 = 0;VAR_10 < FUNC_8(VAR_8->AccountList);VAR_10++)
  {
   ACCOUNT *VAR_12 = FUNC_7(VAR_8->AccountList, VAR_10);
   if (FUNC_17(VAR_12->ClientOption->DeviceName, VAR_9->DeviceName) == 0)
   {
    FUNC_9(VAR_12->lock);
    {
     if (VAR_12->ClientSession != ((void*)0))
     {
      VAR_11 = 1;
     }
    }
    FUNC_19(VAR_12->lock);
   }
  }
 }
 FUNC_20(VAR_8->AccountList);


 FUNC_10(VAR_8->UnixVLanList);
 {
  UNIX_VLAN *VAR_13, VAR_14;

  FUNC_21(&VAR_14, sizeof(VAR_14));
  FUNC_18(VAR_14.Name, sizeof(VAR_14.Name), VAR_9->DeviceName);

  VAR_13 = FUNC_16(VAR_8->UnixVLanList, &VAR_14);
  if (VAR_13 == ((void*)0))
  {
   FUNC_20(VAR_8->UnixVLanList);
   FUNC_3(VAR_8, VAR_1);
   return 0;
  }


  VAR_13->Enabled = 0;
 }
 FUNC_20(VAR_8->UnixVLanList);

 FUNC_1(VAR_8);
 FUNC_0(VAR_8);
 FUNC_2(VAR_8);

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp4 ;
typedef int tmp3 ;
typedef int tmp2 ;
typedef int tmp1 ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_15__ {int Rpc; int * HubName; } ;
struct TYPE_14__ {scalar_t__ NumLink; TYPE_1__* Links; int HubName; } ;
struct TYPE_13__ {int Online; scalar_t__ LastError; int AccountName; scalar_t__ Connected; int HubName; int Hostname; int ConnectedTime; } ;
typedef TYPE_1__ RPC_ENUM_LINK_ITEM ;
typedef TYPE_2__ RPC_ENUM_LINK ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 int FUNC_2 (int *,int ,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int,int ,int *) ;
 int VAR_2 ;
 int * FUNC_8 (TYPE_4__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int ,int,int *) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int,int ,scalar_t__,int ) ;
 int FUNC_14 (int *,int,int ) ;
 int FUNC_15 (TYPE_2__*,int) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (TYPE_4__*,int ) ;

UINT FUNC_19(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ENUM_LINK VAR_10;


 if (VAR_8->HubName == ((void*)0))
 {
  VAR_3->Write(VAR_3, FUNC_17("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_15(&VAR_10, sizeof(VAR_10));
 FUNC_10(VAR_10.HubName, sizeof(VAR_10.HubName), VAR_8->HubName);


 VAR_9 = FUNC_9(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_5(VAR_7);
  return VAR_9;
 }
 else
 {
  CT *VAR_11 = FUNC_4();
  UINT VAR_12;

  FUNC_3(VAR_11, FUNC_17("SM_LINK_COLUMN_1"), 0);
  FUNC_3(VAR_11, FUNC_17("SM_LINK_COLUMN_2"), 0);
  FUNC_3(VAR_11, FUNC_17("SM_LINK_COLUMN_3"), 0);
  FUNC_3(VAR_11, FUNC_17("SM_LINK_COLUMN_4"), 0);
  FUNC_3(VAR_11, FUNC_17("SM_LINK_COLUMN_5"), 0);

  for (VAR_12 = 0;VAR_12 < VAR_10.NumLink;VAR_12++)
  {
   RPC_ENUM_LINK_ITEM *VAR_13 = &VAR_10.Links[VAR_12];
   wchar_t VAR_14[VAR_2];
   wchar_t VAR_15[VAR_2];
   wchar_t VAR_16[VAR_2];
   wchar_t VAR_17[VAR_2];

   FUNC_7(VAR_14, sizeof(VAR_14), FUNC_12(VAR_13->ConnectedTime), ((void*)0));
   FUNC_11(VAR_15, sizeof(VAR_15), VAR_13->Hostname);
   FUNC_11(VAR_16, sizeof(VAR_16), VAR_13->HubName);

   if (VAR_13->Online == 0)
   {
    FUNC_14(VAR_17, sizeof(VAR_17), FUNC_17("SM_LINK_STATUS_OFFLINE"));
   }
   else
   {
    if (VAR_13->Connected)
    {
     FUNC_14(VAR_17, sizeof(VAR_17), FUNC_17("SM_LINK_STATUS_ONLINE"));
    }
    else
    {
     if (VAR_13->LastError != 0)
     {
      FUNC_13(VAR_17, sizeof(VAR_17), FUNC_17("SM_LINK_STATUS_ERROR"), VAR_13->LastError, FUNC_16(VAR_13->LastError));
     }
     else
     {
      FUNC_14(VAR_17, sizeof(VAR_17), FUNC_17("SM_LINK_CONNECTING"));
     }
    }
   }

   FUNC_2(VAR_11, VAR_13->AccountName, VAR_17, VAR_14, VAR_15, VAR_16);
  }

  FUNC_1(VAR_11, VAR_3, 1);
 }

 FUNC_6(&VAR_10);

 FUNC_5(VAR_7);

 return 0;
}

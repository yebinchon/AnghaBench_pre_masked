
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp4 ;
typedef int tmp2 ;
typedef int tmp ;
typedef int t ;
typedef int ip_str ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int RemoteClient; } ;
struct TYPE_8__ {scalar_t__ NumItem; TYPE_1__** Items; } ;
struct TYPE_7__ {scalar_t__ Port; int Active; scalar_t__ Connected; int AccountName; int DeviceName; int HubName; int ProxyType; int ServerName; } ;
typedef TYPE_1__ RPC_CLIENT_ENUM_ACCOUNT_ITEM ;
typedef TYPE_2__ RPC_CLIENT_ENUM_ACCOUNT ;
typedef TYPE_3__ PC ;
typedef int LIST ;
typedef int IP ;
typedef int CT ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int ,int *,int *,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int * FUNC_6 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (char*,int,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int * FUNC_10 (int *,char*,int *,int *,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*,int,int ) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int,int ) ;
 int FUNC_15 (int *,int,char*,char*,scalar_t__,...) ;
 int FUNC_16 (TYPE_2__*,int) ;
 int FUNC_17 (char*) ;

UINT FUNC_18(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PC *VAR_8 = (PC *)VAR_6;
 UINT VAR_9 = VAR_1;
 RPC_CLIENT_ENUM_ACCOUNT VAR_10;


 VAR_7 = FUNC_10(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_16(&VAR_10, sizeof(VAR_10));

 VAR_9 = FUNC_0(VAR_8->RemoteClient, &VAR_10);

 if (VAR_9 == VAR_1)
 {
  UINT VAR_11;
  CT *VAR_12;


  VAR_12 = FUNC_6();
  FUNC_5(VAR_12, FUNC_17("CM_ACCOUNT_COLUMN_1"), 0);
  FUNC_5(VAR_12, FUNC_17("CM_ACCOUNT_COLUMN_2"), 0);
  FUNC_5(VAR_12, FUNC_17("CM_ACCOUNT_COLUMN_3"), 0);
  FUNC_5(VAR_12, FUNC_17("CM_ACCOUNT_COLUMN_3_2"), 0);
  FUNC_5(VAR_12, FUNC_17("CM_ACCOUNT_COLUMN_4"), 0);

  for (VAR_11 = 0;VAR_11 < VAR_10.NumItem;VAR_11++)
  {
   RPC_CLIENT_ENUM_ACCOUNT_ITEM *VAR_13 = VAR_10.Items[VAR_11];
   wchar_t VAR_14[VAR_2];
   wchar_t VAR_15[VAR_2];
   wchar_t VAR_16[VAR_2];
   IP VAR_17;
   char VAR_18[VAR_2];


   if (FUNC_13(&VAR_17, VAR_13->ServerName) && FUNC_11(VAR_13->ServerName, "[") == 0)
   {
    FUNC_7(VAR_18, sizeof(VAR_18),
     "[%s]", VAR_13->ServerName);
   }
   else
   {
    FUNC_12(VAR_18, sizeof(VAR_18), VAR_13->ServerName);
   }

   if (VAR_13->Port == 0)
   {

    FUNC_15(VAR_15, sizeof(VAR_15), L"%S (%s)", VAR_18, FUNC_9(VAR_13->ProxyType));
   }
   else
   {

    FUNC_15(VAR_15, sizeof(VAR_15), L"%S:%u (%s)", VAR_18, VAR_13->Port, FUNC_9(VAR_13->ProxyType));
   }


   FUNC_14(VAR_16, sizeof(VAR_16), VAR_13->HubName);


   FUNC_14(VAR_14, sizeof(VAR_14), VAR_13->DeviceName);

   FUNC_4(VAR_12,
    VAR_13->AccountName,
    VAR_13->Active == 0 ? FUNC_17("CM_ACCOUNT_OFFLINE") :
    (VAR_13->Connected ? FUNC_17("CM_ACCOUNT_ONLINE") : FUNC_17("CM_ACCOUNT_CONNECTING")),
    VAR_15, VAR_16,
    VAR_14);
  }

  FUNC_3(VAR_12, VAR_3, 1);
 }

 FUNC_1(&VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_2(VAR_3, VAR_9);
 }


 FUNC_8(VAR_7);

 return VAR_9;
}

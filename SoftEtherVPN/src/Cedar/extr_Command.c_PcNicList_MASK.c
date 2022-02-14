
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ver ;
typedef int t ;
typedef int name ;
typedef int mac ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int RemoteClient; } ;
struct TYPE_8__ {scalar_t__ NumItem; TYPE_1__** Items; } ;
struct TYPE_7__ {int Version; int MacAddress; scalar_t__ Enabled; int DeviceName; } ;
typedef TYPE_1__ RPC_CLIENT_ENUM_VLAN_ITEM ;
typedef TYPE_2__ RPC_CLIENT_ENUM_VLAN ;
typedef TYPE_3__ PC ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int * FUNC_6 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int * FUNC_8 (int *,char*,int *,int *,int ) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int * FUNC_11 (char*) ;

UINT FUNC_12(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PC *VAR_8 = (PC *)VAR_6;
 UINT VAR_9 = VAR_1;
 RPC_CLIENT_ENUM_VLAN VAR_10;


 VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_10(&VAR_10, sizeof(VAR_10));

 VAR_9 = FUNC_0(VAR_8->RemoteClient, &VAR_10);

 if (VAR_9 == VAR_1)
 {
  CT *VAR_11;
  UINT VAR_12;


  VAR_11 = FUNC_6();
  FUNC_5(VAR_11, FUNC_11("CM_VLAN_COLUMN_1"), 0);
  FUNC_5(VAR_11, FUNC_11("CM_VLAN_COLUMN_2"), 0);
  FUNC_5(VAR_11, FUNC_11("CM_VLAN_COLUMN_3"), 0);
  FUNC_5(VAR_11, FUNC_11("CM_VLAN_COLUMN_4"), 0);

  for (VAR_12 = 0;VAR_12 < VAR_10.NumItem;VAR_12++)
  {
   wchar_t VAR_13[VAR_2];
   wchar_t VAR_14[VAR_2];
   wchar_t VAR_15[VAR_2];
   wchar_t *VAR_16;
   RPC_CLIENT_ENUM_VLAN_ITEM *VAR_17 = VAR_10.Items[VAR_12];


   FUNC_9(VAR_13, sizeof(VAR_13), VAR_17->DeviceName);


   VAR_16 = VAR_17->Enabled ? FUNC_11("CM_VLAN_ENABLED") : FUNC_11("CM_VLAN_DISABLED");


   FUNC_9(VAR_14, sizeof(VAR_14), VAR_17->MacAddress);


   FUNC_9(VAR_15, sizeof(VAR_15), VAR_17->Version);

   FUNC_4(VAR_11,
    VAR_13, VAR_16, VAR_14, VAR_15);
  }

  FUNC_3(VAR_11, VAR_3, 1);
 }

 if (VAR_9 != VAR_1)
 {

  FUNC_2(VAR_3, VAR_9);
 }

 FUNC_1(&VAR_10);


 FUNC_7(VAR_7);

 return VAR_9;
}

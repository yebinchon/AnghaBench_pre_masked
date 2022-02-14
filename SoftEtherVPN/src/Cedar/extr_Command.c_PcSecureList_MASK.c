
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
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int RemoteClient; } ;
struct TYPE_8__ {scalar_t__ NumItem; TYPE_1__** Items; } ;
struct TYPE_7__ {scalar_t__ Type; int Manufacturer; int DeviceName; int DeviceId; } ;
typedef TYPE_1__ RPC_CLIENT_ENUM_SECURE_ITEM ;
typedef TYPE_2__ RPC_CLIENT_ENUM_SECURE ;
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
 scalar_t__ VAR_3 ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int * FUNC_12 (char*) ;

UINT FUNC_13(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PC *VAR_9 = (PC *)VAR_7;
 UINT VAR_10 = VAR_1;
 RPC_CLIENT_ENUM_SECURE VAR_11;


 VAR_8 = FUNC_8(VAR_4, VAR_5, VAR_6, ((void*)0), 0);
 if (VAR_8 == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_11(&VAR_11, sizeof(VAR_11));

 VAR_10 = FUNC_0(VAR_9->RemoteClient, &VAR_11);

 if (VAR_10 == VAR_1)
 {
  CT *VAR_12;
  UINT VAR_13;
  wchar_t VAR_14[VAR_2];
  wchar_t VAR_15[VAR_2];
  wchar_t VAR_16[VAR_2];
  wchar_t *VAR_17;


  VAR_12 = FUNC_6();
  FUNC_5(VAR_12, FUNC_12("SEC_COLUMN1"), 0);
  FUNC_5(VAR_12, FUNC_12("SEC_COLUMN2"), 0);
  FUNC_5(VAR_12, FUNC_12("SEC_COLUMN3"), 0);
  FUNC_5(VAR_12, FUNC_12("SEC_COLUMN4"), 0);

  for (VAR_13 = 0;VAR_13 < VAR_11.NumItem;VAR_13++)
  {
   RPC_CLIENT_ENUM_SECURE_ITEM *VAR_18 = VAR_11.Items[VAR_13];


   FUNC_10(VAR_14, VAR_18->DeviceId);


   FUNC_9(VAR_15, sizeof(VAR_15), VAR_18->DeviceName);


   VAR_17 = (VAR_18->Type == VAR_3) ? FUNC_12("SEC_SMART_CARD") : FUNC_12("SEC_USB_TOKEN");


   FUNC_9(VAR_16, sizeof(VAR_16), VAR_18->Manufacturer);

   FUNC_4(VAR_12, VAR_14, VAR_15, VAR_17, VAR_16);
  }

  FUNC_3(VAR_12, VAR_4, 1);

  FUNC_1(&VAR_11);
 }

 if (VAR_10 != VAR_1)
 {

  FUNC_2(VAR_4, VAR_10);
 }


 FUNC_7(VAR_8);

 return VAR_10;
}

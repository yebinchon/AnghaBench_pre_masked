
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int mac_address ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {int MacAddress; int DeviceName; } ;
typedef TYPE_1__ UCHAR ;
struct TYPE_16__ {int Size; int Buf; } ;
struct TYPE_15__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_14__ {int RemoteClient; } ;
typedef TYPE_1__ RPC_CLIENT_SET_VLAN ;
typedef TYPE_3__ PC ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;
typedef TYPE_5__ BUF ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ,int,int ) ;
 int * FUNC_8 (int *,char*,int *,TYPE_4__*,int) ;
 int FUNC_9 (int ,int,int ) ;
 TYPE_5__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (char*) ;

UINT FUNC_13(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PC *VAR_9 = (PC *)VAR_7;
 UINT VAR_10 = VAR_3;
 RPC_CLIENT_SET_VLAN VAR_11;
 UCHAR VAR_12[6];
 BUF *VAR_13;

 PARAM VAR_14[] =
 {
  {"[name]", &VAR_1, FUNC_12("CMD_NicCreate_PROMPT_NAME"), VAR_0, ((void*)0)},
  {"MAC", &VAR_1, FUNC_12("CMD_NicSetSetting_PROMPT_MAC"), VAR_0, ((void*)0)},
 };


 VAR_8 = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }


 FUNC_11(VAR_12, sizeof(VAR_12));
 VAR_13 = FUNC_10(FUNC_5(VAR_8, "MAC"));
 if (VAR_13 != ((void*)0) && VAR_13->Size == 6)
 {
  FUNC_2(VAR_12, VAR_13->Buf, 6);
 }
 FUNC_3(VAR_13);

 if (FUNC_6(VAR_12, 6))
 {

  FUNC_4(VAR_8);

  FUNC_1(VAR_4, VAR_2);
  return VAR_2;
 }


 FUNC_11(&VAR_11, sizeof(VAR_11));
 FUNC_9(VAR_11.DeviceName, sizeof(VAR_11.DeviceName), FUNC_5(VAR_8, "[name]"));
 FUNC_7(VAR_11.MacAddress, sizeof(VAR_11.MacAddress), FUNC_5(VAR_8, "MAC"));

 VAR_10 = FUNC_0(VAR_9->RemoteClient, &VAR_11);

 if (VAR_10 == VAR_3)
 {

 }

 if (VAR_10 != VAR_3)
 {

  FUNC_1(VAR_4, VAR_10);
 }


 FUNC_4(VAR_8);

 return VAR_10;
}

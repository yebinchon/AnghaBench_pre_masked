
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
struct TYPE_16__ {int Mask; int Ip; int MacAddress; int HubName; } ;
typedef TYPE_1__ VH_OPTION ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int Size; int Buf; } ;
struct TYPE_19__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_18__ {char* member_0; int * member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_17__ {int Rpc; int * HubName; } ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef TYPE_5__ BUF ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ,int,int *) ;
 TYPE_5__* FUNC_11 (char*) ;
 int FUNC_12 (int *,char*) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (int *,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_4__*,int ) ;

UINT FUNC_18(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 VH_OPTION VAR_11;

 PARAM VAR_12[] =
 {

  {"MAC", &VAR_1, FUNC_16("CMD_SecureNatHostSet_Prompt_MAC"), ((void*)0), ((void*)0)},
  {"IP", &VAR_1, FUNC_16("CMD_SecureNatHostSet_Prompt_IP"), *VAR_0, ((void*)0)},
  {"MASK", &VAR_1, FUNC_16("CMD_SecureNatHostSet_Prompt_MASK"), *VAR_0, ((void*)0)},
 };


 if (VAR_9->HubName == ((void*)0))
 {
  VAR_4->Write(VAR_4, FUNC_16("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_15(&VAR_11, sizeof(VAR_11));
 FUNC_10(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_9->HubName);


 VAR_10 = FUNC_8(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_3)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_3(VAR_8);
  return VAR_10;
 }
 else
 {
  char *VAR_13, *VAR_14, *VAR_15;
  bool VAR_16 = 1;

  FUNC_10(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_9->HubName);

  VAR_13 = FUNC_4(VAR_8, "MAC");
  VAR_14 = FUNC_4(VAR_8, "IP");
  VAR_15 = FUNC_4(VAR_8, "MASK");

  if (FUNC_5(VAR_13) == 0)
  {
   BUF *VAR_17 = FUNC_11(VAR_13);

   if (VAR_17 == ((void*)0) || VAR_17->Size != 6)
   {
    VAR_16 = 0;
   }
   else
   {
    FUNC_1(VAR_11.MacAddress, VAR_17->Buf, 6);
   }

   FUNC_2(VAR_17);
  }

  if (FUNC_5(VAR_14) == 0)
  {
   if (FUNC_6(VAR_14) == 0)
   {
    VAR_16 = 0;
   }
   else
   {
    UINT VAR_18 = FUNC_13(VAR_14);

    if (VAR_18 == 0 || VAR_18 == 0xffffffff)
    {
     VAR_16 = 0;
    }
    else
    {
     FUNC_14(&VAR_11.Ip, VAR_18);
    }
   }
  }

  if (FUNC_5(VAR_15) == 0)
  {
   if (FUNC_6(VAR_15) == 0)
   {
    VAR_16 = 0;
   }
   else
   {
    FUNC_12(&VAR_11.Mask, VAR_15);
   }
  }

  if (VAR_16 == 0)
  {

   VAR_10 = VAR_2;
   FUNC_0(VAR_4, VAR_10);
   FUNC_3(VAR_8);
   return VAR_10;
  }
  else
  {
   VAR_10 = FUNC_9(VAR_9->Rpc, &VAR_11);

   if (VAR_10 != VAR_3)
   {

    FUNC_0(VAR_4, VAR_10);
    FUNC_3(VAR_8);
    return VAR_10;
   }
  }
 }

 FUNC_3(VAR_8);

 return 0;
}

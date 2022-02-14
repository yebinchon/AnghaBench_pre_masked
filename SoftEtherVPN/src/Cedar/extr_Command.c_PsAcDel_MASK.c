
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {scalar_t__ Id; } ;
struct TYPE_21__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_20__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_19__ {int Rpc; int * HubName; } ;
struct TYPE_18__ {int o; int HubName; } ;
typedef TYPE_1__ RPC_AC_LIST ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef TYPE_5__ AC ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 TYPE_5__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (int ,int,int *) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_4__*,int ) ;

UINT FUNC_15(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_AC_LIST VAR_12;

 PARAM VAR_13[] =
 {

  {"[id]", &VAR_1, FUNC_13("CMD_AcDel_Prompt_ID"), VAR_0, ((void*)0)},
 };


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_13("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_9 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_12(&VAR_12, sizeof(VAR_12));
 FUNC_11(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);


 VAR_11 = FUNC_9(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_3)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_3(VAR_9);
  return VAR_11;
 }
 else
 {

  UINT VAR_14;
  bool VAR_15 = 0;

  for (VAR_14 = 0;VAR_14 < FUNC_7(VAR_12.o);VAR_14++)
  {
   AC *VAR_16 = FUNC_6(VAR_12.o, VAR_14);

   if (VAR_16->Id == FUNC_5(VAR_9, "[id]"))
   {
    FUNC_1(VAR_12.o, VAR_16);
    FUNC_2(VAR_16);
    VAR_15 = 1;
    break;
   }
  }

  if (VAR_15 == 0)
  {
   VAR_11 = VAR_4;
   FUNC_4(&VAR_12);
  }
  else
  {
   VAR_11 = FUNC_10(VAR_10->Rpc, &VAR_12);
  }
  if (VAR_11 != VAR_3)
  {

   FUNC_0(VAR_5, VAR_11);
   FUNC_3(VAR_9);
   return VAR_11;
  }
 }

 FUNC_4(&VAR_12);
 FUNC_3(VAR_9);

 return 0;
}

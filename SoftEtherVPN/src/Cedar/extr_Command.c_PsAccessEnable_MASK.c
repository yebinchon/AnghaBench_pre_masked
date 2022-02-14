
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {scalar_t__ Id; int Active; } ;
struct TYPE_18__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_17__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_16__ {int Rpc; int * HubName; } ;
struct TYPE_15__ {scalar_t__ NumAccess; TYPE_5__* Accesses; int HubName; } ;
typedef TYPE_1__ RPC_ENUM_ACCESS_LIST ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef TYPE_5__ ACCESS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int * FUNC_4 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_4__*,int ) ;

UINT FUNC_11(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_ENUM_ACCESS_LIST VAR_12;

 PARAM VAR_13[] =
 {

  {"[id]", &VAR_1, FUNC_9("CMD_Access_Prompt_ID"), VAR_0, ((void*)0)},
 };


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_9("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_8(&VAR_12, sizeof(VAR_12));
 FUNC_7(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);


 VAR_11 = FUNC_5(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_3)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_1(VAR_9);
  return VAR_11;
 }
 else
 {
  UINT VAR_14;
  bool VAR_15 = 0;
  for (VAR_14 = 0;VAR_14 < VAR_12.NumAccess;VAR_14++)
  {
   ACCESS *VAR_16 = &VAR_12.Accesses[VAR_14];

   if (VAR_16->Id == FUNC_3(VAR_9, "[id]"))
   {
    VAR_15 = 1;

    VAR_16->Active = 1;
   }
  }

  if (VAR_15 == 0)
  {

   VAR_11 = VAR_4;
   FUNC_0(VAR_5, VAR_11);
   FUNC_1(VAR_9);
   FUNC_2(&VAR_12);
   return VAR_11;
  }

  VAR_11 = FUNC_6(VAR_10->Rpc, &VAR_12);
  if (VAR_11 != VAR_3)
  {

   FUNC_0(VAR_5, VAR_11);
   FUNC_1(VAR_9);
   return VAR_11;
  }

  FUNC_2(&VAR_12);
 }

 FUNC_1(VAR_9);

 return VAR_11;
}

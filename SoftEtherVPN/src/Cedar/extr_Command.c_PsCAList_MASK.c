
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int (* Write ) (TYPE_4__*,char*) ;} ;
struct TYPE_15__ {int Rpc; int * HubName; } ;
struct TYPE_14__ {scalar_t__ NumCa; TYPE_1__* Ca; int HubName; } ;
struct TYPE_13__ {char* SubjectName; char* IssuerName; int Key; int Expires; } ;
typedef TYPE_1__ RPC_HUB_ENUM_CA_ITEM ;
typedef TYPE_2__ RPC_HUB_ENUM_CA ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,int,int ,int *) ;
 int VAR_2 ;
 int * FUNC_7 (TYPE_4__*,char*,char*,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (TYPE_4__*,char*) ;

UINT FUNC_15(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_HUB_ENUM_CA VAR_10;


 if (VAR_8->HubName == ((void*)0))
 {
  VAR_3->Write(VAR_3, FUNC_13("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_12(&VAR_10, sizeof(VAR_10));

 FUNC_9(VAR_10.HubName, sizeof(VAR_10.HubName), VAR_8->HubName);


 VAR_9 = FUNC_8(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_4(VAR_7);
  return VAR_9;
 }
 else
 {
  UINT VAR_11;
  CT *VAR_12 = FUNC_3();

  for (VAR_11 = 0;VAR_11 < VAR_10.NumCa;VAR_11++)
  {
   wchar_t VAR_13[VAR_2];
   wchar_t VAR_14[64];
   RPC_HUB_ENUM_CA_ITEM *VAR_15 = &VAR_10.Ca[VAR_11];

   FUNC_6(VAR_13, sizeof(VAR_13), FUNC_10(VAR_15->Expires), ((void*)0));

   FUNC_11(VAR_14, VAR_15->Key);

   FUNC_2(VAR_12, FUNC_13("CMD_CAList_COLUMN_ID"), VAR_14);
   FUNC_2(VAR_12, FUNC_13("CM_CERT_COLUMN_1"), VAR_15->SubjectName);
   FUNC_2(VAR_12, FUNC_13("CM_CERT_COLUMN_2"), VAR_15->IssuerName);
   FUNC_2(VAR_12, FUNC_13("CM_CERT_COLUMN_3"), VAR_13);

   if (VAR_11 != (VAR_10.NumCa - 1))
   {
    FUNC_2(VAR_12, L"---", L"---");
   }
  }

  FUNC_1(VAR_12, VAR_3);
 }

 FUNC_5(&VAR_10);

 FUNC_4(VAR_7);

 return 0;
}

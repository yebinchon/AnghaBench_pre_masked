
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int RemoteClient; } ;
struct TYPE_8__ {scalar_t__ NumItem; TYPE_1__** Items; } ;
struct TYPE_7__ {char* SubjectName; char* IssuerName; int Key; int Expires; } ;
typedef TYPE_1__ RPC_CLIENT_ENUM_CA_ITEM ;
typedef TYPE_2__ RPC_CLIENT_ENUM_CA ;
typedef TYPE_3__ PC ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,char*) ;
 int * FUNC_5 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int ,int *) ;
 int VAR_2 ;
 int * FUNC_8 (int *,char*,char*,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (TYPE_2__*,int) ;
 char* FUNC_12 (char*) ;

UINT FUNC_13(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PC *VAR_8 = (PC *)VAR_6;
 UINT VAR_9 = VAR_1;
 RPC_CLIENT_ENUM_CA VAR_10;


 VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_11(&VAR_10, sizeof(VAR_10));

 VAR_9 = FUNC_0(VAR_8->RemoteClient, &VAR_10);

 if (VAR_9 == VAR_1)
 {

  UINT VAR_11;
  CT *VAR_12 = FUNC_5();

  for (VAR_11 = 0;VAR_11 < VAR_10.NumItem;VAR_11++)
  {
   wchar_t VAR_13[VAR_2];
   wchar_t VAR_14[64];
   RPC_CLIENT_ENUM_CA_ITEM *VAR_15 = VAR_10.Items[VAR_11];

   FUNC_7(VAR_13, sizeof(VAR_13), FUNC_9(VAR_15->Expires), ((void*)0));

   FUNC_10(VAR_14, VAR_15->Key);

   FUNC_4(VAR_12, FUNC_12("CMD_CAList_COLUMN_ID"), VAR_14);
   FUNC_4(VAR_12, FUNC_12("CM_CERT_COLUMN_1"), VAR_15->SubjectName);
   FUNC_4(VAR_12, FUNC_12("CM_CERT_COLUMN_2"), VAR_15->IssuerName);
   FUNC_4(VAR_12, FUNC_12("CM_CERT_COLUMN_3"), VAR_13);

   if (VAR_11 != (VAR_10.NumItem - 1))
   {
    FUNC_4(VAR_12, L"---", L"---");
   }
  }

  FUNC_3(VAR_12, VAR_3);

  FUNC_1(&VAR_10);
 }

 if (VAR_9 != VAR_1)
 {

  FUNC_2(VAR_3, VAR_9);
 }



 FUNC_6(VAR_7);

 return VAR_9;
}

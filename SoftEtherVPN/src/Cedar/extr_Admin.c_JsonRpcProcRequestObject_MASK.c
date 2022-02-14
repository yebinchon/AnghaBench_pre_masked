
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {TYPE_1__* Server; int * Rpc; } ;
struct TYPE_9__ {int RemoteHostname; int RemotePort; int RemoteIP; } ;
struct TYPE_8__ {int Cedar; } ;
typedef TYPE_2__ SOCK ;
typedef int RPC ;
typedef int PACK ;
typedef int JSON_VALUE ;
typedef int CONNECTION ;
typedef TYPE_3__ ADMIN ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__,int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ,char*,int *,int ,int ,char*,scalar_t__,int ) ;
 int * FUNC_10 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_11 (scalar_t__) ;

JSON_VALUE *FUNC_12(ADMIN *VAR_2, CONNECTION *VAR_3, SOCK *VAR_4, JSON_VALUE *VAR_5, char *VAR_6)
{
 PACK *VAR_7;
 JSON_VALUE *VAR_8 = ((void*)0);
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_5(VAR_5);

 FUNC_6(VAR_7, "function_name", VAR_6);

 if (VAR_7 != ((void*)0))
 {
  RPC *VAR_9;
  PACK *VAR_10;
  UINT VAR_11;


  VAR_9 = FUNC_10(VAR_4, VAR_0, VAR_2);

  VAR_2->Rpc = VAR_9;

  VAR_10 = FUNC_0(VAR_9, VAR_7);

  if (VAR_10 == ((void*)0))
  {
   VAR_10 = FUNC_7(VAR_1);
  }

  FUNC_8(VAR_9, 1);

  FUNC_1(VAR_7);


  VAR_11 = FUNC_2(VAR_10);
  if (VAR_11 != 0)
  {

   VAR_8 = FUNC_3(VAR_11, FUNC_11(VAR_11));
  }
  else
  {

   VAR_8 = FUNC_4(VAR_10);
  }

  FUNC_9(VAR_2->Server->Cedar, "LS_API_RPC_CALL",
   &VAR_4->RemoteIP, VAR_4->RemotePort, VAR_4->RemoteHostname,
   VAR_6, VAR_11, FUNC_11(VAR_11));

  FUNC_1(VAR_10);
 }

 return VAR_8;
}

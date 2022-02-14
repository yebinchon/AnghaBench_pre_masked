
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int t ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_12__ {int ClientId; int ShowVgcLink; int IsVgcSupported; int OsType; int Win9x; int Unix; TYPE_2__* Rpc; } ;
struct TYPE_11__ {TYPE_3__* Param; } ;
struct TYPE_10__ {int ClientId; int ShowVgcLink; int IsVgcSupported; int OsType; } ;
typedef int SOCK ;
typedef TYPE_1__ RPC_CLIENT_VERSION ;
typedef TYPE_2__ RPC ;
typedef TYPE_3__ REMOTE_CLIENT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__) ;
 int * FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 int FUNC_8 (int *,scalar_t__*,int,int) ;
 int FUNC_9 (int *) ;
 int VAR_12 ;
 int FUNC_10 (int *,scalar_t__*,int) ;
 int FUNC_11 (int *,scalar_t__*,int,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (scalar_t__*,char*,int ) ;
 TYPE_2__* FUNC_15 (int *,int *) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (int ,int,int ) ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 () ;
 int FUNC_20 (TYPE_1__*,int) ;
 TYPE_3__* FUNC_21 (int) ;

REMOTE_CLIENT *FUNC_22(char *VAR_13, char *VAR_14, bool *VAR_15, bool *VAR_16, UCHAR *VAR_17, UINT *VAR_18, bool VAR_19, UINT VAR_20)
{
 SOCK *VAR_21 = ((void*)0);
 UINT VAR_22;
 UINT VAR_23;
 UINT VAR_24 = VAR_1;
 RPC *VAR_25;
 REMOTE_CLIENT *VAR_26;
 UCHAR VAR_27[VAR_12];
 UINT VAR_28;
 UINT64 VAR_29 = 0;
 bool VAR_30;
 UINT VAR_31 = 0;
 UINT VAR_32 = 0;

 if (VAR_13 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_14 == ((void*)0))
 {
  VAR_14 = "";
 }

 if (VAR_18 != ((void*)0))
 {
  *VAR_18 = VAR_8;
 }

 if (VAR_15 != ((void*)0))
 {
  *VAR_15 = 0;
 }

 if (VAR_16 != ((void*)0))
 {
  *VAR_16 = 0;
 }
 VAR_28 = VAR_0 - 1;

RETRY:
 VAR_28++;

 if (VAR_28 >= (VAR_0 + 5))
 {
  return ((void*)0);
 }

 VAR_30 = 0;

 while (1)
 {
  for (VAR_22 = VAR_28;VAR_22 < (VAR_0 + 5);VAR_22++)
  {
   if (FUNC_1(VAR_13, VAR_22))
   {
    VAR_30 = 1;
    break;
   }
  }

  if (VAR_30)
  {
   break;
  }

  if (VAR_20 == 0)
  {
   break;
  }

  if (VAR_29 == 0)
  {
   VAR_29 = FUNC_19();
  }

  if ((VAR_29 + (UINT64)VAR_20) <= FUNC_19())
  {
   break;
  }
 }

 if (VAR_30 == 0)
 {
  if (VAR_18)
  {
   *VAR_18 = VAR_7;
  }
  return ((void*)0);
 }

 VAR_28 = VAR_22;

 VAR_21 = FUNC_2(VAR_13, VAR_22);
 if (VAR_21 == ((void*)0))
 {
  if (VAR_18)
  {
   *VAR_18 = VAR_7;
  }
  goto RETRY;
 }
L_TRY:

 FUNC_13(VAR_21, 10000);

 FUNC_14(VAR_27, VAR_14, FUNC_18(VAR_14));

 if (VAR_17 != ((void*)0))
 {
  if (VAR_19 == 0)
  {
   VAR_24 = VAR_2;
  }
  else
  {
   VAR_24 = VAR_3;
  }
 }

 VAR_24 = FUNC_3(VAR_24);
 FUNC_10(VAR_21, &VAR_24, sizeof(UINT));

 if (VAR_17 != ((void*)0))
 {
  FUNC_10(VAR_21, VAR_17, VAR_12);
 }
 else
 {
  FUNC_10(VAR_21, VAR_27, VAR_12);
 }

 if (FUNC_12(VAR_21, 0) == 0)
 {
  FUNC_9(VAR_21);
  goto RETRY;
 }

 if (FUNC_8(VAR_21, &VAR_23, sizeof(UINT), 0) == 0)
 {
  FUNC_9(VAR_21);
  goto RETRY;
 }

 VAR_23 = FUNC_3(VAR_23);

 if (VAR_23 >= 1024)
 {
  FUNC_9(VAR_21);
  goto RETRY;
 }

 if (VAR_17 != ((void*)0))
 {
  if (VAR_18)
  {
   *VAR_18 = VAR_23;
  }
  FUNC_11(VAR_21, &VAR_23, sizeof(UINT), 0);
  FUNC_9(VAR_21);
  return ((void*)0);
 }

 switch (VAR_23)
 {
 case 1:
  if (VAR_15 != ((void*)0))
  {
   *VAR_15 = 1;
  }
  break;
 case 2:
  if (VAR_16 != ((void*)0))
  {
   *VAR_16 = 1;
  }
  break;
 }

 if (VAR_23 != 0)
 {
  FUNC_9(VAR_21);
  return ((void*)0);
 }

 FUNC_13(VAR_21, VAR_10);

 VAR_25 = FUNC_15(VAR_21, ((void*)0));

 FUNC_9(VAR_21);

 VAR_26 = FUNC_21(sizeof(REMOTE_CLIENT));
 VAR_25->Param = VAR_26;

 if (VAR_26 != ((void*)0))
 {
  RPC_CLIENT_VERSION VAR_33;

  VAR_26->Rpc = VAR_25;
  FUNC_20(&VAR_33, sizeof(VAR_33));
  FUNC_0(VAR_26, &VAR_33);
  VAR_26->OsType = VAR_33.OsType;
  VAR_26->Unix = FUNC_6(VAR_26->OsType);
  VAR_26->Win9x = FUNC_7(VAR_26->OsType);
  VAR_26->IsVgcSupported = VAR_33.IsVgcSupported;
  VAR_26->ShowVgcLink = VAR_33.ShowVgcLink;
  FUNC_17(VAR_26->ClientId, sizeof(VAR_26->ClientId), VAR_33.ClientId);
 }

 return VAR_26;
}

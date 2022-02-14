
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int winver_msg_server ;
typedef int winver_msg_client ;
struct TYPE_29__ {struct TYPE_29__* Msg; } ;
typedef TYPE_1__ wchar_t ;
typedef scalar_t__ UINT ;
struct TYPE_34__ {int ClientWinVer; TYPE_3__* Server; } ;
struct TYPE_33__ {int Bridge; } ;
struct TYPE_32__ {int Title; } ;
struct TYPE_31__ {TYPE_6__* Cedar; } ;
struct TYPE_30__ {int wMonth; int wYear; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_3__ SERVER ;
typedef TYPE_4__ RPC_WINVER ;
typedef TYPE_1__ RPC_MSG ;
typedef TYPE_6__ CEDAR ;
typedef TYPE_7__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*,int,TYPE_1__*,TYPE_1__*,int ,TYPE_1__*,int ,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_10 (scalar_t__) ;
 TYPE_1__* FUNC_11 (char*) ;

UINT FUNC_12(ADMIN *VAR_3, RPC_MSG *VAR_4)
{
 SERVER *VAR_5 = VAR_3->Server;
 CEDAR *VAR_6 = VAR_5->Cedar;
 UINT VAR_7 = VAR_0;
 RPC_WINVER VAR_8;
 RPC_WINVER VAR_9;
 wchar_t VAR_10[3800];
 wchar_t VAR_11[3800];
 UINT VAR_12;
 wchar_t *VAR_13;

 FUNC_1(VAR_4);
 FUNC_9(VAR_4, sizeof(RPC_MSG));


 FUNC_3(&VAR_8);
 FUNC_0(&VAR_9, &VAR_3->ClientWinVer, sizeof(RPC_WINVER));

 FUNC_9(VAR_10, sizeof(VAR_10));
 FUNC_9(VAR_11, sizeof(VAR_11));

 if (FUNC_4(&VAR_9) == 0)
 {
  SYSTEMTIME VAR_14;

  FUNC_5(&VAR_14);

  FUNC_6(VAR_10, sizeof(VAR_10), FUNC_11("WINVER_ERROR_FORMAT"),
   FUNC_11("WINVER_ERROR_PC_LOCAL"),
   VAR_9.Title,
   FUNC_11("WINVER_ERROR_VPNSERVER"),
   VAR_2,
   FUNC_11("WINVER_ERROR_PC_LOCAL"),
   FUNC_11("WINVER_ERROR_VPNSERVER"),
   FUNC_11("WINVER_ERROR_VPNSERVER"),
   FUNC_11("WINVER_ERROR_VPNSERVER"),
   VAR_14.wYear, VAR_14.wMonth);
 }

 if (FUNC_4(&VAR_8) == 0)
 {
  SYSTEMTIME VAR_15;

  FUNC_5(&VAR_15);

  FUNC_6(VAR_11, sizeof(VAR_11), FUNC_11("WINVER_ERROR_FORMAT"),
   FUNC_11("WINVER_ERROR_PC_REMOTE"),
   VAR_8.Title,
   FUNC_11("WINVER_ERROR_VPNSERVER"),
   VAR_2,
   FUNC_11("WINVER_ERROR_PC_REMOTE"),
   FUNC_11("WINVER_ERROR_VPNSERVER"),
   FUNC_11("WINVER_ERROR_VPNSERVER"),
   FUNC_11("WINVER_ERROR_VPNSERVER"),
   VAR_15.wYear, VAR_15.wMonth);
 }

 VAR_12 = FUNC_8(VAR_10) + FUNC_8(VAR_11) + 10000;

 VAR_13 = FUNC_10(VAR_12);

 if (
  VAR_6->Bridge == 0)
 {
  if (FUNC_2(VAR_1) != 0)
  {
   FUNC_7(VAR_13, VAR_12, FUNC_11("OSS_MSG"));
  }
 }

 FUNC_7(VAR_13, VAR_12, VAR_10);
 FUNC_7(VAR_13, VAR_12, VAR_11);

 VAR_4->Msg = VAR_13;

 return VAR_0;
}

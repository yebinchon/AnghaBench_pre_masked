
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int st ;
typedef int UINT ;
struct TYPE_16__ {TYPE_10__* Server; } ;
struct TYPE_15__ {TYPE_1__* Server; int Build; int Version; int BuildInfo; int VerString; } ;
struct TYPE_14__ {int OsInfo; int ServerFamilyName; int ServerBuildDate; int wSecond; int wMinute; int wHour; int wDay; int wMonth; int wYear; int ServerType; int ServerHostName; int ServerBuildInt; int ServerVerInt; int ServerBuildInfoString; int ServerVersionString; int ServerProductName; } ;
struct TYPE_13__ {int ServerType; } ;
struct TYPE_12__ {TYPE_4__* Cedar; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_2__ RPC_SERVER_INFO ;
typedef int OS_INFO ;
typedef TYPE_4__ CEDAR ;
typedef TYPE_5__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (TYPE_10__*,int ,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_2__*,int) ;

UINT FUNC_8(ADMIN *VAR_9, RPC_SERVER_INFO *VAR_10)
{
 CEDAR *VAR_11;
 OS_INFO *VAR_12;
 SYSTEMTIME VAR_13;

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 {
  return VAR_6;
 }

 FUNC_1(VAR_10);
 FUNC_7(VAR_10, sizeof(RPC_SERVER_INFO));

 VAR_11 = VAR_9->Server->Cedar;

 FUNC_4(VAR_9->Server, VAR_10->ServerProductName, sizeof(VAR_10->ServerProductName));

 FUNC_5(VAR_10->ServerVersionString, sizeof(VAR_10->ServerVersionString), VAR_11->VerString);
 FUNC_5(VAR_10->ServerBuildInfoString, sizeof(VAR_10->ServerBuildInfoString), VAR_11->BuildInfo);
 VAR_10->ServerVerInt = VAR_11->Version;
 VAR_10->ServerBuildInt = VAR_11->Build;
 FUNC_2(VAR_10->ServerHostName, sizeof(VAR_10->ServerHostName));
 VAR_10->ServerType = VAR_11->Server->ServerType;

 FUNC_7(&VAR_13, sizeof(VAR_13));
 VAR_13.wYear = VAR_5;
 VAR_13.wMonth = VAR_2;
 VAR_13.wDay = VAR_0;
 VAR_13.wHour = VAR_1;
 VAR_13.wMinute = VAR_3;
 VAR_13.wSecond = VAR_4;

 VAR_10->ServerBuildDate = FUNC_6(&VAR_13);
 FUNC_5(VAR_10->ServerFamilyName, sizeof(VAR_10->ServerFamilyName), VAR_8);

 VAR_12 = FUNC_3();
 if (VAR_12 != ((void*)0))
 {
  FUNC_0(&VAR_10->OsInfo, VAR_12);
 }

 return VAR_7;
}

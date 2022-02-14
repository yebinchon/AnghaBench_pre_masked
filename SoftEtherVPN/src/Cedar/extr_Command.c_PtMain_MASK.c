
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int prompt ;
typedef int cmd ;
struct TYPE_13__ {scalar_t__ RetCode; scalar_t__ ConsoleType; int (* Write ) (TYPE_3__*,char*) ;} ;
struct TYPE_12__ {char* member_0; int member_1; } ;
struct TYPE_11__ {scalar_t__ LastError; int * CmdLine; TYPE_3__* Console; } ;
typedef TYPE_1__ PT ;
typedef TYPE_2__ CMD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,char*,TYPE_2__*,int,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,char*) ;

void FUNC_8(PT *VAR_9)
{
 char VAR_10[VAR_2];
 wchar_t VAR_11[VAR_2];

 if (VAR_9 == ((void*)0))
 {
  return;
 }


 FUNC_2(VAR_11, sizeof(VAR_11), FUNC_3("CMD_VPNCMD_TOOLS_CONNECTED"));
 VAR_9->Console->Write(VAR_9->Console, VAR_11);
 VAR_9->Console->Write(VAR_9->Console, L"");

 while (1)
 {

  CMD VAR_12[] =
  {
   {"About", VAR_3},
   {"MakeCert", VAR_5},
   {"MakeCert2048", VAR_6},
   {"TrafficClient", VAR_7},
   {"TrafficServer", VAR_8},
   {"Check", VAR_4},
  };


  FUNC_1(VAR_10, sizeof(VAR_10), "VPN Tools>");

  if (FUNC_0(VAR_9->Console, VAR_9->CmdLine, VAR_10, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]), VAR_9) == 0)
  {
   break;
  }
  VAR_9->LastError = VAR_9->Console->RetCode;

  if (VAR_9->LastError == VAR_1 && VAR_9->Console->ConsoleType != VAR_0)
  {
   VAR_9->Console->Write(VAR_9->Console, FUNC_3("CMD_MSG_OK"));
   VAR_9->Console->Write(VAR_9->Console, L"");
  }

  if (VAR_9->CmdLine != ((void*)0))
  {
   break;
  }
 }
}

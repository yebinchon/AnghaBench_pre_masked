
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_12__ {int ServerMode; void* SendBlocks2; void* SendBlocks; void* ReceivedBlocks; int ServerPort; int ServerName; int ClientStr; void* ClientBuild; void* ClientVer; TYPE_4__* Session; void* ConnectingSocks; void* ConnectingThreads; int CurrentNumConnection; void* LastCounterResetTick; int Name; int Status; TYPE_1__* Tcp; int Protocol; TYPE_2__* Cedar; int ref; int lock; void* ConnectedTick; } ;
struct TYPE_11__ {int VirtualHost; int LinkModeClient; TYPE_3__* ClientOption; TYPE_2__* Cedar; } ;
struct TYPE_10__ {char* Hostname; int Port; } ;
struct TYPE_9__ {void* Build; void* Version; int ref; } ;
struct TYPE_8__ {void* TcpSockList; } ;
typedef int TCP ;
typedef TYPE_4__ SESSION ;
typedef TYPE_5__ CONNECTION ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 void* FUNC_4 (int *) ;
 int FUNC_5 () ;
 void* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int,char*) ;
 void* FUNC_9 () ;
 void* FUNC_10 (int) ;

CONNECTION *FUNC_11(SESSION *VAR_5, char *VAR_6, UINT VAR_7, UINT VAR_8)
{
 CONNECTION *VAR_9;


 VAR_9 = FUNC_10(sizeof(CONNECTION));
 VAR_9->ConnectedTick = FUNC_9();
 VAR_9->lock = FUNC_5();
 VAR_9->ref = FUNC_7();
 VAR_9->Cedar = VAR_5->Cedar;
 FUNC_0(VAR_9->Cedar->ref);
 VAR_9->Protocol = VAR_4;
 VAR_9->Tcp = FUNC_10(sizeof(TCP));
 VAR_9->Tcp->TcpSockList = FUNC_4(((void*)0));
 VAR_9->ServerMode = 0;
 VAR_9->Status = VAR_3;
 VAR_9->Name = FUNC_1("CLIENT_CONNECTION");
 VAR_9->Session = VAR_5;
 VAR_9->CurrentNumConnection = FUNC_3();
 VAR_9->LastCounterResetTick = FUNC_9();
 FUNC_2(VAR_9->CurrentNumConnection);

 VAR_9->ConnectingThreads = FUNC_4(((void*)0));
 VAR_9->ConnectingSocks = FUNC_4(((void*)0));

 if (VAR_6 == ((void*)0))
 {
  VAR_9->ClientVer = VAR_5->Cedar->Version;
  VAR_9->ClientBuild = VAR_5->Cedar->Build;

  if (VAR_9->Session->VirtualHost == 0)
  {
   if (VAR_9->Session->LinkModeClient == 0)
   {
    FUNC_8(VAR_9->ClientStr, sizeof(VAR_9->ClientStr), VAR_0);
   }
   else
   {
    FUNC_8(VAR_9->ClientStr, sizeof(VAR_9->ClientStr), VAR_2);
   }
  }
  else
  {
   FUNC_8(VAR_9->ClientStr, sizeof(VAR_9->ClientStr), VAR_1);
  }
 }
 else
 {
  VAR_9->ClientVer = VAR_7;
  VAR_9->ClientBuild = VAR_8;
  FUNC_8(VAR_9->ClientStr, sizeof(VAR_9->ClientStr), VAR_6);
 }


 FUNC_8(VAR_9->ServerName, sizeof(VAR_9->ServerName), VAR_5->ClientOption->Hostname);
 VAR_9->ServerPort = VAR_5->ClientOption->Port;


 VAR_9->ReceivedBlocks = FUNC_6();
 VAR_9->SendBlocks = FUNC_6();
 VAR_9->SendBlocks2 = FUNC_6();

 return VAR_9;
}

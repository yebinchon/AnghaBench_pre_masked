
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int DisconnectFlag; int DisconnectedByYou; int Magic_Disconnect; int * TcpSock; } ;
typedef int RUDP_STACK ;
typedef TYPE_1__ RUDP_SESSION ;


 int FUNC_0 (char*,TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(RUDP_STACK *VAR_0, RUDP_SESSION *VAR_1, bool VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->DisconnectFlag == 0)
 {
  UINT VAR_3;

  VAR_1->DisconnectFlag = 1;
  VAR_1->DisconnectedByYou = VAR_2;

  FUNC_0("R-UDP Session %X Disconnected. by you flag: %u\n", VAR_1, VAR_2);

  if (VAR_1->TcpSock != ((void*)0))
  {

   FUNC_1(VAR_1->TcpSock);
   FUNC_3(VAR_1->TcpSock);

   VAR_1->TcpSock = ((void*)0);
  }


  if (VAR_2 == 0)
  {
   for (VAR_3 = 0;VAR_3 < 5;VAR_3++)
   {
    FUNC_2(VAR_0, VAR_1, VAR_1->Magic_Disconnect, ((void*)0), 0);
   }
  }
 }
}

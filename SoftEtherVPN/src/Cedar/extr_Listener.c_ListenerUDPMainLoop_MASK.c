
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_14__ {int IgnoreRecvErr; int LocalPort; } ;
struct TYPE_13__ {TYPE_1__* Server; } ;
struct TYPE_12__ {TYPE_4__* Sock; TYPE_3__* Cedar; scalar_t__ Halt; int Status; int Event; int Port; } ;
struct TYPE_11__ {int ListenIP; } ;
typedef int SOCKSET ;
typedef TYPE_2__ LISTENER ;
typedef int IP ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (int ,int,int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int *,scalar_t__*,int *,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int *,int ,int *,int *) ;
 int FUNC_10 (TYPE_3__*,TYPE_4__*,int *,scalar_t__,int *,scalar_t__) ;
 int VAR_5 ;
 int FUNC_11 (int ,int ) ;

void FUNC_12(LISTENER *VAR_6)
{
 UCHAR *VAR_7;

 if (VAR_6 == ((void*)0))
 {
  return;
 }

 FUNC_1("ListenerUDPMainLoop Starts.\n");
 VAR_6->Status = VAR_1;

 while (1)
 {

  while (1)
  {

   if (VAR_6->Halt)
   {

    return;
   }

   FUNC_1("NewUDP()\n");
   VAR_6->Sock = FUNC_6(VAR_6->Port, 0, &VAR_6->Cedar->Server->ListenIP);
   if (VAR_6->Sock != ((void*)0))
   {

    break;
   }


   FUNC_1("Failed to NewUDP.\n");
   FUNC_11(VAR_6->Event, VAR_2);


   if (VAR_6->Halt)
   {
    FUNC_1("UDP Halt.\n");
    return;
   }
  }

  VAR_6->Status = VAR_0;
  FUNC_1("Start Listening at UDP Port %u.\n", VAR_6->Sock->LocalPort);


  if (VAR_6->Halt)
  {

   goto STOP;
  }


  VAR_7 = FUNC_5(VAR_5);


  while (1)
  {
   IP VAR_8;
   UINT VAR_9;
   UINT VAR_10;
   SOCKSET VAR_11;

   FUNC_4(&VAR_11);
   FUNC_0(&VAR_11, VAR_6->Sock);
   FUNC_9(&VAR_11, VAR_3, ((void*)0), ((void*)0));

   VAR_10 = FUNC_7(VAR_6->Sock, &VAR_8, &VAR_9, VAR_7, VAR_5);
   if (((VAR_10 == 0) && (VAR_6->Sock->IgnoreRecvErr == 0)) || VAR_6->Halt)
   {

STOP:
    FUNC_2(VAR_6->Sock);
    FUNC_8(VAR_6->Sock);
    VAR_6->Sock = ((void*)0);
    FUNC_1("UDP Listen Stopped.\n");
    FUNC_3(VAR_7);
    break;
   }


   if (VAR_10 != VAR_4)
   {
    FUNC_10(VAR_6->Cedar, VAR_6->Sock, &VAR_8, VAR_9, VAR_7, VAR_10);
   }
  }
 }
}

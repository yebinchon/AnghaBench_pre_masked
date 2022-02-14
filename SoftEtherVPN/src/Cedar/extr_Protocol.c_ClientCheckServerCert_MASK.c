
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int X ;
typedef scalar_t__ UINT64 ;
struct TYPE_17__ {int Expired; int Ok; int * ServerX; scalar_t__ UserSelected; TYPE_3__* Connection; int * CheckCertProc; } ;
struct TYPE_16__ {int * CheckCertProc; } ;
struct TYPE_15__ {TYPE_11__* Session; TYPE_1__* FirstSock; int * ServerX; scalar_t__ UseTicket; int * Cedar; } ;
struct TYPE_14__ {int CheckServerCert; int lock; int * ServerCert; } ;
struct TYPE_13__ {int * RemoteX; } ;
struct TYPE_12__ {int LinkModeClient; TYPE_2__* Link; TYPE_4__* ClientAuth; } ;
typedef int THREAD ;
typedef TYPE_3__ CONNECTION ;
typedef TYPE_4__ CLIENT_AUTH ;
typedef TYPE_5__ CHECK_CERT_THREAD_PROC ;
typedef int CEDAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_11__*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,TYPE_5__*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 TYPE_5__* FUNC_15 (int) ;

bool FUNC_16(CONNECTION *VAR_2, bool *VAR_3)
{
 CLIENT_AUTH *VAR_4;
 X *VAR_5;
 CHECK_CERT_THREAD_PROC *VAR_6;
 THREAD *VAR_7;
 CEDAR *VAR_8;
 bool VAR_9;
 UINT64 VAR_10;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3 != ((void*)0))
 {
  *VAR_3 = 0;
 }

 VAR_4 = VAR_2->Session->ClientAuth;
 VAR_8 = VAR_2->Cedar;

 if (VAR_4->CheckCertProc == ((void*)0) && VAR_2->Session->LinkModeClient == 0)
 {

  return 1;
 }

 if (VAR_2->Session->LinkModeClient && VAR_2->Session->Link->CheckServerCert == 0)
 {

  return 1;
 }

 if (VAR_2->UseTicket)
 {

  if (FUNC_5(VAR_2->FirstSock->RemoteX, VAR_2->ServerX) == 0)
  {
   return 0;
  }
  else
  {
   return 1;
  }
 }

 VAR_5 = FUNC_4(VAR_2->FirstSock->RemoteX);
 if (VAR_5 == ((void*)0))
 {

  return 0;
 }

 if (FUNC_2(VAR_5))
 {

  if (VAR_2->Session->LinkModeClient == 0)
  {

   if (FUNC_0(VAR_8, VAR_5))
   {

    FUNC_7(VAR_5);
    return 1;
   }
  }
  else
  {

   if (FUNC_1(VAR_2->Session, VAR_5))
   {

    FUNC_7(VAR_5);
    return 1;
   }
  }
 }

 if (VAR_2->Session->LinkModeClient)
 {
  if (FUNC_2(VAR_5))
  {
   FUNC_8(VAR_2->Session->Link->lock);
   {
    if (VAR_2->Session->Link->ServerCert != ((void*)0))
    {
     if (FUNC_5(VAR_2->Session->Link->ServerCert, VAR_5))
     {
      FUNC_12(VAR_2->Session->Link->lock);

      FUNC_7(VAR_5);
      return 1;
     }
    }
   }
   FUNC_12(VAR_2->Session->Link->lock);
  }
  else
  {
   if (VAR_3 != ((void*)0))
   {
    *VAR_3 = 1;
   }
  }


  FUNC_7(VAR_5);
  return 0;
 }

 VAR_6 = FUNC_15(sizeof(CHECK_CERT_THREAD_PROC));
 VAR_6->ServerX = VAR_5;
 VAR_6->CheckCertProc = VAR_4->CheckCertProc;
 VAR_6->Connection = VAR_2;


 VAR_7 = FUNC_9(VAR_1, VAR_6);
 FUNC_14(VAR_7);


 VAR_10 = FUNC_11();
 while (1)
 {
  if ((FUNC_11() - VAR_10) > VAR_0)
  {

   VAR_10 = FUNC_11();
   FUNC_3(VAR_2);
  }
  if (VAR_6->UserSelected)
  {

   break;
  }
  FUNC_13(VAR_7, 500);
 }

 if (VAR_3 != ((void*)0))
 {
  *VAR_3 = VAR_6->Expired;
 }

 VAR_9 = VAR_6->Ok;
 FUNC_7(VAR_6->ServerX);
 FUNC_6(VAR_6);
 FUNC_10(VAR_7);

 return VAR_9;
}

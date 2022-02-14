
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_17__ {scalar_t__ ClientConnectError_NoSavePassword; int Err; } ;
struct TYPE_16__ {int CancelConnect; int Client_NoSavePassword; int lock; TYPE_10__* Policy; TYPE_5__* Connection; TYPE_3__* Cedar; TYPE_2__* Account; int Err; int ClientStatus; } ;
struct TYPE_15__ {int * Client; } ;
struct TYPE_14__ {int lock; TYPE_1__* ClientAuth; } ;
struct TYPE_13__ {scalar_t__ AuthType; int PlainPassword; int HashedPassword; } ;
struct TYPE_12__ {scalar_t__ NoSavePassword; } ;
typedef TYPE_4__ SESSION ;
typedef TYPE_5__ CONNECTION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

bool FUNC_9(SESSION *VAR_4)
{
 CONNECTION *VAR_5;
 bool VAR_6 = 0;

 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_4->ClientStatus = VAR_2;

 FUNC_2("SessionConnect() Started.\n");


 FUNC_4(VAR_4->lock);
 {
  VAR_4->Err = VAR_3;
  if (VAR_4->Policy != ((void*)0))
  {
   FUNC_3(VAR_4->Policy);
   VAR_4->Policy = ((void*)0);
  }
 }
 FUNC_7(VAR_4->lock);

 VAR_4->CancelConnect = 0;


 VAR_5 = FUNC_5(VAR_4);
 VAR_4->Connection = VAR_5;


 VAR_6 = FUNC_1(VAR_5);
 VAR_4->Err = VAR_5->Err;

 VAR_4->CancelConnect = 0;

 if (VAR_4->Cedar->Client != ((void*)0))
 {
  if (VAR_4->Policy != ((void*)0))
  {
   if (VAR_4->Policy->NoSavePassword)
   {
    VAR_4->Client_NoSavePassword = 1;

    if (VAR_4->Account != ((void*)0))
    {
     FUNC_4(VAR_4->Account->lock);
     {
      if (VAR_4->Account->ClientAuth != ((void*)0))
      {
       if (VAR_4->Account->ClientAuth->AuthType == VAR_0 ||
        VAR_4->Account->ClientAuth->AuthType == VAR_1)
       {
        FUNC_8(VAR_4->Account->ClientAuth->HashedPassword, sizeof(VAR_4->Account->ClientAuth->HashedPassword));
        FUNC_8(VAR_4->Account->ClientAuth->PlainPassword, sizeof(VAR_4->Account->ClientAuth->PlainPassword));
       }
      }
     }
     FUNC_7(VAR_4->Account->lock);

     FUNC_0(VAR_4->Cedar->Client);
    }
   }
  }
 }

 if (VAR_5->ClientConnectError_NoSavePassword)
 {
  VAR_4->Client_NoSavePassword = 1;
 }


 VAR_4->Connection = ((void*)0);
 FUNC_6(VAR_5);

 FUNC_4(VAR_4->lock);
 {
  if (VAR_4->Policy != ((void*)0))
  {
   FUNC_3(VAR_4->Policy);
   VAR_4->Policy = ((void*)0);
  }
 }
 FUNC_7(VAR_4->lock);

 return VAR_6;
}

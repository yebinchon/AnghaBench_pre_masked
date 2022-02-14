
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {int IsDisconnected; int RecvFifo; int bio; TYPE_3__* SendFifo; } ;
typedef TYPE_1__ SSL_BIO ;


 int FUNC_0 (int ,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int *,int ) ;
 int VAR_0 ;
 int FUNC_9 (int ,int *,int ) ;

bool FUNC_10(SSL_BIO *VAR_1, bool VAR_2, bool VAR_3)
{

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->IsDisconnected)
 {
  return 0;
 }


 if (VAR_2)
 {
  while (VAR_1->SendFifo->size >= 1)
  {
   int VAR_4 = FUNC_2(VAR_1->bio, FUNC_7(VAR_1->SendFifo), FUNC_6(VAR_1->SendFifo));

   if (VAR_4 == 0)
   {
    VAR_1->IsDisconnected = 1;
    VAR_0;
    return 0;
   }
   else
   {
    if (VAR_4 < 0)
    {
     if (FUNC_1(VAR_1->bio))
     {
      break;
     }
     else
     {
      VAR_1->IsDisconnected = 1;
      VAR_0;
      return 0;
     }
    }
    else
    {
     FUNC_8(VAR_1->SendFifo, ((void*)0), (UINT)VAR_4);
    }
   }
  }
 }


 if (VAR_3)
 {
  while (1)
  {
   UCHAR VAR_5[4096];
   int VAR_6;

   VAR_6 = FUNC_0(VAR_1->bio, VAR_5, sizeof(VAR_5));

   if (VAR_6 == 0)
   {
    VAR_1->IsDisconnected = 1;
    VAR_0;
    return 0;
   }
   else
   {
    if (VAR_6 < 0)
    {
     if (FUNC_1(VAR_1->bio))
     {
      break;
     }
     else
     {
      VAR_1->IsDisconnected = 1;
      VAR_0;
      FUNC_3("OpenSSL Error: %s\n", FUNC_4(FUNC_5(), ((void*)0)));
      return 0;
     }
    }
    else
    {
     FUNC_9(VAR_1->RecvFifo, VAR_5, (UINT)VAR_6);
    }
   }
  }
 }

 return 1;
}

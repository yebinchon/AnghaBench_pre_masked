
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int IsDisconnected; TYPE_2__* RawIn; TYPE_1__* RawOut; } ;
struct TYPE_17__ {int Size; int * Buf; } ;
struct TYPE_16__ {TYPE_6__* SslPipe; } ;
struct TYPE_15__ {scalar_t__ size; } ;
struct TYPE_14__ {TYPE_3__* SendFifo; } ;
struct TYPE_13__ {TYPE_3__* RecvFifo; } ;
typedef TYPE_3__ FIFO ;
typedef TYPE_4__ EAP_CLIENT ;
typedef TYPE_5__ BUF ;


 int FUNC_0 (TYPE_5__*) ;
 TYPE_6__* FUNC_1 (int,int *,int *,int *) ;
 TYPE_5__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,int *,int ) ;
 int FUNC_4 (TYPE_6__*) ;

bool FUNC_5(EAP_CLIENT *VAR_0)
{
 bool VAR_1 = 0;
 FIFO *VAR_2;
 FIFO *VAR_3;
 BUF *VAR_4;
 if (VAR_0 == ((void*)0))
 {
  return 0;
 }
 if (VAR_0->SslPipe != ((void*)0))
 {
  return 0;
 }

 VAR_0->SslPipe = FUNC_1(0, ((void*)0), ((void*)0), ((void*)0));
 VAR_2 = VAR_0->SslPipe->RawOut->RecvFifo;
 VAR_3 = VAR_0->SslPipe->RawIn->SendFifo;

 FUNC_4(VAR_0->SslPipe);

 VAR_4 = FUNC_2(VAR_2);

 while (1)
 {
  VAR_1 = FUNC_3(VAR_0, VAR_4->Buf, VAR_4->Size);
  FUNC_0(VAR_4);

  if (VAR_2->size == 0)
  {
   break;
  }

  VAR_4 = FUNC_2(VAR_2);
 }

 FUNC_3(VAR_0, ((void*)0), 0);

 return !VAR_0->SslPipe->IsDisconnected;
}

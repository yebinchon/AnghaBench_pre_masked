
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int tmpmsg ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {int IsDisconnected; TYPE_3__* SslInOut; TYPE_2__* RawIn; TYPE_1__* RawOut; } ;
struct TYPE_22__ {int Size; int Buf; } ;
struct TYPE_21__ {TYPE_9__* SslPipe; } ;
struct TYPE_20__ {int Type; } ;
struct TYPE_19__ {scalar_t__ size; } ;
struct TYPE_18__ {int SendFifo; } ;
struct TYPE_17__ {TYPE_4__* SendFifo; } ;
struct TYPE_16__ {TYPE_4__* RecvFifo; } ;
typedef TYPE_4__ FIFO ;
typedef TYPE_5__ EAP_MESSAGE ;
typedef TYPE_6__ EAP_CLIENT ;
typedef TYPE_7__ BUF ;


 int FUNC_0 (TYPE_5__*,void*,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (scalar_t__,int) ;
 TYPE_7__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (int ,int *,scalar_t__) ;
 int FUNC_7 (TYPE_5__*,int) ;

bool FUNC_8(EAP_CLIENT *VAR_0, void *VAR_1, UINT VAR_2)
{
 bool VAR_3 = 0;
 FIFO *VAR_4;
 FIFO *VAR_5;
 BUF *VAR_6;
 EAP_MESSAGE VAR_7;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }
 if (VAR_0->SslPipe == ((void*)0))
 {
  return 0;
 }

 VAR_4 = VAR_0->SslPipe->RawOut->RecvFifo;
 VAR_5 = VAR_0->SslPipe->RawIn->SendFifo;

 FUNC_7(&VAR_7, sizeof(VAR_7));
 FUNC_0(&VAR_7, VAR_1, FUNC_2(VAR_2, sizeof(EAP_MESSAGE)));

 FUNC_6(VAR_0->SslPipe->SslInOut->SendFifo, &VAR_7.Type, VAR_2 - 4);

 FUNC_5(VAR_0->SslPipe);

 VAR_6 = FUNC_3(VAR_4);

 while (1)
 {
  VAR_3 = FUNC_4(VAR_0, VAR_6->Buf, VAR_6->Size);
  FUNC_1(VAR_6);

  if (VAR_4->size == 0)
  {
   break;
  }

  VAR_6 = FUNC_3(VAR_4);
 }

 return !VAR_0->SslPipe->IsDisconnected;
}

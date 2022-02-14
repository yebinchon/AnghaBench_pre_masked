
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int Size; int Buf; } ;
struct TYPE_14__ {TYPE_1__* SslPipe; } ;
struct TYPE_13__ {int Type; int Len; } ;
struct TYPE_12__ {int RecvFifo; } ;
struct TYPE_11__ {TYPE_2__* SslInOut; } ;
typedef TYPE_3__ EAP_MESSAGE ;
typedef TYPE_4__ EAP_CLIENT ;
typedef TYPE_5__ BUF ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int,int) ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int) ;

bool FUNC_6(EAP_CLIENT *VAR_0, EAP_MESSAGE *VAR_1)
{
 BUF *VAR_2;
 bool VAR_3 = 0;
 if (VAR_0 == ((void*)0))
 {
  return 0;
 }
 if (VAR_0->SslPipe == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_4(VAR_0->SslPipe->SslInOut->RecvFifo);

 if (VAR_2->Size >= 1)
 {
  FUNC_5(VAR_1, sizeof(EAP_MESSAGE));

  VAR_1->Len = FUNC_1(VAR_2->Size + 4);
  FUNC_0(&VAR_1->Type, VAR_2->Buf, FUNC_3(VAR_2->Size, 1501));

  VAR_3 = 1;
 }

 FUNC_2(VAR_2);

 return VAR_3;
}

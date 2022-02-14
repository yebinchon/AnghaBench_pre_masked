
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int L2TPPacket; int Buf; } ;
typedef TYPE_1__ L2TP_QUEUE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(L2TP_QUEUE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->Buf);

 FUNC_2(VAR_0->L2TPPacket);

 FUNC_0(VAR_0);
}

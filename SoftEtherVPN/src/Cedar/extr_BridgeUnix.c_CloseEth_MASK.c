
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct CAPTUREBLOCK {TYPE_1__* Buf; } ;
struct TYPE_6__ {int Socket; int SocketBsdIf; struct TYPE_6__* Title; struct TYPE_6__* Name; int Cancel; struct TYPE_6__* Buffer; int Queue; int CaptureThread; int Pcap; int * Tap; scalar_t__ IsRawIpMode; } ;
typedef TYPE_1__ ETH ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct CAPTUREBLOCK*) ;
 int FUNC_4 (int *) ;
 struct CAPTUREBLOCK* FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

void FUNC_14(ETH *VAR_2)
{

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->IsRawIpMode)
 {
  FUNC_0(VAR_2);

  return;
 }

 if (VAR_2->Tap != ((void*)0))
 {

  FUNC_4(VAR_2->Tap);

 }
 FUNC_6(VAR_2->Cancel);
 FUNC_2(VAR_2->Name);
 FUNC_2(VAR_2->Title);


 FUNC_1(VAR_2, 0);

 if (VAR_2->Socket != VAR_1)
 {



  FUNC_11(VAR_2->Socket);







 }

 FUNC_2(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int HaltPulseThread; int * MsSuspendHandler; struct TYPE_6__* CmSetting; int SockList; int NotifyCancelList; int * GlobalPulse; int * PulseRecvThread; int * lock; int * lockForConnect; int Cedar; int * Logger; int Eraser; } ;
typedef TYPE_1__ CLIENT ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_18(CLIENT *VAR_3)
{

 if (VAR_3 == ((void*)0))
 {
  return;
 }



 FUNC_1(VAR_3);






 FUNC_0(VAR_3, "LC_END");
 FUNC_0(VAR_3, "L_LINE");
 FUNC_4(VAR_3->Eraser);
 FUNC_5(VAR_3->Logger);
 VAR_3->Logger = ((void*)0);


 FUNC_12(VAR_3->Cedar);

 FUNC_2(VAR_3->lockForConnect);
 FUNC_2(VAR_3->lock);

 VAR_3->HaltPulseThread = 1;

 if (VAR_3->GlobalPulse != ((void*)0))
 {



 }

 if (VAR_3->PulseRecvThread != ((void*)0))
 {
  FUNC_16(VAR_3->PulseRecvThread, VAR_0);
  FUNC_14(VAR_3->PulseRecvThread);
 }

 if (VAR_3->GlobalPulse != ((void*)0))
 {



 }

 FUNC_13(VAR_3->NotifyCancelList);

 FUNC_6(VAR_3->SockList);

 FUNC_3(VAR_3->CmSetting);
 FUNC_3(VAR_3);
 FUNC_15();

 if (VAR_1 != ((void*)0))
 {
  FUNC_2(VAR_1);
  VAR_1 = ((void*)0);

  VAR_2 = 0;
 }
}

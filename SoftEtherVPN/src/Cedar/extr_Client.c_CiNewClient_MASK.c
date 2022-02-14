
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
struct TYPE_12__ {int BuildInfo; int VerString; TYPE_1__* Client; } ;
struct TYPE_11__ {int NoSaveLog; TYPE_3__* Cedar; int Logger; int PulseRecvThread; int * GlobalPulse; int EncryptedPassword; int NotifyCancelList; int ref; void* lockForConnect; void* lock; int SockList; void* CmSetting; int MsSuspendHandler; } ;
typedef int CM_SETTING ;
typedef TYPE_1__ CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int * FUNC_11 (int ) ;
 TYPE_3__* FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 () ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ,TYPE_1__*) ;
 int FUNC_19 () ;
 int FUNC_20 (int ,char*,int ) ;
 int FUNC_21 (int *,int,int ) ;
 int FUNC_22 (int) ;
 void* FUNC_23 (int) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;

CLIENT *FUNC_26()
{
 CLIENT *VAR_9 = FUNC_23(sizeof(CLIENT));



 if (VAR_7 == ((void*)0))
 {
  VAR_7 = FUNC_14();
  VAR_8 = 0;
 }
 VAR_9->CmSetting = FUNC_23(sizeof(CM_SETTING));

 VAR_9->SockList = FUNC_17();

 VAR_9->lock = FUNC_14();
 VAR_9->lockForConnect = FUNC_14();
 VAR_9->ref = FUNC_16();

 VAR_9->Cedar = FUNC_12(((void*)0), ((void*)0));

 VAR_9->Cedar->Client = VAR_9;

 VAR_9->NotifyCancelList = FUNC_13(((void*)0));

 FUNC_20(VAR_9->EncryptedPassword, "", 0);





 if (VAR_9->GlobalPulse != ((void*)0))
 {
  VAR_9->PulseRecvThread = FUNC_18(VAR_4, VAR_9);
 }

 FUNC_5(VAR_9);


 if(VAR_9->NoSaveLog == 0)
 {
  FUNC_7(VAR_2);
  VAR_9->Logger = FUNC_15(VAR_2, VAR_3, VAR_5);
 }

 FUNC_0(VAR_9, "L_LINE");
 FUNC_0(VAR_9, "LC_START_2", VAR_0, VAR_9->Cedar->VerString);
 FUNC_0(VAR_9, "LC_START_3", VAR_9->Cedar->BuildInfo);
 FUNC_0(VAR_9, "LC_START_1");
 FUNC_4(VAR_9);


 FUNC_19();
 FUNC_3(VAR_9);

 FUNC_2(VAR_9);


 FUNC_1(VAR_9);

 return VAR_9;
}

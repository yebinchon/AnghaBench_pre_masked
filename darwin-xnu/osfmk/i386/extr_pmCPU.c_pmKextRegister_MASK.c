
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int * pmIPIHandler; int (* pmCPUStateInit ) () ;} ;
typedef TYPE_1__ pmDispatch_t ;
struct TYPE_7__ {int DisableApicTimer; int InterruptStats; int IsInterrupting; int InterruptPending; int pmSendIPI; int * topoParms; int timerQueueMigrate; int RTCClockAdjust; int ThreadGetUrgency; int GetNanotimeInfo; int GetSavedRunCount; int ThreadBind; int LCPUtoProcessor; int GetHibernate; int LockCPUTopology; int GetPkgRoot; int GetMyPackage; int GetMyDie; int GetMyCore; int GetMyLCPU; int GetPackage; int GetDie; int GetCore; int GetLCPU; int initComplete; int resyncDeadlines; int setRTCPop; } ;
typedef TYPE_2__ pmCallBacks_t ;
typedef int i386_intr_func_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 () ;
 int VAR_29 ;
 int VAR_30 ;

void
FUNC_3(uint32_t VAR_31, pmDispatch_t *VAR_32,
    pmCallBacks_t *VAR_33)
{
 if (VAR_33 != ((void*)0) && VAR_31 == VAR_1) {
  VAR_33->setRTCPop = VAR_28;
  VAR_33->resyncDeadlines = VAR_23;
  VAR_33->initComplete = VAR_20;
  VAR_33->GetLCPU = VAR_11;
  VAR_33->GetCore = VAR_9;
  VAR_33->GetDie = VAR_10;
  VAR_33->GetPackage = VAR_17;
  VAR_33->GetMyLCPU = VAR_14;
  VAR_33->GetMyCore = VAR_12;
  VAR_33->GetMyDie = VAR_13;
  VAR_33->GetMyPackage = VAR_15;
  VAR_33->GetPkgRoot = VAR_18;
  VAR_33->LockCPUTopology = VAR_22;
  VAR_33->GetHibernate = VAR_7;
  VAR_33->LCPUtoProcessor = VAR_21;
  VAR_33->ThreadBind = VAR_29;
  VAR_33->GetSavedRunCount = VAR_19;
  VAR_33->GetNanotimeInfo = VAR_16;
  VAR_33->ThreadGetUrgency = VAR_25;
  VAR_33->RTCClockAdjust = VAR_27;
  VAR_33->timerQueueMigrate = VAR_26;
  VAR_33->topoParms = &VAR_30;
  VAR_33->pmSendIPI = VAR_24;
  VAR_33->InterruptPending = VAR_5;
  VAR_33->IsInterrupting = VAR_6;
  VAR_33->InterruptStats = VAR_4;
  VAR_33->DisableApicTimer = VAR_3;
 } else {
  FUNC_1("Version mis-match between Kernel and CPU PM");
 }

 if (VAR_32 != ((void*)0)) {
  if (VAR_8) {
   FUNC_1("Attempt to re-register power management interface--AICPM present in xcpm mode? %p->%p", VAR_8, VAR_32);
  }

  VAR_8 = VAR_32;

  if (VAR_2
      && VAR_8->pmCPUStateInit != ((void*)0)) {
   (*VAR_8->pmCPUStateInit)();
   VAR_2 = VAR_0;
  }

  if (VAR_8->pmIPIHandler != ((void*)0)) {
   FUNC_0((i386_intr_func_t)VAR_8->pmIPIHandler);
  }
 }
}

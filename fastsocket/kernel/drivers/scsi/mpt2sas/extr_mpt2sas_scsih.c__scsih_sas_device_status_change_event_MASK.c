
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct fw_event_work {TYPE_3__* event_data; } ;
struct _sas_device {TYPE_2__* starget; } ;
struct MPT2SAS_TARGET {int tm_busy; } ;
struct TYPE_5__ {int HeaderVersion; } ;
struct MPT2SAS_ADAPTER {int logging_level; int sas_device_lock; TYPE_1__ facts; } ;
struct TYPE_7__ {scalar_t__ ReasonCode; int SASAddress; } ;
struct TYPE_6__ {struct MPT2SAS_TARGET* hostdata; } ;
typedef TYPE_3__ Mpi2EventDataSasDeviceStatusChange_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 struct _sas_device* FUNC_2 (struct MPT2SAS_ADAPTER*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct MPT2SAS_ADAPTER *VAR_3,
    struct fw_event_work *VAR_4)
{
 struct MPT2SAS_TARGET *VAR_5;
 struct _sas_device *VAR_6;
 u64 VAR_7;
 unsigned long VAR_8;
 Mpi2EventDataSasDeviceStatusChange_t *VAR_9 =
     VAR_4->event_data;
 if ((VAR_3->facts.HeaderVersion >> 8) < 0xC)
  return;

 if (VAR_9->ReasonCode !=
     VAR_1 &&
    VAR_9->ReasonCode !=
     VAR_0)
  return;

 FUNC_3(&VAR_3->sas_device_lock, VAR_8);
 VAR_7 = FUNC_1(VAR_9->SASAddress);
 VAR_6 = FUNC_2(VAR_3,
     VAR_7);

 if (!VAR_6 || !VAR_6->starget) {
  FUNC_4(&VAR_3->sas_device_lock, VAR_8);
  return;
 }

 VAR_5 = VAR_6->starget->hostdata;
 if (!VAR_5) {
  FUNC_4(&VAR_3->sas_device_lock, VAR_8);
  return;
 }

 if (VAR_9->ReasonCode ==
     VAR_1)
  VAR_5->tm_busy = 1;
 else
  VAR_5->tm_busy = 0;
 FUNC_4(&VAR_3->sas_device_lock, VAR_8);
}

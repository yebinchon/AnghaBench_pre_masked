
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct fw_event_work {TYPE_1__* event_data; } ;
struct _raid_device {int percent_complete; } ;
struct MPT2SAS_ADAPTER {int logging_level; int raid_device_lock; int hide_ir_msg; } ;
struct TYPE_3__ {scalar_t__ RAIDOperation; int PercentComplete; int VolDevHandle; } ;
typedef TYPE_1__ Mpi2EventDataIrOperationStatus_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct _raid_device* FUNC_0 (struct MPT2SAS_ADAPTER*,int ) ;
 int FUNC_1 (struct MPT2SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct MPT2SAS_ADAPTER *VAR_2,
    struct fw_event_work *VAR_3)
{
 Mpi2EventDataIrOperationStatus_t *VAR_4 = VAR_3->event_data;
 static struct _raid_device *VAR_5;
 unsigned long VAR_6;
 u16 VAR_7;
 if (VAR_4->RAIDOperation == VAR_0) {

  FUNC_3(&VAR_2->raid_device_lock, VAR_6);
  VAR_7 = FUNC_2(VAR_4->VolDevHandle);
  VAR_5 = FUNC_0(VAR_2, VAR_7);
  if (VAR_5)
   VAR_5->percent_complete =
       VAR_4->PercentComplete;
  FUNC_4(&VAR_2->raid_device_lock, VAR_6);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_target {TYPE_2__* hostdata; } ;
struct scsi_device {scalar_t__ type; int queue_depth; int tagged_supported; int host; } ;
struct TYPE_7__ {int tflags; scalar_t__ minSyncFactor; } ;
typedef TYPE_2__ VirtTarget ;
struct TYPE_9__ {scalar_t__ bus_type; TYPE_1__* sh; } ;
struct TYPE_8__ {TYPE_4__* ioc; } ;
struct TYPE_6__ {int can_queue; } ;
typedef TYPE_3__ MPT_SCSI_HOST ;
typedef TYPE_4__ MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct scsi_device*,int,int) ;
 struct scsi_target* FUNC_1 (struct scsi_device*) ;
 TYPE_3__* FUNC_2 (int ) ;

int
FUNC_3(struct scsi_device *VAR_9, int VAR_10, int VAR_11)
{
 MPT_SCSI_HOST *VAR_12 = FUNC_2(VAR_9->host);
 VirtTarget *VAR_13;
 struct scsi_target *VAR_14;
 int VAR_15;
 int VAR_16;
 MPT_ADAPTER *VAR_17 = VAR_12->ioc;

 VAR_14 = FUNC_1(VAR_9);
 VAR_13 = VAR_14->hostdata;

 if (VAR_11 != VAR_6)
  return -VAR_0;

 if (VAR_17->bus_type == VAR_7) {
  if (!(VAR_13->tflags & VAR_3))
   VAR_15 = 1;
  else if (VAR_9->type == VAR_8 &&
    VAR_13->minSyncFactor <= VAR_4)
   VAR_15 = VAR_1;
  else
   VAR_15 = VAR_2;
 } else
   VAR_15 = VAR_17->sh->can_queue;

 if (!VAR_9->tagged_supported)
  VAR_15 = 1;

 if (VAR_10 > VAR_15)
  VAR_10 = VAR_15;
 if (VAR_10 == 1)
  VAR_16 = 0;
 else
  VAR_16 = VAR_5;

 FUNC_0(VAR_9, VAR_16, VAR_10);
 return VAR_9->queue_depth;
}

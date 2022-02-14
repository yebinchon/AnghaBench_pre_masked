
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct gendisk {scalar_t__ private_data; TYPE_4__* queue; } ;
struct block_device {struct gendisk* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_9__ {TYPE_5__** LogicalDeviceInformation; } ;
struct TYPE_8__ {TYPE_1__* LogicalDriveInformation; } ;
struct TYPE_12__ {scalar_t__ FirmwareType; int * disks; TYPE_3__ V2; TYPE_2__ V1; } ;
struct TYPE_11__ {scalar_t__ LogicalDeviceState; } ;
struct TYPE_10__ {TYPE_6__* queuedata; } ;
struct TYPE_7__ {scalar_t__ LogicalDriveState; } ;
typedef TYPE_5__ DAC960_V2_LogicalDeviceInfo_T ;
typedef TYPE_6__ DAC960_Controller_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_4, fmode_t VAR_5)
{
 struct gendisk *VAR_6 = VAR_4->bd_disk;
 DAC960_Controller_T *VAR_7 = VAR_6->queue->queuedata;
 int VAR_8 = (long)VAR_6->private_data;

 if (VAR_7->FirmwareType == VAR_0) {
  if (VAR_7->V1.LogicalDriveInformation[VAR_8].
      LogicalDriveState == VAR_1)
   return -VAR_3;
 } else {
  DAC960_V2_LogicalDeviceInfo_T *VAR_9 =
   VAR_7->V2.LogicalDeviceInformation[VAR_8];
  if (!VAR_9 || VAR_9->LogicalDeviceState == VAR_2)
   return -VAR_3;
 }

 FUNC_0(VAR_4);

 if (!FUNC_1(VAR_7->disks[VAR_8]))
  return -VAR_3;
 return 0;
}

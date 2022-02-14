
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct gendisk {scalar_t__ private_data; TYPE_1__* queue; } ;
struct block_device {struct gendisk* bd_disk; } ;
struct TYPE_11__ {TYPE_5__** LogicalDeviceInformation; } ;
struct TYPE_10__ {int GeometryTranslationHeads; int GeometryTranslationSectors; TYPE_2__* LogicalDriveInformation; } ;
struct TYPE_13__ {scalar_t__ FirmwareType; TYPE_4__ V2; TYPE_3__ V1; } ;
struct TYPE_12__ {int DriveGeometry; int ConfigurableDeviceSize; } ;
struct TYPE_9__ {int LogicalDriveSize; } ;
struct TYPE_8__ {TYPE_6__* queuedata; } ;
typedef TYPE_5__ DAC960_V2_LogicalDeviceInfo_T ;
typedef TYPE_6__ DAC960_Controller_T ;


 int FUNC_0 (char*,TYPE_6__*,int) ;
 scalar_t__ VAR_0 ;


 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_2, struct hd_geometry *VAR_3)
{
 struct gendisk *VAR_4 = VAR_2->bd_disk;
 DAC960_Controller_T *VAR_5 = VAR_4->queue->queuedata;
 int VAR_6 = (long)VAR_4->private_data;

 if (VAR_5->FirmwareType == VAR_0) {
  VAR_3->heads = VAR_5->V1.GeometryTranslationHeads;
  VAR_3->sectors = VAR_5->V1.GeometryTranslationSectors;
  VAR_3->cylinders = VAR_5->V1.LogicalDriveInformation[VAR_6].
   LogicalDriveSize / (VAR_3->heads * VAR_3->sectors);
 } else {
  DAC960_V2_LogicalDeviceInfo_T *VAR_7 =
   VAR_5->V2.LogicalDeviceInformation[VAR_6];
  switch (VAR_7->DriveGeometry) {
  case 129:
   VAR_3->heads = 128;
   VAR_3->sectors = 32;
   break;
  case 128:
   VAR_3->heads = 255;
   VAR_3->sectors = 63;
   break;
  default:
   FUNC_0("Illegal Logical Device Geometry %d\n",
     VAR_5, VAR_7->DriveGeometry);
   return -VAR_1;
  }

  VAR_3->cylinders = VAR_7->ConfigurableDeviceSize /
   (VAR_3->heads * VAR_3->sectors);
 }

 return 0;
}

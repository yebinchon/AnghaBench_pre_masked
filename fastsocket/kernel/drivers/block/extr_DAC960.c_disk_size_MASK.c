
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__** LogicalDeviceInformation; } ;
struct TYPE_8__ {TYPE_1__* LogicalDriveInformation; } ;
struct TYPE_11__ {scalar_t__ FirmwareType; int LogicalDriveCount; TYPE_3__ V2; TYPE_2__ V1; } ;
struct TYPE_10__ {long ConfigurableDeviceSize; } ;
struct TYPE_7__ {long LogicalDriveSize; } ;
typedef TYPE_4__ DAC960_V2_LogicalDeviceInfo_T ;
typedef TYPE_5__ DAC960_Controller_T ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static long FUNC_0(DAC960_Controller_T *VAR_1, int VAR_2)
{
 if (VAR_1->FirmwareType == VAR_0) {
  if (VAR_2 >= VAR_1->LogicalDriveCount)
   return 0;
  return VAR_1->V1.LogicalDriveInformation[VAR_2].
   LogicalDriveSize;
 } else {
  DAC960_V2_LogicalDeviceInfo_T *VAR_3 =
   VAR_1->V2.LogicalDeviceInformation[VAR_2];
  if (VAR_3 == ((void*)0))
   return 0;
  return VAR_3->ConfigurableDeviceSize;
 }
}

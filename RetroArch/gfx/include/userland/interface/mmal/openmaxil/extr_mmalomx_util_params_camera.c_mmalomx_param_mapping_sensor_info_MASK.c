
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int revision; int manufacturer_id; int model_id; void* focal_length; void* f_number; } ;
struct TYPE_3__ {int nRevNum; int nManufacturerId; int nModelId; void* xFocalLength; void* xFNumber; } ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_1__ OMX_CONFIG_CAMERAINFOTYPE ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PARAMETER_SENSOR_INFORMATION_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   MMAL_PARAMETER_HEADER_T *VAR_3, OMX_PTR VAR_4)
{
   OMX_CONFIG_CAMERAINFOTYPE *VAR_5 = (OMX_CONFIG_CAMERAINFOTYPE *)VAR_4;
   MMAL_PARAMETER_SENSOR_INFORMATION_T *VAR_6 = (MMAL_PARAMETER_SENSOR_INFORMATION_T *)VAR_3;

   if (VAR_2 == VAR_0)
   {
      VAR_6->f_number = FUNC_0(VAR_5->xFNumber);
      VAR_6->focal_length = FUNC_0(VAR_5->xFocalLength);
      VAR_6->model_id = VAR_5->nModelId;
      VAR_6->manufacturer_id = VAR_5->nManufacturerId;
      VAR_6->revision = VAR_5->nRevNum;
   }
   else
   {
      VAR_5->xFNumber = FUNC_1(VAR_6->f_number);
      VAR_5->xFocalLength = FUNC_1(VAR_6->focal_length);
      VAR_5->nModelId = VAR_6->model_id;
      VAR_5->nManufacturerId = VAR_6->manufacturer_id;
      VAR_5->nRevNum = VAR_6->revision;
   }

   return VAR_1;
}

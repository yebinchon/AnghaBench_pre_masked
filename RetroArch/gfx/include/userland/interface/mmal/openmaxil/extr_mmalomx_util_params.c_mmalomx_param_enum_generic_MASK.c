
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {unsigned int xlat_enum_num; TYPE_1__* xlat_enum; scalar_t__ portless; } ;
struct TYPE_4__ {scalar_t__ omx; scalar_t__ mmal; } ;
typedef scalar_t__ OMX_PTR ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef TYPE_2__ MMALOMX_PARAM_TRANSLATION_T ;
typedef int MMALOMX_PARAM_OMX_HEADER_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,unsigned int) ;

MMAL_STATUS_T FUNC_2(MMALOMX_PARAM_MAPPING_DIRECTION VAR_3,
   const MMALOMX_PARAM_TRANSLATION_T *VAR_4,
   MMAL_PARAMETER_HEADER_T *VAR_5, OMX_PTR VAR_6, MMAL_PORT_T *VAR_7)
{
   uint32_t *VAR_8 = (uint32_t *)(((uint8_t *)VAR_5) + sizeof(MMAL_PARAMETER_HEADER_T));
   uint32_t *VAR_9 = (uint32_t *)(((uint8_t *)VAR_6) + sizeof(MMALOMX_PARAM_OMX_HEADER_T));
   unsigned int VAR_10 = 0;
   FUNC_0(VAR_7);

   if (VAR_4->portless)
      VAR_9 -= 1;


   if (VAR_3 == VAR_0)
      for (VAR_10 = 0; VAR_10 < VAR_4->xlat_enum_num && VAR_4->xlat_enum->omx != *VAR_9; VAR_10++);
   else
      for (VAR_10 = 0; VAR_10 < VAR_4->xlat_enum_num && VAR_4->xlat_enum->mmal != *VAR_8; VAR_10++);

   if (VAR_10 == VAR_4->xlat_enum_num)
   {
      if (VAR_3 == VAR_0)
         FUNC_1("mmalomx_param_enum_generic: omx enum value %u not supported", (unsigned int)*VAR_9);
      else
         FUNC_1("mmalomx_param_enum_generic: mmal enum value %u not supported", (unsigned int)*VAR_8);
      return VAR_1;
   }

   if (VAR_3 == VAR_0)
      *VAR_8 = VAR_4->xlat_enum[VAR_10].mmal;
   else
      *VAR_9 = VAR_4->xlat_enum[VAR_10].omx;

   return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_6__ {int xlat_enum_num; scalar_t__ portless; } ;
struct TYPE_5__ {int num; int den; } ;
typedef scalar_t__ OMX_PTR ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_RATIONAL_T ;
typedef int MMAL_PORT_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef TYPE_2__ MMALOMX_PARAM_TRANSLATION_T ;
typedef int MMALOMX_PARAM_OMX_HEADER_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

MMAL_STATUS_T FUNC_2(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   const MMALOMX_PARAM_TRANSLATION_T *VAR_3,
   MMAL_PARAMETER_HEADER_T *VAR_4, OMX_PTR VAR_5, MMAL_PORT_T *VAR_6)
{
   MMAL_RATIONAL_T *VAR_7 = (MMAL_RATIONAL_T *)(((uint8_t *)VAR_4) + sizeof(MMAL_PARAMETER_HEADER_T));
   int32_t *VAR_8 = (int32_t *)(((uint8_t *)VAR_5) + sizeof(MMALOMX_PARAM_OMX_HEADER_T));
   FUNC_0(VAR_6);

   if (VAR_3->portless)
      VAR_8 -= 1;

   if (VAR_2 == VAR_0)
   {
      VAR_7->num = *VAR_8;
      VAR_7->den = VAR_3->xlat_enum_num;
      FUNC_1(VAR_7);
   }
   else
   {
      FUNC_1(VAR_7);
      *VAR_8 = 0;
      if (VAR_7->den)
         *VAR_8 = VAR_7->num * VAR_3->xlat_enum_num / VAR_7->den;
   }

   return VAR_1;
}

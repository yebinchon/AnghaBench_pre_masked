
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int nSize; } ;
struct TYPE_7__ {scalar_t__ portless; } ;
struct TYPE_6__ {int size; scalar_t__ id; } ;
typedef int OMX_U32 ;
typedef scalar_t__ OMX_PTR ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_PARAMETER_HEADER_T ;
typedef TYPE_2__ MMALOMX_PARAM_TRANSLATION_T ;
typedef TYPE_3__ MMALOMX_PARAM_OMX_HEADER_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int *,int *,unsigned int) ;

MMAL_STATUS_T FUNC_3(MMALOMX_PARAM_MAPPING_DIRECTION VAR_3,
   const MMALOMX_PARAM_TRANSLATION_T *VAR_4,
   MMAL_PARAMETER_HEADER_T *VAR_5, OMX_PTR VAR_6, MMAL_PORT_T *VAR_7)
{
   MMALOMX_PARAM_OMX_HEADER_T *VAR_8 = (MMALOMX_PARAM_OMX_HEADER_T *)VAR_6;
   uint8_t *VAR_9 = ((uint8_t *)VAR_5) + sizeof(MMAL_PARAMETER_HEADER_T);
   uint8_t *VAR_10 = ((uint8_t *)VAR_6) + sizeof(MMALOMX_PARAM_OMX_HEADER_T);
   unsigned int VAR_11 = VAR_5->size - sizeof(MMAL_PARAMETER_HEADER_T);
   FUNC_0(VAR_7);

   if (VAR_4->portless)
      VAR_10 -= sizeof(OMX_U32);

   if (((uint8_t *)VAR_6) + VAR_8->nSize !=
         VAR_10 + VAR_11)
   {
      FUNC_1("mmalomx_param_mapping_generic: mismatch between mmal and omx parameters for (%u)",
                 (unsigned int)VAR_5->id);
      return VAR_1;
   }

   if (VAR_3 == VAR_0)
      FUNC_2(VAR_9, VAR_10, VAR_11);
   else
      FUNC_2(VAR_10, VAR_9, VAR_11);

   return VAR_2;
}

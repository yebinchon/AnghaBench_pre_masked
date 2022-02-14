
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ mmal_id; scalar_t__ omx_id; } ;
typedef TYPE_1__ MMALOMX_PARAM_TRANSLATION_T ;


 unsigned int FUNC_0 (TYPE_1__ const**) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ const** VAR_1 ;

const MMALOMX_PARAM_TRANSLATION_T *FUNC_1(uint32_t VAR_2)
{
   unsigned int VAR_3, VAR_4;

   for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
   {
      for (VAR_4 = 0; VAR_1[VAR_3][VAR_4].mmal_id != VAR_0; VAR_4++)
      {
         if (VAR_1[VAR_3][VAR_4].omx_id == VAR_2)
            break;
      }
      if (VAR_1[VAR_3][VAR_4].mmal_id != VAR_0)
         break;
   }

   return VAR_3 < FUNC_0(VAR_1) ? &VAR_1[VAR_3][VAR_4] : ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ mmal; scalar_t__ omx; scalar_t__ omx_coding; } ;
typedef scalar_t__ OMX_VIDEO_CODINGTYPE ;
typedef scalar_t__ OMX_U32 ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

uint32_t FUNC_0(OMX_U32 VAR_2, OMX_VIDEO_CODINGTYPE VAR_3)
{
   unsigned int VAR_4;
   for(VAR_4 = 0; VAR_1[VAR_4].mmal != VAR_0; VAR_4++)
      if(VAR_1[VAR_4].omx == VAR_2
         && VAR_1[VAR_4].omx_coding == VAR_3) break;
   return VAR_1[VAR_4].mmal;
}

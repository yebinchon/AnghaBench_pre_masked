
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mmal; scalar_t__ omx; } ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef scalar_t__ MMAL_STATUS_T ;


 TYPE_1__* VAR_0 ;

MMAL_STATUS_T FUNC_0(OMX_ERRORTYPE VAR_1)
{
   unsigned int VAR_2;
   for(VAR_2 = 0; VAR_0[VAR_2].mmal != (MMAL_STATUS_T)-1; VAR_2++)
      if(VAR_0[VAR_2].omx == VAR_1) break;
   return VAR_0[VAR_2].mmal;
}

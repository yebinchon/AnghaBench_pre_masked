
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ mmal; int omx; } ;
typedef int OMX_U32 ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

OMX_U32 FUNC_0(uint32_t VAR_2)
{
   unsigned int VAR_3;
   for(VAR_3 = 0; VAR_1[VAR_3].mmal != VAR_0; VAR_3++)
      if(VAR_1[VAR_3].mmal == VAR_2) break;
   return VAR_1[VAR_3].omx;
}

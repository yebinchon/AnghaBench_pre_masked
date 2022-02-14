
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ encoding; scalar_t__ bayer_order; scalar_t__ color_format; } ;
typedef scalar_t__ OMX_COLOR_FORMATTYPE ;
typedef scalar_t__ OMX_BAYERORDERTYPE ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

uint32_t FUNC_0(OMX_BAYERORDERTYPE VAR_2, OMX_COLOR_FORMATTYPE VAR_3)
{
   unsigned int VAR_4;
   for(VAR_4 = 0; VAR_1[VAR_4].encoding != VAR_0; VAR_4++)
      if(VAR_1[VAR_4].bayer_order == VAR_2 &&
         VAR_1[VAR_4].color_format == VAR_3)
         break;
   return VAR_1[VAR_4].encoding;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ encoding; scalar_t__ pixel_format; } ;
typedef scalar_t__ MMAL_FOURCC_T ;
typedef scalar_t__ BRCMJPEG_PIXEL_FORMAT_T ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static MMAL_FOURCC_T FUNC_0(BRCMJPEG_PIXEL_FORMAT_T VAR_2)
{
   unsigned int VAR_3;
   for (VAR_3 = 0; VAR_1[VAR_3].encoding != VAR_0; VAR_3++)
      if (VAR_1[VAR_3].pixel_format == VAR_2)
         break;
   return VAR_1[VAR_3].encoding;
}

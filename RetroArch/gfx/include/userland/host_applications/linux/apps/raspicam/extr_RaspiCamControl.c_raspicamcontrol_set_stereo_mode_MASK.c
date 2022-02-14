
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int stereo ;
struct TYPE_4__ {int member_1; int member_0; } ;
struct TYPE_5__ {scalar_t__ member_1; scalar_t__ mode; int hdr; int swap_eyes; int decimate; int member_3; int member_2; TYPE_1__ member_0; } ;
typedef int MMAL_PORT_T ;
typedef TYPE_2__ MMAL_PARAMETER_STEREOSCOPIC_MODE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(MMAL_PORT_T *VAR_3, MMAL_PARAMETER_STEREOSCOPIC_MODE_T *VAR_4)
{
   MMAL_PARAMETER_STEREOSCOPIC_MODE_T VAR_5 = { {VAR_1, sizeof(VAR_5)},
      VAR_2, VAR_0, VAR_0
   };
   if (VAR_4->mode != VAR_2)
   {
      VAR_5.mode = VAR_4->mode;
      VAR_5.decimate = VAR_4->decimate;
      VAR_5.swap_eyes = VAR_4->swap_eyes;
   }
   return FUNC_1(FUNC_0(VAR_3, &VAR_5.hdr));
}

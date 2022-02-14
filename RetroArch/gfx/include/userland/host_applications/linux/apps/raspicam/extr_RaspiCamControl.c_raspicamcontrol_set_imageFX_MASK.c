
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int imgFX ;
struct TYPE_7__ {int control; } ;
struct TYPE_5__ {int member_1; int member_0; } ;
struct TYPE_6__ {int hdr; int member_1; TYPE_1__ member_0; } ;
typedef int MMAL_PARAM_IMAGEFX_T ;
typedef TYPE_2__ MMAL_PARAMETER_IMAGEFX_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(MMAL_COMPONENT_T *VAR_1, MMAL_PARAM_IMAGEFX_T VAR_2)
{
   MMAL_PARAMETER_IMAGEFX_T VAR_3 = {{VAR_0,sizeof(VAR_3)}, VAR_2};

   if (!VAR_1)
      return 1;

   return FUNC_1(FUNC_0(VAR_1->control, &VAR_3.hdr));
}

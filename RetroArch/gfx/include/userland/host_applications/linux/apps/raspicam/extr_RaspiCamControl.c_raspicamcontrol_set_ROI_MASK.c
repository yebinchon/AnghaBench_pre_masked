
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int control; } ;
struct TYPE_9__ {int x; int y; int width; int height; } ;
struct TYPE_8__ {int member_1; int member_0; } ;
struct TYPE_11__ {int hdr; TYPE_2__ rect; TYPE_1__ member_0; } ;
struct TYPE_10__ {int x; int y; int w; int h; } ;
typedef TYPE_3__ PARAM_FLOAT_RECT_T ;
typedef TYPE_4__ MMAL_PARAMETER_INPUT_CROP_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(MMAL_COMPONENT_T *VAR_1, PARAM_FLOAT_RECT_T VAR_2)
{
   MMAL_PARAMETER_INPUT_CROP_T VAR_3 = {{VAR_0, sizeof(MMAL_PARAMETER_INPUT_CROP_T)}};

   VAR_3.rect.x = (65536 * VAR_2.x);
   VAR_3.rect.y = (65536 * VAR_2.y);
   VAR_3.rect.width = (65536 * VAR_2.w);
   VAR_3.rect.height = (65536 * VAR_2.h);

   return FUNC_1(FUNC_0(VAR_1->control, &VAR_3.hdr));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hue; int saturation; int center; int exposure; int aspect; int angle; int max_crop; int min_crop; int w; int h; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int hue; int saturation; int center; int exposure; int aspect; int angle; int max; int min; int size; int h; int w; int member_0; } ;
typedef TYPE_2__ load_args ;



load_args FUNC_0(network *VAR_0)
{
    load_args VAR_1 = {0};
    VAR_1.w = VAR_0->w;
    VAR_1.h = VAR_0->h;
    VAR_1.size = VAR_0->w;

    VAR_1.min = VAR_0->min_crop;
    VAR_1.max = VAR_0->max_crop;
    VAR_1.angle = VAR_0->angle;
    VAR_1.aspect = VAR_0->aspect;
    VAR_1.exposure = VAR_0->exposure;
    VAR_1.center = VAR_0->center;
    VAR_1.saturation = VAR_0->saturation;
    VAR_1.hue = VAR_0->hue;
    return VAR_1;
}

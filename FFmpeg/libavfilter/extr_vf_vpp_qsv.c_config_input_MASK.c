
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_9__ {int use_frc; scalar_t__ out_height; scalar_t__ out_width; scalar_t__ crop_x; scalar_t__ crop_y; scalar_t__ crop_w; scalar_t__ crop_h; scalar_t__ use_crop; TYPE_7__ framerate; } ;
typedef TYPE_1__ VPPContext ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {scalar_t__ w; scalar_t__ h; TYPE_7__ frame_rate; TYPE_3__* dst; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_7__,TYPE_7__) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    VPPContext *VAR_3 = VAR_2->priv;
    int VAR_4;

    if (VAR_3->framerate.den == 0 || VAR_3->framerate.num == 0)
        VAR_3->framerate = VAR_1->frame_rate;

    if (FUNC_1(VAR_3->framerate, VAR_1->frame_rate))
        VAR_3->use_frc = 1;

    VAR_4 = FUNC_3(VAR_2);
    if (VAR_4 != 0) {
        FUNC_2(VAR_2, VAR_0, "Fail to eval expr.\n");
        return VAR_4;
    }

    if (VAR_3->out_height == 0 || VAR_3->out_width == 0) {
        VAR_3->out_width = VAR_1->w;
        VAR_3->out_height = VAR_1->h;
    }

    if (VAR_3->use_crop) {
        VAR_3->crop_x = FUNC_0(VAR_3->crop_x, 0);
        VAR_3->crop_y = FUNC_0(VAR_3->crop_y, 0);

        if(VAR_3->crop_w + VAR_3->crop_x > VAR_1->w)
           VAR_3->crop_x = VAR_1->w - VAR_3->crop_w;
        if(VAR_3->crop_h + VAR_3->crop_y > VAR_1->h)
           VAR_3->crop_y = VAR_1->h - VAR_3->crop_h;
    }

    return 0;
}

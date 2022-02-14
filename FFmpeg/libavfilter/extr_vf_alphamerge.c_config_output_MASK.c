
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** inputs; } ;
struct TYPE_5__ {scalar_t__ w; scalar_t__ h; int frame_rate; int sample_aspect_ratio; int time_base; TYPE_2__* src; } ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    AVFilterLink *VAR_4 = VAR_3->inputs[0];
    AVFilterLink *VAR_5 = VAR_3->inputs[1];
    if (VAR_4->w != VAR_5->w || VAR_4->h != VAR_5->h) {
        FUNC_1(VAR_3, VAR_0,
               "Input frame sizes do not match (%dx%d vs %dx%d).\n",
               VAR_4->w, VAR_4->h,
               VAR_5->w, VAR_5->h);
        return FUNC_0(VAR_1);
    }

    VAR_2->w = VAR_4->w;
    VAR_2->h = VAR_4->h;
    VAR_2->time_base = VAR_4->time_base;
    VAR_2->sample_aspect_ratio = VAR_4->sample_aspect_ratio;
    VAR_2->frame_rate = VAR_4->frame_rate;
    return 0;
}

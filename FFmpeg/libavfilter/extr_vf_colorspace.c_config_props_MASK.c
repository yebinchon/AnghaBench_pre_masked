
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int w; int h; int time_base; int sample_aspect_ratio; TYPE_1__* src; int * dst; } ;
struct TYPE_4__ {TYPE_2__** inputs; } ;
typedef TYPE_2__ AVFilterLink ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int,int) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    AVFilterLink *VAR_4 = VAR_2->src->inputs[0];

    if (VAR_4->w % 2 || VAR_4->h % 2) {
        FUNC_0(VAR_3, VAR_1, "Invalid odd size (%dx%d)\n",
               VAR_4->w, VAR_4->h);
        return VAR_0;
    }

    VAR_2->w = VAR_4->w;
    VAR_2->h = VAR_4->h;
    VAR_2->sample_aspect_ratio = VAR_4->sample_aspect_ratio;
    VAR_2->time_base = VAR_4->time_base;

    return 0;
}

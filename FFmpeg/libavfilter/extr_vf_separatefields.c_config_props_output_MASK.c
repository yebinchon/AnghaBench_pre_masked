
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__** inputs; TYPE_3__* priv; } ;
struct TYPE_9__ {int num; int den; } ;
struct TYPE_8__ {int den; int num; } ;
struct TYPE_11__ {int h; int w; TYPE_2__ frame_rate; TYPE_1__ time_base; int format; TYPE_5__* src; } ;
struct TYPE_10__ {int nb_planes; } ;
typedef TYPE_3__ SeparateFieldsContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    SeparateFieldsContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->inputs[0];

    VAR_4->nb_planes = FUNC_1(VAR_5->format);

    if (VAR_5->h & 1) {
        FUNC_0(VAR_3, VAR_1, "height must be even\n");
        return VAR_0;
    }

    VAR_2->time_base.num = VAR_5->time_base.num;
    VAR_2->time_base.den = VAR_5->time_base.den * 2;
    VAR_2->frame_rate.num = VAR_5->frame_rate.num * 2;
    VAR_2->frame_rate.den = VAR_5->frame_rate.den;
    VAR_2->w = VAR_5->w;
    VAR_2->h = VAR_5->h / 2;

    return 0;
}

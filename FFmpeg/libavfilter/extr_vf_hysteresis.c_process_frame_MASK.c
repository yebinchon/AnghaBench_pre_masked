
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_23__ {scalar_t__ is_disabled; TYPE_4__** outputs; } ;
struct TYPE_22__ {int time_base; int h; int w; } ;
struct TYPE_21__ {int* linesize; int pts; scalar_t__* data; } ;
struct TYPE_20__ {TYPE_1__* opaque; TYPE_5__* parent; } ;
struct TYPE_18__ {int time_base; int pts; } ;
struct TYPE_19__ {int nb_planes; int planes; int* width; int* height; int index; TYPE_10__ fs; int (* hysteresis ) (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int,int,int,int,int) ;scalar_t__ xy; scalar_t__ map; } ;
typedef TYPE_1__ HysteresisContext ;
typedef TYPE_2__ FFFrameSync ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (scalar_t__,int,scalar_t__,int,int,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_10__*,int,TYPE_3__**,int ) ;
 TYPE_3__* FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_10(FFFrameSync *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->parent;
    HysteresisContext *VAR_3 = VAR_1->opaque;
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    AVFrame *VAR_5, *VAR_6, *VAR_7;
    int VAR_8;

    if ((VAR_8 = FUNC_6(&VAR_3->fs, 0, &VAR_6, 0)) < 0 ||
        (VAR_8 = FUNC_6(&VAR_3->fs, 1, &VAR_7, 0)) < 0)
        return VAR_8;

    if (VAR_2->is_disabled) {
        VAR_5 = FUNC_1(VAR_6);
        if (!VAR_5)
            return FUNC_0(VAR_0);
    } else {
        int VAR_9;

        VAR_5 = FUNC_7(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_5)
            return FUNC_0(VAR_0);
        FUNC_2(VAR_5, VAR_6);

        for (VAR_9 = 0; VAR_9 < VAR_3->nb_planes; VAR_9++) {
            if (!((1 << VAR_9) & VAR_3->planes)) {
                FUNC_3(VAR_5->data[VAR_9], VAR_5->linesize[VAR_9], VAR_6->data[VAR_9], VAR_6->linesize[VAR_9],
                                    VAR_3->width[VAR_9], VAR_3->height[VAR_9]);
                continue;
            } else {
                int VAR_10;

                for (VAR_10 = 0; VAR_10 < VAR_3->height[VAR_9]; VAR_10++) {
                    FUNC_8(VAR_5->data[VAR_9] + VAR_10 * VAR_5->linesize[VAR_9], 0, VAR_3->width[VAR_9]);
                }
            }

            VAR_3->index = -1;
            FUNC_8(VAR_3->map, 0, VAR_3->width[0] * VAR_3->height[0]);
            FUNC_8(VAR_3->xy, 0, VAR_3->width[0] * VAR_3->height[0] * 4);

            VAR_3->hysteresis(VAR_3, VAR_6->data[VAR_9], VAR_7->data[VAR_9],
                          VAR_5->data[VAR_9],
                          VAR_6->linesize[VAR_9], VAR_7->linesize[VAR_9],
                          VAR_5->linesize[VAR_9],
                          VAR_3->width[VAR_9], VAR_3->height[VAR_9]);
        }
    }
    VAR_5->pts = FUNC_4(VAR_3->fs.pts, VAR_3->fs.time_base, VAR_4->time_base);

    return FUNC_5(VAR_4, VAR_5);
}

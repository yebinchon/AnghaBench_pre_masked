
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int text ;
struct TYPE_19__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_18__ {int frame_count_in; int h; TYPE_4__* dst; } ;
struct TYPE_17__ {int linesize; int data; int height; int width; } ;
struct TYPE_16__ {int nb_values; int width; int height; int statistics; int nb_comps; int components; size_t* rgba_map; scalar_t__ oy; scalar_t__ ox; int white; int draw; scalar_t__ is_rgb; TYPE_14__* values; int (* draw_trace ) (TYPE_1__*,TYPE_2__*) ;int gray; scalar_t__ grid; int dark; int y2; int x2; int y1; int x1; } ;
struct TYPE_15__ {scalar_t__* p; } ;
typedef TYPE_1__ OscilloscopeContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int ,TYPE_2__*,TYPE_14__*,int) ;
 int FUNC_4 (int *,TYPE_2__*,int *,scalar_t__,scalar_t__,char*,int ) ;
 int FUNC_5 (int *,int *,int ,int ,int ,int ,scalar_t__,scalar_t__,int,int) ;
 int FUNC_6 (int *,int *,int ,int ,scalar_t__,scalar_t__,int,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (char*,int,char*,char const,float,int,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    OscilloscopeContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    float VAR_6[4] = { 0 };
    int VAR_7[4] = { 0 };
    int VAR_8[4] = { VAR_0, VAR_0, VAR_0, VAR_0 };
    int VAR_9, VAR_10;

    VAR_4->nb_values = 0;
    FUNC_3(VAR_4, VAR_4->x1, VAR_4->y1, VAR_4->x2, VAR_4->y2, VAR_2, VAR_4->values, VAR_1->frame_count_in & 1);
    FUNC_5(&VAR_4->draw, &VAR_4->dark, VAR_2->data, VAR_2->linesize,
                       VAR_2->width, VAR_2->height,
                       VAR_4->ox, VAR_4->oy, VAR_4->width, VAR_4->height + 20 * VAR_4->statistics);

    if (VAR_4->grid && VAR_5->h >= 10) {
        FUNC_6(&VAR_4->draw, &VAR_4->gray, VAR_2->data, VAR_2->linesize,
                          VAR_4->ox, VAR_4->oy, VAR_4->width - 1, 1);

        for (VAR_9 = 1; VAR_9 < 5; VAR_9++) {
            FUNC_6(&VAR_4->draw, &VAR_4->gray, VAR_2->data, VAR_2->linesize,
                              VAR_4->ox, VAR_4->oy + VAR_9 * (VAR_4->height - 1) / 4, VAR_4->width, 1);
        }

        for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
            FUNC_6(&VAR_4->draw, &VAR_4->gray, VAR_2->data, VAR_2->linesize,
                              VAR_4->ox + VAR_9 * (VAR_4->width - 1) / 10, VAR_4->oy, 1, VAR_4->height);
        }

        FUNC_6(&VAR_4->draw, &VAR_4->gray, VAR_2->data, VAR_2->linesize,
                          VAR_4->ox + VAR_4->width - 1, VAR_4->oy, 1, VAR_4->height);
    }

    VAR_4->draw_trace(VAR_4, VAR_2);

    for (VAR_9 = 0; VAR_9 < VAR_4->nb_values; VAR_9++) {
        for (VAR_10 = 0; VAR_10 < VAR_4->nb_comps; VAR_10++) {
            if ((1 << VAR_10) & VAR_4->components) {
                VAR_7[VAR_10] = FUNC_0(VAR_7[VAR_10], VAR_4->values[VAR_9].p[VAR_4->rgba_map[VAR_10]]);
                VAR_8[VAR_10] = FUNC_1(VAR_8[VAR_10], VAR_4->values[VAR_9].p[VAR_4->rgba_map[VAR_10]]);
                VAR_6[VAR_10] += VAR_4->values[VAR_9].p[VAR_4->rgba_map[VAR_10]];
            }
        }
    }
    for (VAR_10 = 0; VAR_10 < VAR_4->nb_comps; VAR_10++) {
        VAR_6[VAR_10] /= VAR_4->nb_values;
    }

    if (VAR_4->statistics && VAR_4->height > 10 && VAR_4->width > 280 * FUNC_2(VAR_4->components)) {
        for (VAR_10 = 0, VAR_9 = 0; VAR_10 < VAR_4->nb_comps; VAR_10++) {
            if ((1 << VAR_10) & VAR_4->components) {
                const char VAR_11[4] = { 'R', 'G', 'B', 'A' };
                const char VAR_12[4] = { 'Y', 'U', 'V', 'A' };
                char VAR_13[128];

                FUNC_8(VAR_13, sizeof(VAR_13), "%c avg:%.1f min:%d max:%d\n", VAR_4->is_rgb ? VAR_11[VAR_10] : VAR_12[VAR_10], VAR_6[VAR_10], VAR_8[VAR_10], VAR_7[VAR_10]);
                FUNC_4(&VAR_4->draw, VAR_2, &VAR_4->white, VAR_4->ox + 2 + 280 * VAR_9++, VAR_4->oy + VAR_4->height + 4, VAR_13, 0);
            }
        }
    }

    return FUNC_7(VAR_5, VAR_2);
}

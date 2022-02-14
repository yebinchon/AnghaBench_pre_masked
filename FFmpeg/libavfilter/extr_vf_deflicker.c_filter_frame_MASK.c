
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_18__ ;


typedef int value ;
typedef int uint8_t ;
struct TYPE_31__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_30__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_29__ {int * metadata; int * linesize; int * data; } ;
struct TYPE_27__ {int available; } ;
struct TYPE_28__ {int size; float* luminance; size_t available; float (* calc_avgy ) (TYPE_4__*,TYPE_2__*) ;int bypass; int nb_planes; int* planewidth; int depth; TYPE_18__ q; int * planeheight; int (* deflicker ) (TYPE_4__*,int ,int ,int ,int ,int ,int ,float) ;int (* get_factor ) (TYPE_4__*,float*) ;int eof; } ;
typedef TYPE_1__ DeflickerContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,char*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (int ,int ,int ,int ,int,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_18__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_18__*) ;
 TYPE_2__* FUNC_7 (TYPE_18__*,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 (float*,float*,int) ;
 int FUNC_11 (int *,int,char*,float) ;
 float FUNC_12 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_13 (TYPE_4__*,float*) ;
 int FUNC_14 (TYPE_4__*,int ,int ,int ,int ,int ,int ,float) ;
 float FUNC_15 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    DeflickerContext *VAR_5 = VAR_3->priv;
    AVDictionary **VAR_6;
    AVFrame *VAR_7, *VAR_8;
    float VAR_9;
    int VAR_10;

    if (VAR_5->q.available < VAR_5->size && !VAR_5->eof) {
        VAR_5->luminance[VAR_5->available] = VAR_5->calc_avgy(VAR_3, VAR_2);
        FUNC_5(VAR_3, &VAR_5->q, VAR_2);
        VAR_5->available++;
        return 0;
    }

    VAR_8 = FUNC_7(&VAR_5->q, 0);

    VAR_7 = FUNC_9(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_7) {
        FUNC_3(&VAR_2);
        return FUNC_0(VAR_0);
    }

    VAR_5->get_factor(VAR_3, &VAR_9);
    if (!VAR_5->bypass)
        VAR_5->deflicker(VAR_3, VAR_8->data[0], VAR_8->linesize[0], VAR_7->data[0], VAR_7->linesize[0],
                     VAR_4->w, VAR_4->h, VAR_9);
    for (VAR_10 = 1 - VAR_5->bypass; VAR_10 < VAR_5->nb_planes; VAR_10++) {
        FUNC_4(VAR_7->data[VAR_10], VAR_7->linesize[VAR_10],
                            VAR_8->data[VAR_10], VAR_8->linesize[VAR_10],
                            VAR_5->planewidth[VAR_10] * (1 + (VAR_5->depth > 8)), VAR_5->planeheight[VAR_10]);
    }

    FUNC_2(VAR_7, VAR_8);
    VAR_6 = &VAR_7->metadata;
    if (VAR_6) {
        uint8_t VAR_11[128];

        FUNC_11(VAR_11, sizeof(VAR_11), "%f", VAR_5->luminance[0]);
        FUNC_1(VAR_6, "lavfi.deflicker.luminance", VAR_11, 0);

        FUNC_11(VAR_11, sizeof(VAR_11), "%f", VAR_5->luminance[0] * VAR_9);
        FUNC_1(VAR_6, "lavfi.deflicker.new_luminance", VAR_11, 0);

        FUNC_11(VAR_11, sizeof(VAR_11), "%f", VAR_9 - 1.0f);
        FUNC_1(VAR_6, "lavfi.deflicker.relative_change", VAR_11, 0);
    }

    VAR_8 = FUNC_6(&VAR_5->q);
    FUNC_3(&VAR_8);
    FUNC_10(&VAR_5->luminance[0], &VAR_5->luminance[1], sizeof(*VAR_5->luminance) * (VAR_5->size - 1));
    VAR_5->luminance[VAR_5->available - 1] = VAR_5->calc_avgy(VAR_3, VAR_2);
    FUNC_5(VAR_3, &VAR_5->q, VAR_2);

    return FUNC_8(VAR_4, VAR_7);
}

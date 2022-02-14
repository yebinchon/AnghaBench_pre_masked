
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int shuffled_linesize ;
typedef int shuffled_data ;
struct TYPE_17__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_16__ {TYPE_4__* dst; } ;
struct TYPE_15__ {int* linesize; int height; int width; int ** data; } ;
struct TYPE_14__ {int planes; size_t* map; scalar_t__ copy; } ;
typedef TYPE_1__ ShufflePlanesContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int*,int*,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    ShufflePlanesContext *VAR_4 = VAR_3->priv;
    uint8_t *VAR_5[4] = { ((void*)0) };
    int VAR_6[4] = { 0 };
    int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_4->planes; VAR_7++) {
        VAR_5[VAR_7] = VAR_2->data[VAR_4->map[VAR_7]];
        VAR_6[VAR_7] = VAR_2->linesize[VAR_4->map[VAR_7]];
    }
    FUNC_6(*VAR_2->data, VAR_5, sizeof(VAR_5));
    FUNC_6(VAR_2->linesize, VAR_6, sizeof(VAR_6));

    if (VAR_4->copy) {
        AVFrame *VAR_9 = FUNC_5(VAR_3->outputs[0], VAR_2->width, VAR_2->height);

        if (!VAR_9) {
            VAR_8 = FUNC_0(VAR_0);
            goto fail;
        }

        FUNC_1(VAR_9, VAR_2);

        VAR_8 = FUNC_2(VAR_9, VAR_2);
        if (VAR_8 < 0) {
            FUNC_3(&VAR_9);
            goto fail;
        }

        FUNC_3(&VAR_2);
        VAR_2 = VAR_9;
    }

    return FUNC_4(VAR_3->outputs[0], VAR_2);
fail:
    FUNC_3(&VAR_2);
    return VAR_8;
}

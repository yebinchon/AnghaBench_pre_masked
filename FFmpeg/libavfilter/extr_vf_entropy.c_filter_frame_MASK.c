
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint16_t ;
typedef int metabuf ;
typedef int key ;
struct TYPE_12__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_11__ {TYPE_4__* dst; } ;
struct TYPE_10__ {size_t** data; int* linesize; int metadata; } ;
struct TYPE_9__ {int nb_planes; int* rgba_map; float* planewidth; float* planeheight; float* histogram; int depth; scalar_t__ mode; int* planenames; scalar_t__ is_rgb; } ;
typedef TYPE_1__ EntropyContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 float FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 float FUNC_3 (int) ;
 int FUNC_4 (float*,int ,int) ;
 int FUNC_5 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    AVFilterLink *VAR_3 = VAR_2->outputs[0];
    EntropyContext *VAR_4 = VAR_2->priv;
    int VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_4->nb_planes; VAR_5++) {
        int VAR_8 = VAR_4->is_rgb ? VAR_4->rgba_map[VAR_5] : VAR_5;
        const uint8_t *VAR_9 = VAR_1->data[VAR_5];
        const uint16_t *VAR_10 = (const uint16_t *)VAR_1->data[VAR_5];
        float VAR_11 = VAR_4->planewidth[VAR_5] * VAR_4->planeheight[VAR_5];
        float VAR_12 = 0;
        char VAR_13[128];
        char VAR_14[128];

        FUNC_4(VAR_4->histogram, 0, (1 << VAR_4->depth) * sizeof(*VAR_4->histogram));

        if (VAR_4->depth <= 8) {
            for (VAR_6 = 0; VAR_6 < VAR_4->planeheight[VAR_5]; VAR_6++) {
                for (VAR_7 = 0; VAR_7 < VAR_4->planewidth[VAR_5]; VAR_7++) {
                    VAR_4->histogram[VAR_9[VAR_7]]++;
                }

                VAR_9 += VAR_1->linesize[VAR_5];
            }
        } else {
            for (VAR_6 = 0; VAR_6 < VAR_4->planeheight[VAR_5]; VAR_6++) {
                for (VAR_7 = 0; VAR_7 < VAR_4->planewidth[VAR_5]; VAR_7++) {
                    VAR_4->histogram[VAR_10[VAR_7]]++;
                }

                VAR_10 += VAR_1->linesize[VAR_5] / 2;
            }
        }

        for (VAR_6 = 0; VAR_6 < 1 << VAR_4->depth; VAR_6++) {
            if (VAR_4->mode == 0) {
                if (VAR_4->histogram[VAR_6]) {
                    float VAR_15 = VAR_4->histogram[VAR_6] / VAR_11;
                    VAR_12 += -FUNC_3(VAR_15) * VAR_15;
                }
            } else if (VAR_4->mode == 1) {
                if (VAR_6 && (VAR_4->histogram[VAR_6] - VAR_4->histogram[VAR_6 - 1]) != 0) {
                    float VAR_16 = FUNC_0(VAR_4->histogram[VAR_6] - VAR_4->histogram[VAR_6 - 1]) / VAR_11;
                    VAR_12 += -FUNC_3(VAR_16) * VAR_16;
                }
            }
        }

        FUNC_5(VAR_14, sizeof(VAR_14), "lavfi.entropy.entropy.%s.%c", VAR_4->mode ? "diff" : "normal", VAR_4->planenames[VAR_8]);
        FUNC_5(VAR_13, sizeof(VAR_13), "%f", VAR_12);
        FUNC_1(&VAR_1->metadata, VAR_14, VAR_13, 0);
        FUNC_5(VAR_14, sizeof(VAR_14), "lavfi.entropy.normalized_entropy.%s.%c", VAR_4->mode ? "diff" : "normal", VAR_4->planenames[VAR_8]);
        FUNC_5(VAR_13, sizeof(VAR_13), "%f", VAR_12 / FUNC_3(1 << VAR_4->depth));
        FUNC_1(&VAR_1->metadata, VAR_14, VAR_13, 0);
    }

    return FUNC_2(VAR_3, VAR_1);
}

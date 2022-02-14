
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int64_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {size_t** data; int * linesize; } ;
struct TYPE_6__ {int* histogram; int depth; int* planeheight; int* planewidth; } ;
typedef TYPE_1__ DeflickerContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static float FUNC_1(AVFilterContext *VAR_0, AVFrame *VAR_1)
{
    DeflickerContext *VAR_2 = VAR_0->priv;
    const uint8_t *VAR_3 = VAR_1->data[0];
    int64_t VAR_4 = 0;
    int VAR_5, VAR_6;

    FUNC_0(VAR_2->histogram, 0, (1 << VAR_2->depth) * sizeof(*VAR_2->histogram));

    for (VAR_5 = 0; VAR_5 < VAR_2->planeheight[0]; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_2->planewidth[0]; VAR_6++) {
            VAR_2->histogram[VAR_3[VAR_6]]++;
        }
        VAR_3 += VAR_1->linesize[0];
    }

    for (VAR_5 = 0; VAR_5 < 1 << VAR_2->depth; VAR_5++) {
        VAR_4 += VAR_2->histogram[VAR_5] * VAR_5;
    }

    return 1.0f * VAR_4 / (VAR_2->planeheight[0] * VAR_2->planewidth[0]);
}

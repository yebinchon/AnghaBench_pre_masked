
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {size_t n; size_t n_frames; TYPE_1__* frames; } ;
typedef TYPE_2__ ThumbContext ;
struct TYPE_14__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
struct TYPE_13__ {int h; int w; TYPE_5__* dst; } ;
struct TYPE_12__ {int** data; int * linesize; } ;
struct TYPE_10__ {int* histogram; TYPE_3__* buf; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    int VAR_2, VAR_3;
    AVFilterContext *VAR_4 = VAR_0->dst;
    ThumbContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    int *VAR_7 = VAR_5->frames[VAR_5->n].histogram;
    const uint8_t *VAR_8 = VAR_1->data[0];


    VAR_5->frames[VAR_5->n].buf = VAR_1;


    for (VAR_3 = 0; VAR_3 < VAR_0->h; VAR_3++) {
        for (VAR_2 = 0; VAR_2 < VAR_0->w; VAR_2++) {
            VAR_7[0*256 + VAR_8[VAR_2*3 ]]++;
            VAR_7[1*256 + VAR_8[VAR_2*3 + 1]]++;
            VAR_7[2*256 + VAR_8[VAR_2*3 + 2]]++;
        }
        VAR_8 += VAR_1->linesize[0];
    }


    VAR_5->n++;
    if (VAR_5->n < VAR_5->n_frames)
        return 0;

    return FUNC_0(VAR_6, FUNC_1(VAR_4));
}

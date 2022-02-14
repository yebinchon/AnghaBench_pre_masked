
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_13__ {TYPE_4__* dst; TYPE_3__* f2; TYPE_2__* f1; TYPE_1__* src; } ;
typedef TYPE_5__ ThreadData ;
struct TYPE_15__ {TYPE_6__* priv; } ;
struct TYPE_14__ {int nb_planes; int* planewidth; int* planeheight; int planes; int (* maskedminmax ) (int const*,int *,int const*,int const*,int const) ;int * linesize; } ;
struct TYPE_12__ {int* linesize; int ** data; } ;
struct TYPE_11__ {int* linesize; int ** data; } ;
struct TYPE_10__ {int* linesize; int ** data; } ;
struct TYPE_9__ {int* linesize; int ** data; } ;
typedef TYPE_6__ MaskedMinMaxContext ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int *,int const,int const*,int const,int ,int const) ;
 int FUNC_1 (int const*,int *,int const*,int const*,int const) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    MaskedMinMaxContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;

    for (int VAR_6 = 0; VAR_6 < VAR_4->nb_planes; VAR_6++) {
        const ptrdiff_t VAR_7 = VAR_5->src->linesize[VAR_6];
        const ptrdiff_t VAR_8 = VAR_5->f1->linesize[VAR_6];
        const ptrdiff_t VAR_9 = VAR_5->f2->linesize[VAR_6];
        const ptrdiff_t VAR_10 = VAR_5->dst->linesize[VAR_6];
        const int VAR_11 = VAR_4->planewidth[VAR_6];
        const int VAR_12 = VAR_4->planeheight[VAR_6];
        const int VAR_13 = (VAR_12 * VAR_2) / VAR_3;
        const int VAR_14 = (VAR_12 * (VAR_2+1)) / VAR_3;
        const uint8_t *VAR_15 = VAR_5->src->data[VAR_6] + VAR_13 * VAR_7;
        const uint8_t *VAR_16 = VAR_5->f1->data[VAR_6] + VAR_13 * VAR_8;
        const uint8_t *VAR_17 = VAR_5->f2->data[VAR_6] + VAR_13 * VAR_9;
        uint8_t *VAR_18 = VAR_5->dst->data[VAR_6] + VAR_13 * VAR_10;

        if (!((1 << VAR_6) & VAR_4->planes)) {
            FUNC_0(VAR_18, VAR_10, VAR_15, VAR_7,
                                VAR_4->linesize[VAR_6], VAR_14 - VAR_13);
            continue;
        }

        for (int VAR_19 = VAR_13; VAR_19 < VAR_14; VAR_19++) {
            VAR_4->maskedminmax(VAR_15, VAR_18, VAR_16, VAR_17, VAR_11);

            VAR_18 += VAR_10;
            VAR_15 += VAR_7;
            VAR_16 += VAR_8;
            VAR_17 += VAR_9;
        }
    }

    return 0;
}

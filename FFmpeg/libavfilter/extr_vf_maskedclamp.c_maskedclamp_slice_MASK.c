
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_15__ {TYPE_4__* d; TYPE_3__* m; TYPE_2__* o; TYPE_1__* b; } ;
typedef TYPE_6__ ThreadData ;
struct TYPE_17__ {TYPE_7__* priv; } ;
struct TYPE_14__ {int (* maskedclamp ) (int const*,int *,int const*,int const*,int const,int const,int const) ;} ;
struct TYPE_16__ {int nb_planes; int* width; int* height; int undershoot; int overshoot; int planes; TYPE_5__ dsp; int * linesize; } ;
struct TYPE_13__ {int* linesize; int ** data; } ;
struct TYPE_12__ {int* linesize; int ** data; } ;
struct TYPE_11__ {int* linesize; int ** data; } ;
struct TYPE_10__ {int* linesize; int ** data; } ;
typedef TYPE_7__ MaskedClampContext ;
typedef TYPE_8__ AVFilterContext ;


 int FUNC_0 (int *,int const,int const*,int const,int ,int const) ;
 int FUNC_1 (int const*,int *,int const*,int const*,int const,int const,int const) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    MaskedClampContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_4->nb_planes; VAR_6++) {
        const ptrdiff_t VAR_7 = VAR_5->b->linesize[VAR_6];
        const ptrdiff_t VAR_8 = VAR_5->m->linesize[VAR_6];
        const ptrdiff_t VAR_9 = VAR_5->o->linesize[VAR_6];
        const ptrdiff_t VAR_10 = VAR_5->d->linesize[VAR_6];
        const int VAR_11 = VAR_4->width[VAR_6];
        const int VAR_12 = VAR_4->height[VAR_6];
        const int VAR_13 = (VAR_12 * VAR_2) / VAR_3;
        const int VAR_14 = (VAR_12 * (VAR_2+1)) / VAR_3;
        const uint8_t *VAR_15 = VAR_5->b->data[VAR_6] + VAR_13 * VAR_7;
        const uint8_t *VAR_16 = VAR_5->o->data[VAR_6] + VAR_13 * VAR_9;
        const uint8_t *VAR_17 = VAR_5->m->data[VAR_6] + VAR_13 * VAR_8;
        uint8_t *VAR_18 = VAR_5->d->data[VAR_6] + VAR_13 * VAR_10;
        const int VAR_19 = VAR_4->undershoot;
        const int VAR_20 = VAR_4->overshoot;
        int VAR_21;

        if (!((1 << VAR_6) & VAR_4->planes)) {
            FUNC_0(VAR_18, VAR_10, VAR_15, VAR_7,
                                VAR_4->linesize[VAR_6], VAR_14 - VAR_13);
            continue;
        }

        for (VAR_21 = VAR_13; VAR_21 < VAR_14; VAR_21++) {
            VAR_4->dsp.maskedclamp(VAR_15, VAR_18, VAR_16, VAR_17, VAR_11, VAR_19, VAR_20);

            VAR_18 += VAR_10;
            VAR_15 += VAR_7;
            VAR_16 += VAR_9;
            VAR_17 += VAR_8;
        }
    }

    return 0;
}

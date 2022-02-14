
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_7__ {int (* filter_row ) (int const*,int *,int const**,int const,int const,int const,int const,int const) ;} ;
struct TYPE_11__ {int size; int mid; int nb_planes; int* planeheight; int* planewidth; int* thra; int* thrb; int planes; TYPE_1__ dsp; scalar_t__* linesize; scalar_t__* data; } ;
struct TYPE_10__ {TYPE_5__* priv; } ;
struct TYPE_9__ {int const* linesize; int ** data; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;
typedef TYPE_5__ ATADenoiseContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int const,int const*,int const,int const,int const) ;
 int FUNC_1 (int const*,int *,int const**,int const,int const,int const,int const,int const) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
    ATADenoiseContext *VAR_5 = VAR_1->priv;
    ThreadData *VAR_6 = VAR_2;
    AVFrame *VAR_7 = VAR_6->in;
    AVFrame *VAR_8 = VAR_6->out;
    const int VAR_9 = VAR_5->size;
    const int VAR_10 = VAR_5->mid;
    int VAR_11, VAR_12, VAR_13;

    for (VAR_11 = 0; VAR_11 < VAR_5->nb_planes; VAR_11++) {
        const int VAR_14 = VAR_5->planeheight[VAR_11];
        const int VAR_15 = VAR_5->planewidth[VAR_11];
        const int VAR_16 = (VAR_14 * VAR_3) / VAR_4;
        const int VAR_17 = (VAR_14 * (VAR_3+1)) / VAR_4;
        const uint8_t *VAR_18 = VAR_7->data[VAR_11] + VAR_16 * VAR_7->linesize[VAR_11];
        uint8_t *VAR_19 = VAR_8->data[VAR_11] + VAR_16 * VAR_8->linesize[VAR_11];
        const int VAR_20 = VAR_5->thra[VAR_11];
        const int VAR_21 = VAR_5->thrb[VAR_11];
        const uint8_t **VAR_22 = (const uint8_t **)VAR_5->data[VAR_11];
        const int *VAR_23 = (const int *)VAR_5->linesize[VAR_11];
        const uint8_t *VAR_24[VAR_0];

        if (!((1 << VAR_11) & VAR_5->planes)) {
            FUNC_0(VAR_19, VAR_8->linesize[VAR_11], VAR_18, VAR_7->linesize[VAR_11],
                                VAR_15, VAR_17 - VAR_16);
            continue;
        }

        for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
            VAR_24[VAR_13] = VAR_22[VAR_13] + VAR_16 * VAR_23[VAR_13];

        for (VAR_12 = VAR_16; VAR_12 < VAR_17; VAR_12++) {
            VAR_5->dsp.filter_row(VAR_18, VAR_19, VAR_24, VAR_15, VAR_10, VAR_9, VAR_20, VAR_21);

            VAR_19 += VAR_8->linesize[VAR_11];
            VAR_18 += VAR_7->linesize[VAR_11];

            for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
                VAR_24[VAR_13] += VAR_23[VAR_13];
        }
    }

    return 0;
}

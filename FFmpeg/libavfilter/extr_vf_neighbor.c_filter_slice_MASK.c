
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_3__* in; TYPE_3__* out; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int* linesize; int ** data; } ;
struct TYPE_7__ {int nb_planes; int bpc; int* threshold; int* planeheight; int* planewidth; int max; int coordinates; int (* filter ) (int *,int const*,int,int const,int const**,int ,int ) ;} ;
typedef TYPE_2__ NContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int *,int const,int const*,int const,int const,int const) ;
 int FUNC_1 (int *,int const*,int,int const,int const**,int ,int ) ;
 int FUNC_2 (int *,int const*,int const,int const,int const**,int ,int ) ;
 int FUNC_3 (int *,int const*,int,int const,int const**,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    NContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->out;
    AVFrame *VAR_7 = VAR_5->in;
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_4->nb_planes; VAR_8++) {
        const int VAR_10 = VAR_4->bpc;
        const int VAR_11 = VAR_4->threshold[VAR_8];
        const int VAR_12 = VAR_7->linesize[VAR_8];
        const int VAR_13 = VAR_6->linesize[VAR_8];
        const int VAR_14 = VAR_4->planeheight[VAR_8];
        const int VAR_15 = VAR_4->planewidth[VAR_8];
        const int VAR_16 = (VAR_14 * VAR_2) / VAR_3;
        const int VAR_17 = (VAR_14 * (VAR_2+1)) / VAR_3;
        const uint8_t *VAR_18 = (const uint8_t *)VAR_7->data[VAR_8] + VAR_16 * VAR_12;
        uint8_t *VAR_19 = VAR_6->data[VAR_8] + VAR_16 * VAR_13;

        if (!VAR_11) {
            FUNC_0(VAR_19, VAR_13, VAR_18, VAR_12, VAR_15 * VAR_10, VAR_17 - VAR_16);
            continue;
        }

        for (VAR_9 = VAR_16; VAR_9 < VAR_17; VAR_9++) {
            const int VAR_20 = VAR_9 > 0;
            const int VAR_21 = VAR_9 < VAR_14 - 1;
            const uint8_t *VAR_22[] = { VAR_18 - VAR_20 * VAR_12, VAR_18 + 1 * VAR_10 - VAR_20 * VAR_12, VAR_18 + 2 * VAR_10 - VAR_20 * VAR_12,
                                             VAR_18, VAR_18 + 2 * VAR_10,
                                             VAR_18 + VAR_21 * VAR_12, VAR_18 + 1 * VAR_10 + VAR_21 * VAR_12, VAR_18 + 2 * VAR_10 + VAR_21 * VAR_12};

            const uint8_t *VAR_23[] = { VAR_18 + 1 * VAR_10 - VAR_20 * VAR_12, VAR_18 - VAR_20 * VAR_12, VAR_18 + 1 * VAR_10 - VAR_20 * VAR_12,
                                               VAR_18 + 1 * VAR_10, VAR_18 + 1 * VAR_10,
                                               VAR_18 + 1 * VAR_10 + VAR_21 * VAR_12, VAR_18 + VAR_21 * VAR_12, VAR_18 + 1 * VAR_10 + VAR_21 * VAR_12};

            const uint8_t *VAR_24[] = { VAR_18 + (VAR_15 - 2) * VAR_10 - VAR_20 * VAR_12, VAR_18 + (VAR_15 - 1) * VAR_10 - VAR_20 * VAR_12, VAR_18 + (VAR_15 - 2) * VAR_10 - VAR_20 * VAR_12,
                                               VAR_18 + (VAR_15 - 2) * VAR_10, VAR_18 + (VAR_15 - 2) * VAR_10,
                                               VAR_18 + (VAR_15 - 2) * VAR_10 + VAR_21 * VAR_12, VAR_18 + (VAR_15 - 1) * VAR_10 + VAR_21 * VAR_12, VAR_18 + (VAR_15 - 2) * VAR_10 + VAR_21 * VAR_12};

            VAR_4->filter(VAR_19, VAR_18, 1, VAR_11, VAR_23, VAR_4->coordinates, VAR_4->max);
            if (VAR_15 > 1) {
                VAR_4->filter(VAR_19 + 1 * VAR_10, VAR_18 + 1 * VAR_10, VAR_15 - 2, VAR_11, VAR_22, VAR_4->coordinates, VAR_4->max);
                VAR_4->filter(VAR_19 + (VAR_15 - 1) * VAR_10, VAR_18 + (VAR_15 - 1) * VAR_10, 1, VAR_11, VAR_24, VAR_4->coordinates, VAR_4->max);
            }

            VAR_18 += VAR_12;
            VAR_19 += VAR_13;
        }
    }

    return 0;
}


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
struct TYPE_7__ {int (* transpose_block ) (int *,int,int *,int,int,int) ;int (* transpose_8x8 ) (int *,int,int *,int) ;} ;
typedef TYPE_1__ TransVtable ;
struct TYPE_8__ {int planes; int hsub; int vsub; int* pixsteps; int dir; TYPE_1__* vtables; } ;
typedef TYPE_2__ TransContext ;
struct TYPE_9__ {TYPE_4__* in; TYPE_4__* out; } ;
typedef TYPE_3__ ThreadData ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {int* linesize; int ** data; int height; int width; } ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (int *,int,int *,int,int,int) ;
 int FUNC_3 (int *,int,int *,int,int,int) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0, void *VAR_1, int VAR_2,
                        int VAR_3)
{
    TransContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->out;
    AVFrame *VAR_7 = VAR_5->in;
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_4->planes; VAR_8++) {
        int VAR_9 = VAR_8 == 1 || VAR_8 == 2 ? VAR_4->hsub : 0;
        int VAR_10 = VAR_8 == 1 || VAR_8 == 2 ? VAR_4->vsub : 0;
        int VAR_11 = VAR_4->pixsteps[VAR_8];
        int VAR_12 = FUNC_0(VAR_7->height, VAR_10);
        int VAR_13 = FUNC_0(VAR_6->width, VAR_9);
        int VAR_14 = FUNC_0(VAR_6->height, VAR_10);
        int VAR_15 = (VAR_14 * VAR_2 ) / VAR_3;
        int VAR_16 = (VAR_14 * (VAR_2+1)) / VAR_3;
        uint8_t *VAR_17, *VAR_18;
        int VAR_19, VAR_20;
        int VAR_21, VAR_22;
        TransVtable *VAR_23 = &VAR_4->vtables[VAR_8];

        VAR_19 = VAR_6->linesize[VAR_8];
        VAR_17 = VAR_6->data[VAR_8] + VAR_15 * VAR_19;
        VAR_18 = VAR_7->data[VAR_8];
        VAR_20 = VAR_7->linesize[VAR_8];

        if (VAR_4->dir & 1) {
            VAR_18 += VAR_7->linesize[VAR_8] * (VAR_12 - 1);
            VAR_20 *= -1;
        }

        if (VAR_4->dir & 2) {
            VAR_17 = VAR_6->data[VAR_8] + VAR_19 * (VAR_14 - VAR_15 - 1);
            VAR_19 *= -1;
        }

        for (VAR_22 = VAR_15; VAR_22 < VAR_16 - 7; VAR_22 += 8) {
            for (VAR_21 = 0; VAR_21 < VAR_13 - 7; VAR_21 += 8) {
                VAR_23->transpose_8x8(VAR_18 + VAR_21 * VAR_20 + VAR_22 * VAR_11,
                                 VAR_20,
                                 VAR_17 + (VAR_22 - VAR_15) * VAR_19 + VAR_21 * VAR_11,
                                 VAR_19);
            }
            if (VAR_13 - VAR_21 > 0 && VAR_16 - VAR_22 > 0)
                VAR_23->transpose_block(VAR_18 + VAR_21 * VAR_20 + VAR_22 * VAR_11,
                                   VAR_20,
                                   VAR_17 + (VAR_22 - VAR_15) * VAR_19 + VAR_21 * VAR_11,
                                   VAR_19, VAR_13 - VAR_21, VAR_16 - VAR_22);
        }

        if (VAR_16 - VAR_22 > 0)
            VAR_23->transpose_block(VAR_18 + 0 * VAR_20 + VAR_22 * VAR_11,
                               VAR_20,
                               VAR_17 + (VAR_22 - VAR_15) * VAR_19 + 0 * VAR_11,
                               VAR_19, VAR_13, VAR_16 - VAR_22);
    }

    return 0;
}

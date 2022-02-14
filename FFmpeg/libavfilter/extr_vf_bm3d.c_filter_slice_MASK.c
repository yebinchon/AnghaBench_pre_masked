
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int src_linesize; int ref_linesize; int plane; int * ref; int * src; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {int block_step; int* planewidth; int* planeheight; int (* block_filtering ) (TYPE_3__*,int const*,int const,int const*,int const,int,int,int const,int) ;scalar_t__ block_size; TYPE_2__* slices; } ;
struct TYPE_9__ {int den; int num; } ;
typedef TYPE_2__ SliceContext ;
typedef int FFTSample ;
typedef TYPE_3__ BM3DContext ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int const*,int const,int,int,int const,int) ;
 int FUNC_2 (int ,int ,int const) ;
 int FUNC_3 (TYPE_3__*,int const*,int const,int const*,int const,int,int,int const,int) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    BM3DContext *VAR_4 = VAR_0->priv;
    SliceContext *VAR_5 = &VAR_4->slices[VAR_2];
    const int VAR_6 = VAR_4->block_step;
    ThreadData *VAR_7 = VAR_1;
    const uint8_t *VAR_8 = VAR_7->src;
    const uint8_t *VAR_9 = VAR_7->ref;
    const int VAR_10 = VAR_7->src_linesize;
    const int VAR_11 = VAR_7->ref_linesize;
    const int VAR_12 = VAR_7->plane;
    const int VAR_13 = VAR_4->planewidth[VAR_12];
    const int VAR_14 = VAR_4->planeheight[VAR_12];
    const int VAR_15 = FUNC_0(0, VAR_14 - VAR_4->block_size);
    const int VAR_16 = FUNC_0(0, VAR_13 - VAR_4->block_size);
    const int VAR_17 = (((VAR_14 + VAR_6 - 1) / VAR_6) * VAR_2 / VAR_3) * VAR_6;
    const int VAR_18 = (VAR_2 == VAR_3 - 1) ? VAR_15 + VAR_6 :
                          (((VAR_14 + VAR_6 - 1) / VAR_6) * (VAR_2 + 1) / VAR_3) * VAR_6;
    int VAR_19, VAR_20;

    FUNC_2(VAR_5->num, 0, VAR_13 * VAR_14 * sizeof(FFTSample));
    FUNC_2(VAR_5->den, 0, VAR_13 * VAR_14 * sizeof(FFTSample));

    for (VAR_20 = VAR_17; VAR_20 < VAR_18; VAR_20 += VAR_6) {
        if (VAR_20 > VAR_15) {
            VAR_20 = VAR_15;
        }

        for (VAR_19 = 0; VAR_19 < VAR_16 + VAR_6; VAR_19 += VAR_6) {
            if (VAR_19 > VAR_16) {
                VAR_19 = VAR_16;
            }

            FUNC_1(VAR_4, VAR_9, VAR_11, VAR_20, VAR_19, VAR_12, VAR_2);

            VAR_4->block_filtering(VAR_4, VAR_8, VAR_10,
                               VAR_9, VAR_11, VAR_20, VAR_19, VAR_12, VAR_2);
        }
    }

    return 0;
}

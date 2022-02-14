
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int* planewidth; int* planeheight; int block_size; int bm_step; int const bm_range; int th_mse; TYPE_2__* slices; } ;
struct TYPE_10__ {int y; int x; } ;
struct TYPE_9__ {int nb_match_blocks; TYPE_3__* search_positions; TYPE_1__* match_blocks; } ;
struct TYPE_8__ {int y; int x; scalar_t__ score; } ;
typedef TYPE_2__ SliceContext ;
typedef TYPE_3__ PosCode ;
typedef TYPE_4__ BM3DContext ;


 int FUNC_0 (TYPE_4__*,int const*,int,int const,TYPE_3__*,int,int ,int,int,int,int) ;
 int FUNC_1 (int const,int const,int const,int,int,int) ;

__attribute__((used)) static void FUNC_2(BM3DContext *VAR_0, const uint8_t *VAR_1, int VAR_2, int VAR_3, int VAR_4,
                                 int VAR_5, int VAR_6, int VAR_7)
{
    SliceContext *VAR_8 = &VAR_0->slices[VAR_7];
    const int VAR_9 = VAR_0->planewidth[VAR_6];
    const int VAR_10 = VAR_0->planeheight[VAR_6];
    const int VAR_11 = VAR_0->block_size;
    const int VAR_12 = VAR_0->bm_step;
    const int VAR_13 = VAR_0->bm_range / VAR_12 * VAR_12;
    int VAR_14 = FUNC_1(0, VAR_13, VAR_12, 0, VAR_3, VAR_4);
    int VAR_15 = FUNC_1(VAR_9 - VAR_11, VAR_13, VAR_12, 0, VAR_3, VAR_4);
    int VAR_16 = FUNC_1(0, VAR_13, VAR_12, 1, VAR_3, VAR_4);
    int VAR_17 = FUNC_1(VAR_10 - VAR_11, VAR_13, VAR_12, 1, VAR_3, VAR_4);
    int VAR_18, VAR_19, VAR_20 = 0;

    for (VAR_18 = VAR_16; VAR_18 <= VAR_17; VAR_18 += VAR_12) {
        for (VAR_19 = VAR_14; VAR_19 <= VAR_15; VAR_19 += VAR_12) {
            PosCode VAR_21;

            if (VAR_5 > 0 && VAR_18 == VAR_3 && VAR_19 == VAR_4) {
                continue;
            }

            VAR_21.y = VAR_18;
            VAR_21.x = VAR_19;
            VAR_8->search_positions[VAR_20++] = VAR_21;
        }
    }

    if (VAR_5 == 1) {
        VAR_8->match_blocks[0].score = 0;
        VAR_8->match_blocks[0].y = VAR_3;
        VAR_8->match_blocks[0].x = VAR_4;
        VAR_8->nb_match_blocks = 1;
    }

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->bm_range,
                            VAR_8->search_positions, VAR_20, VAR_0->th_mse, VAR_3, VAR_4, VAR_6, VAR_7);
}

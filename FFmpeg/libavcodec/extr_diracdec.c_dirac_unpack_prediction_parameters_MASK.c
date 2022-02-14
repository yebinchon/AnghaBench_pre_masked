
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_7__ {int zrs_exp; int** zrs; int perspective_exp; void** perspective; void** pan_tilt; } ;
struct TYPE_6__ {int chroma_x_shift; int chroma_y_shift; int mv_precision; unsigned int num_refs; int weight_log2denom; int* weight; int avctx; TYPE_3__* globalmc; scalar_t__ globalmc_flag; TYPE_1__* plane; int gb; } ;
struct TYPE_5__ {int xblen; int yblen; int xbsep; int ybsep; } ;
typedef int GetBitContext ;
typedef TYPE_2__ DiracContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,char*,...) ;
 void* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_7(DiracContext *VAR_4)
{
    static const uint8_t VAR_5[] = { 4, 12, 16, 24 };

    GetBitContext *VAR_6 = &VAR_4->gb;
    unsigned VAR_7, VAR_8;

    FUNC_1(VAR_6);


    VAR_7 = FUNC_5(VAR_6);

    if (VAR_7 > 4) {
        FUNC_2(VAR_4->avctx, VAR_2, "Block prediction index too high\n");
        return VAR_0;
    }

    if (VAR_7 == 0) {
        VAR_4->plane[0].xblen = FUNC_5(VAR_6);
        VAR_4->plane[0].yblen = FUNC_5(VAR_6);
        VAR_4->plane[0].xbsep = FUNC_5(VAR_6);
        VAR_4->plane[0].ybsep = FUNC_5(VAR_6);
    } else {

        VAR_4->plane[0].xblen = VAR_5[VAR_7-1];
        VAR_4->plane[0].yblen = VAR_5[VAR_7-1];
        VAR_4->plane[0].xbsep = 4 * VAR_7;
        VAR_4->plane[0].ybsep = 4 * VAR_7;
    }



    if (VAR_4->plane[0].xblen % (1 << VAR_4->chroma_x_shift) != 0 ||
        VAR_4->plane[0].yblen % (1 << VAR_4->chroma_y_shift) != 0 ||
        !VAR_4->plane[0].xblen || !VAR_4->plane[0].yblen) {
        FUNC_2(VAR_4->avctx, VAR_2,
               "invalid x/y block length (%d/%d) for x/y chroma shift (%d/%d)\n",
               VAR_4->plane[0].xblen, VAR_4->plane[0].yblen, VAR_4->chroma_x_shift, VAR_4->chroma_y_shift);
        return VAR_0;
    }
    if (!VAR_4->plane[0].xbsep || !VAR_4->plane[0].ybsep || VAR_4->plane[0].xbsep < VAR_4->plane[0].xblen/2 || VAR_4->plane[0].ybsep < VAR_4->plane[0].yblen/2) {
        FUNC_2(VAR_4->avctx, VAR_2, "Block separation too small\n");
        return VAR_0;
    }
    if (VAR_4->plane[0].xbsep > VAR_4->plane[0].xblen || VAR_4->plane[0].ybsep > VAR_4->plane[0].yblen) {
        FUNC_2(VAR_4->avctx, VAR_2, "Block separation greater than size\n");
        return VAR_0;
    }
    if (FUNC_0(VAR_4->plane[0].xblen, VAR_4->plane[0].yblen) > VAR_3) {
        FUNC_2(VAR_4->avctx, VAR_2, "Unsupported large block size\n");
        return VAR_1;
    }



    VAR_4->mv_precision = FUNC_5(VAR_6);
    if (VAR_4->mv_precision > 3) {
        FUNC_2(VAR_4->avctx, VAR_2, "MV precision finer than eighth-pel\n");
        return VAR_0;
    }



    VAR_4->globalmc_flag = FUNC_4(VAR_6);
    if (VAR_4->globalmc_flag) {
        FUNC_6(VAR_4->globalmc, 0, sizeof(VAR_4->globalmc));

        for (VAR_8 = 0; VAR_8 < VAR_4->num_refs; VAR_8++) {
            if (FUNC_4(VAR_6)) {
                VAR_4->globalmc[VAR_8].pan_tilt[0] = FUNC_3(VAR_6);
                VAR_4->globalmc[VAR_8].pan_tilt[1] = FUNC_3(VAR_6);
            }


            if (FUNC_4(VAR_6)) {
                VAR_4->globalmc[VAR_8].zrs_exp = FUNC_5(VAR_6);
                VAR_4->globalmc[VAR_8].zrs[0][0] = FUNC_3(VAR_6);
                VAR_4->globalmc[VAR_8].zrs[0][1] = FUNC_3(VAR_6);
                VAR_4->globalmc[VAR_8].zrs[1][0] = FUNC_3(VAR_6);
                VAR_4->globalmc[VAR_8].zrs[1][1] = FUNC_3(VAR_6);
            } else {
                VAR_4->globalmc[VAR_8].zrs[0][0] = 1;
                VAR_4->globalmc[VAR_8].zrs[1][1] = 1;
            }

            if (FUNC_4(VAR_6)) {
                VAR_4->globalmc[VAR_8].perspective_exp = FUNC_5(VAR_6);
                VAR_4->globalmc[VAR_8].perspective[0] = FUNC_3(VAR_6);
                VAR_4->globalmc[VAR_8].perspective[1] = FUNC_3(VAR_6);
            }
            if (VAR_4->globalmc[VAR_8].perspective_exp + (uint64_t)VAR_4->globalmc[VAR_8].zrs_exp > 30) {
                return VAR_0;
            }

        }
    }



    if (FUNC_5(VAR_6)) {
        FUNC_2(VAR_4->avctx, VAR_2, "Unknown picture prediction mode\n");
        return VAR_0;
    }



    VAR_4->weight_log2denom = 1;
    VAR_4->weight[0] = 1;
    VAR_4->weight[1] = 1;

    if (FUNC_4(VAR_6)) {
        VAR_4->weight_log2denom = FUNC_5(VAR_6);
        if (VAR_4->weight_log2denom < 1 || VAR_4->weight_log2denom > 8) {
            FUNC_2(VAR_4->avctx, VAR_2, "weight_log2denom unsupported or invalid\n");
            VAR_4->weight_log2denom = 1;
            return VAR_0;
        }
        VAR_4->weight[0] = FUNC_3(VAR_6);
        if (VAR_4->num_refs == 2)
            VAR_4->weight[1] = FUNC_3(VAR_6);
    }
    return 0;
}

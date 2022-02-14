
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int* comp_index; size_t* quant_sindex; unsigned long long* coefs_finished; int mb_height; int* block_stride; int mb_width; int avctx; int * ac_index; scalar_t__ restart_interval; scalar_t__ restart_count; int gb; int ** last_nnz; int ** blocks; int ** quant_matrixes; } ;
typedef TYPE_1__ MJpegDecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,...) ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int *,int ,int *,int,int,int,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int ,int *,int,int,int,int*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int ** FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(MJpegDecodeContext *VAR_3, int VAR_4,
                                            int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;
    int VAR_10 = 0;
    int VAR_11 = VAR_3->comp_index[0];
    uint16_t *VAR_12 = VAR_3->quant_matrixes[VAR_3->quant_sindex[0]];

    FUNC_0(VAR_4>=0 && VAR_6>=0 && VAR_7>=0);
    if (VAR_5 < VAR_4 || VAR_5 > 63) {
        FUNC_1(VAR_3->avctx, VAR_1, "SS/SE %d/%d is invalid\n", VAR_4, VAR_5);
        return VAR_0;
    }



    VAR_3->coefs_finished[VAR_11] |= (2ULL << VAR_5) - (1ULL << VAR_4);

    VAR_3->restart_count = 0;

    for (VAR_9 = 0; VAR_9 < VAR_3->mb_height; VAR_9++) {
        int VAR_13 = VAR_9 * VAR_3->block_stride[VAR_11];
        FUNC_6 (*VAR_2)[64] = &VAR_3->blocks[VAR_11][VAR_13];
        uint8_t *VAR_14 = &VAR_3->last_nnz[VAR_11][VAR_13];
        if (FUNC_4(&VAR_3->gb) <= 0) {
            FUNC_1(VAR_3->avctx, VAR_1, "bitstream truncated in mjpeg_decode_scan_progressive_ac\n");
            return VAR_0;
        }
        for (VAR_8 = 0; VAR_8 < VAR_3->mb_width; VAR_8++, VAR_2++, VAR_14++) {
                int VAR_15;
                if (VAR_3->restart_interval && !VAR_3->restart_count)
                    VAR_3->restart_count = VAR_3->restart_interval;

                if (VAR_6)
                    VAR_15 = FUNC_3(VAR_3, *VAR_2, VAR_14, VAR_3->ac_index[0],
                                                  VAR_12, VAR_4, VAR_5, VAR_7, &VAR_10);
                else
                    VAR_15 = FUNC_2(VAR_3, *VAR_2, VAR_14, VAR_3->ac_index[0],
                                                   VAR_12, VAR_4, VAR_5, VAR_7, &VAR_10);
                if (VAR_15 < 0) {
                    FUNC_1(VAR_3->avctx, VAR_1,
                           "error y=%d x=%d\n", VAR_9, VAR_8);
                    return VAR_0;
                }

            if (FUNC_5(VAR_3, 0))
                VAR_10 = 0;
        }
    }
    return 0;
}

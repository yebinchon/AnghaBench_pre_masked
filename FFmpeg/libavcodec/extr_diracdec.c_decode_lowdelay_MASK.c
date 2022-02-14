
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_26__ {int thread_count; int (* execute ) (TYPE_7__*,int ,TYPE_5__*,int *,int,int) ;int (* execute2 ) (TYPE_7__*,int ,TYPE_5__*,int *,int) ;} ;
struct TYPE_20__ {int den; scalar_t__ num; } ;
struct TYPE_21__ {TYPE_1__ bytes; } ;
struct TYPE_23__ {int prefix_bytes; int const size_scaler; } ;
struct TYPE_19__ {int* buffer; } ;
struct TYPE_25__ {int slice_params_num_buf; int num_x; int num_y; int pshift; int threads_num_buf; int thread_buf_size; TYPE_3__* plane; scalar_t__ dc_prediction; TYPE_7__* avctx; TYPE_2__ lowdelay; TYPE_4__ highquality; scalar_t__ hq_picture; TYPE_13__ gb; TYPE_5__* thread_buf; TYPE_5__* slice_params_buf; } ;
struct TYPE_24__ {int bytes; int slice_x; int slice_y; int gb; } ;
struct TYPE_22__ {int ** band; } ;
typedef int SliceCoeffs ;
typedef TYPE_5__ DiracSlice ;
typedef TYPE_6__ DiracContext ;
typedef TYPE_7__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (TYPE_7__*,int ,char*) ;
 void* FUNC_3 (TYPE_5__*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_13__*) ;
 int FUNC_5 (TYPE_13__*) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_7__*,int ,TYPE_5__*,int *,int) ;
 int FUNC_10 (TYPE_7__*,int ,TYPE_5__*,int *,int,int) ;
 int FUNC_11 (TYPE_6__*,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_12(DiracContext *VAR_7)
{
    AVCodecContext *VAR_8 = VAR_7->avctx;
    int VAR_9, VAR_10, VAR_11;
    int64_t VAR_12, VAR_13 = 0;
    const uint8_t *VAR_14;
    DiracSlice *VAR_15;
    SliceCoeffs VAR_16[VAR_4];
    int VAR_17 = 0;

    if (VAR_7->slice_params_num_buf != (VAR_7->num_x * VAR_7->num_y)) {
        VAR_7->slice_params_buf = FUNC_3(VAR_7->slice_params_buf, VAR_7->num_x * VAR_7->num_y, sizeof(DiracSlice));
        if (!VAR_7->slice_params_buf) {
            FUNC_2(VAR_7->avctx, VAR_1, "slice params buffer allocation failure\n");
            VAR_7->slice_params_num_buf = 0;
            return FUNC_0(VAR_2);
        }
        VAR_7->slice_params_num_buf = VAR_7->num_x * VAR_7->num_y;
    }
    VAR_15 = VAR_7->slice_params_buf;



    VAR_12 = FUNC_11(VAR_7, VAR_7->num_x - 1, VAR_7->num_y - 1, 0, VAR_16) + 8;
    VAR_12 = (VAR_12 << (1 + VAR_7->pshift)) + 512;

    if (VAR_7->threads_num_buf != VAR_8->thread_count ||
        VAR_7->thread_buf_size != VAR_12) {
        VAR_7->threads_num_buf = VAR_8->thread_count;
        VAR_7->thread_buf_size = VAR_12;
        VAR_7->thread_buf = FUNC_3(VAR_7->thread_buf, VAR_8->thread_count, VAR_7->thread_buf_size);
        if (!VAR_7->thread_buf) {
            FUNC_2(VAR_7->avctx, VAR_1, "thread buffer allocation failure\n");
            return FUNC_0(VAR_2);
        }
    }

    FUNC_1(&VAR_7->gb);

    VAR_14 = VAR_7->gb.buffer + FUNC_4(&VAR_7->gb)/8;
    VAR_11 = FUNC_5(&VAR_7->gb);

    if (VAR_7->hq_picture) {
        int VAR_18;

        for (VAR_10 = 0; VAR_11 > 0 && VAR_10 < VAR_7->num_y; VAR_10++) {
            for (VAR_9 = 0; VAR_11 > 0 && VAR_9 < VAR_7->num_x; VAR_9++) {
                VAR_13 = VAR_7->highquality.prefix_bytes + 1;
                for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {
                    if (VAR_13 <= VAR_11/8)
                        VAR_13 += VAR_14[VAR_13] * VAR_7->highquality.size_scaler + 1;
                }
                if (VAR_13 >= VAR_3 || VAR_13*8 > VAR_11) {
                    FUNC_2(VAR_7->avctx, VAR_1, "too many bytes\n");
                    return VAR_0;
                }

                VAR_15[VAR_17].bytes = VAR_13;
                VAR_15[VAR_17].slice_x = VAR_9;
                VAR_15[VAR_17].slice_y = VAR_10;
                FUNC_6(&VAR_15[VAR_17].gb, VAR_14, VAR_11);
                VAR_17++;

                VAR_14 += VAR_13;
                if (VAR_11/8 >= VAR_13)
                    VAR_11 -= VAR_13*8;
                else
                    VAR_11 = 0;
            }
        }

        if (VAR_7->num_x*VAR_7->num_y != VAR_17) {
            FUNC_2(VAR_7->avctx, VAR_1, "too few slices\n");
            return VAR_0;
        }

        VAR_8->execute2(VAR_8, VAR_5, VAR_15, ((void*)0), VAR_7->num_y);
    } else {
        for (VAR_10 = 0; VAR_11 > 0 && VAR_10 < VAR_7->num_y; VAR_10++) {
            for (VAR_9 = 0; VAR_11 > 0 && VAR_9 < VAR_7->num_x; VAR_9++) {
                VAR_13 = (VAR_17+1) * (int64_t)VAR_7->lowdelay.bytes.num / VAR_7->lowdelay.bytes.den
                       - VAR_17 * (int64_t)VAR_7->lowdelay.bytes.num / VAR_7->lowdelay.bytes.den;
                if (VAR_13 >= VAR_3 || VAR_13*8 > VAR_11) {
                    FUNC_2(VAR_7->avctx, VAR_1, "too many bytes\n");
                    return VAR_0;
                }
                VAR_15[VAR_17].bytes = VAR_13;
                VAR_15[VAR_17].slice_x = VAR_9;
                VAR_15[VAR_17].slice_y = VAR_10;
                FUNC_6(&VAR_15[VAR_17].gb, VAR_14, VAR_11);
                VAR_17++;

                VAR_14 += VAR_13;
                if (VAR_11/8 >= VAR_13)
                    VAR_11 -= VAR_13*8;
                else
                    VAR_11 = 0;
            }
        }
        VAR_8->execute(VAR_8, VAR_6, VAR_15, ((void*)0), VAR_17,
                       sizeof(DiracSlice));
    }

    if (VAR_7->dc_prediction) {
        if (VAR_7->pshift) {
            FUNC_7(&VAR_7->plane[0].band[0][0]);
            FUNC_7(&VAR_7->plane[1].band[0][0]);
            FUNC_7(&VAR_7->plane[2].band[0][0]);
        } else {
            FUNC_8(&VAR_7->plane[0].band[0][0]);
            FUNC_8(&VAR_7->plane[1].band[0][0]);
            FUNC_8(&VAR_7->plane[2].band[0][0]);
        }
    }

    return 0;
}

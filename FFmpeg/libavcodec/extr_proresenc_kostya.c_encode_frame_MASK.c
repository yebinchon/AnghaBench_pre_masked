
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {int width; int height; int flags; int (* execute2 ) (TYPE_4__*,int ,void*,int *,int) ;TYPE_1__* priv_data; } ;
struct TYPE_17__ {int color_primaries; int color_trc; int colorspace; scalar_t__ top_field_first; } ;
struct TYPE_16__ {int* data; int size; int flags; } ;
struct TYPE_15__ {int num_planes; int frame_size_upper_bound; int pictures_per_frame; int slices_per_picture; int chroma_factor; int alpha_bits; scalar_t__ quant_sel; int* quant_mat; int cur_picture_idx; int mbs_per_slice; int force_quant; int mb_height; int mb_width; int* slice_q; int slices_width; int warn; int vendor; TYPE_3__ const* pic; } ;
typedef int PutBitContext ;
typedef TYPE_1__ ProresContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,char*,int,int,int) ;
 int FUNC_4 (int**,int) ;
 int FUNC_5 (int**,int) ;
 int FUNC_6 (int**,int ,int) ;
 int FUNC_7 (int**,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__ const*,int *,int*,int,int,int,int) ;
 int FUNC_9 (TYPE_4__*,TYPE_2__*,scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_10 (int *,int*,int) ;
 int FUNC_11 (TYPE_4__*,int ,void*,int *,int) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_6, AVPacket *VAR_7,
                        const AVFrame *VAR_8, int *VAR_9)
{
    ProresContext *VAR_10 = VAR_6->priv_data;
    uint8_t *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15;
    uint8_t *VAR_16;
    PutBitContext VAR_17;
    int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = 0;
    int VAR_23[4] = { 0 };
    int VAR_24 = 2 + 2 * (VAR_10->num_planes - 1);
    int VAR_25, VAR_26, VAR_27;
    int VAR_28, VAR_29;
    int VAR_30 = (VAR_10->frame_size_upper_bound - 200) / (VAR_10->pictures_per_frame * VAR_10->slices_per_picture + 1);
    uint8_t VAR_31;

    VAR_10->pic = VAR_8;
    VAR_28 = VAR_10->frame_size_upper_bound;

    if ((VAR_29 = FUNC_9(VAR_6, VAR_7, VAR_28 + VAR_1, 0)) < 0)
        return VAR_29;

    VAR_11 = VAR_7->data;


    VAR_11 += 4;
    FUNC_5 (&VAR_11, VAR_3);
    VAR_12 = VAR_11;


    VAR_15 = VAR_12;
    VAR_12 += 2;
    FUNC_4 (&VAR_12, 0);
    FUNC_6(&VAR_12, VAR_10->vendor, 4);
    FUNC_4 (&VAR_12, VAR_6->width);
    FUNC_4 (&VAR_12, VAR_6->height);

    VAR_31 = VAR_10->chroma_factor << 6;
    if (VAR_6->flags & VAR_0)
        VAR_31 |= VAR_8->top_field_first ? 0x04 : 0x08;
    FUNC_7 (&VAR_12, VAR_31);

    FUNC_7 (&VAR_12, 0);
    FUNC_7 (&VAR_12, VAR_8->color_primaries);
    FUNC_7 (&VAR_12, VAR_8->color_trc);
    FUNC_7 (&VAR_12, VAR_8->colorspace);
    FUNC_7 (&VAR_12, 0x40 | (VAR_10->alpha_bits >> 3));
    FUNC_7 (&VAR_12, 0);
    if (VAR_10->quant_sel != VAR_4) {
        FUNC_7 (&VAR_12, 0x03);

        for (VAR_20 = 0; VAR_20 < 64; VAR_20++)
            FUNC_7(&VAR_12, VAR_10->quant_mat[VAR_20]);

        for (VAR_20 = 0; VAR_20 < 64; VAR_20++)
            FUNC_7(&VAR_12, VAR_10->quant_mat[VAR_20]);
    } else {
        FUNC_7 (&VAR_12, 0x00);
    }
    FUNC_4 (&VAR_15, VAR_12 - VAR_11);

    for (VAR_10->cur_picture_idx = 0;
         VAR_10->cur_picture_idx < VAR_10->pictures_per_frame;
         VAR_10->cur_picture_idx++) {

        VAR_16 = VAR_12 + 1;
        FUNC_7 (&VAR_12, 0x40);
        VAR_12 += 4;
        FUNC_4 (&VAR_12, VAR_10->slices_per_picture);
        FUNC_7 (&VAR_12, FUNC_2(VAR_10->mbs_per_slice) << 4);


        VAR_14 = VAR_12;
        VAR_12 += VAR_10->slices_per_picture * 2;


        if (!VAR_10->force_quant) {
            VAR_29 = VAR_6->execute2(VAR_6, VAR_5, (void*)VAR_8, ((void*)0),
                                  VAR_10->mb_height);
            if (VAR_29)
                return VAR_29;
        }

        for (VAR_19 = 0; VAR_19 < VAR_10->mb_height; VAR_19++) {
            int VAR_32 = VAR_10->mbs_per_slice;
            for (VAR_18 = VAR_21 = 0; VAR_18 < VAR_10->mb_width; VAR_18 += VAR_32, VAR_21++) {
                VAR_22 = VAR_10->force_quant ? VAR_10->force_quant
                                     : VAR_10->slice_q[VAR_21 + VAR_19 * VAR_10->slices_width];

                while (VAR_10->mb_width - VAR_18 < VAR_32)
                    VAR_32 >>= 1;

                FUNC_7(&VAR_12, VAR_24 << 3);
                VAR_13 = VAR_12;
                VAR_12 += VAR_24 - 1;
                if (VAR_28 <= VAR_12 - VAR_11 + 2 * VAR_30) {
                    uint8_t *VAR_33 = VAR_7->data;


                    int VAR_34 = 200 + (VAR_10->pictures_per_frame *
                                VAR_10->slices_per_picture + 1) *
                                VAR_30 - VAR_28;

                    VAR_34 = FUNC_0(VAR_34, 2 * VAR_30);
                    VAR_10->frame_size_upper_bound += VAR_34;

                    if (!VAR_10->warn) {
                        FUNC_3(VAR_6,
                                              "Packet too small: is %i,"
                                              " needs %i (slice: %i). "
                                              "Correct allocation",
                                              VAR_28, VAR_34, VAR_30);
                        VAR_10->warn = 1;
                    }

                    VAR_29 = FUNC_1(VAR_7, VAR_34);
                    if (VAR_29 < 0)
                        return VAR_29;

                    VAR_28 += VAR_34;

                    VAR_11 = VAR_7->data + (VAR_11 - VAR_33);
                    VAR_12 = VAR_7->data + (VAR_12 - VAR_33);
                    VAR_16 = VAR_7->data + (VAR_16 - VAR_33);
                    VAR_14 = VAR_7->data + (VAR_14 - VAR_33);
                    VAR_13 = VAR_7->data + (VAR_13 - VAR_33);
                    VAR_15 = VAR_7->data + (VAR_15 - VAR_33);
                }
                FUNC_10(&VAR_17, VAR_12, (VAR_28 - (VAR_12 - VAR_11)));
                VAR_29 = FUNC_8(VAR_6, VAR_8, &VAR_17, VAR_23, VAR_18, VAR_19, VAR_22,
                                   VAR_32);
                if (VAR_29 < 0)
                    return VAR_29;

                FUNC_7(&VAR_13, VAR_22);
                VAR_27 = VAR_24 + VAR_23[VAR_10->num_planes - 1];
                for (VAR_20 = 0; VAR_20 < VAR_10->num_planes - 1; VAR_20++) {
                    FUNC_4(&VAR_13, VAR_23[VAR_20]);
                    VAR_27 += VAR_23[VAR_20];
                }
                FUNC_4(&VAR_14, VAR_27);
                VAR_12 += VAR_27 - VAR_24;
                if (VAR_30 < VAR_27)
                    VAR_30 = VAR_27;
            }
        }

        VAR_26 = VAR_12 - (VAR_16 - 1);
        FUNC_5(&VAR_16, VAR_26);
    }

    VAR_11 -= 8;
    VAR_25 = VAR_12 - VAR_11;
    FUNC_5(&VAR_11, VAR_25);

    VAR_7->size = VAR_25;
    VAR_7->flags |= VAR_2;
    *VAR_9 = 1;

    return 0;
}

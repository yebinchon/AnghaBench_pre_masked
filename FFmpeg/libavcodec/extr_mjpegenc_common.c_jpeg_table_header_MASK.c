
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int luma_intra_matrix ;
struct TYPE_10__ {scalar_t__ codec_id; int active_thread_type; int width; TYPE_3__* priv_data; } ;
struct TYPE_9__ {scalar_t__ huffman; TYPE_1__* mjpeg_ctx; scalar_t__ force_duplicated_matrix; } ;
struct TYPE_8__ {int* permutated; } ;
struct TYPE_7__ {int val_ac_chrominance; int bits_ac_chrominance; int val_ac_luminance; int bits_ac_luminance; int val_dc_chrominance; int bits_dc_chrominance; int val_dc_luminance; int bits_dc_luminance; } ;
typedef TYPE_2__ ScanTable ;
typedef int PutBitContext ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int *,int,int) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int,int ,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(AVCodecContext *VAR_13, PutBitContext *VAR_14,
                              ScanTable *VAR_15,
                              uint16_t VAR_16[64],
                              uint16_t VAR_17[64],
                              int VAR_18[3])
{
    int VAR_19, VAR_20, VAR_21;
    uint8_t *VAR_22;
    MpegEncContext *VAR_23 = ((void*)0);


    if (VAR_13->codec_id != VAR_0)
        VAR_23 = VAR_13->priv_data;

    if (VAR_13->codec_id != VAR_0) {
        int VAR_24 = 1 + !!FUNC_2(VAR_16,
                                        VAR_17,
                                        sizeof(VAR_16[0]) * 64);
    if (VAR_23 && VAR_23->force_duplicated_matrix)
        VAR_24 = 2;

    FUNC_6(VAR_14, VAR_2);
    FUNC_3(VAR_14, 16, 2 + VAR_24 * (1 + 64));
    FUNC_3(VAR_14, 4, 0);
    FUNC_3(VAR_14, 4, 0);
    for(VAR_19=0;VAR_19<64;VAR_19++) {
        VAR_20 = VAR_15->permutated[VAR_19];
        FUNC_3(VAR_14, 8, VAR_16[VAR_20]);
    }

        if (VAR_24 > 1) {
            FUNC_3(VAR_14, 4, 0);
            FUNC_3(VAR_14, 4, 1);
            for(VAR_19=0;VAR_19<64;VAR_19++) {
                VAR_20 = VAR_15->permutated[VAR_19];
                FUNC_3(VAR_14, 8, VAR_17[VAR_20]);
            }
        }
    }

    if(VAR_13->active_thread_type & VAR_4){
        FUNC_6(VAR_14, VAR_3);
        FUNC_3(VAR_14, 16, 4);
        FUNC_3(VAR_14, 16, (VAR_13->width-1)/(8*VAR_18[0]) + 1);
    }


    FUNC_6(VAR_14, VAR_1);
    FUNC_1(VAR_14);
    VAR_22 = FUNC_4(VAR_14);
    FUNC_3(VAR_14, 16, 0);
    VAR_21 = 2;



    if (VAR_23 && VAR_23->huffman == VAR_5) {
        VAR_21 += FUNC_5(VAR_14, 0, 0, VAR_23->mjpeg_ctx->bits_dc_luminance,
                                  VAR_23->mjpeg_ctx->val_dc_luminance);
        VAR_21 += FUNC_5(VAR_14, 0, 1, VAR_23->mjpeg_ctx->bits_dc_chrominance,
                                  VAR_23->mjpeg_ctx->val_dc_chrominance);

        VAR_21 += FUNC_5(VAR_14, 1, 0, VAR_23->mjpeg_ctx->bits_ac_luminance,
                                  VAR_23->mjpeg_ctx->val_ac_luminance);
        VAR_21 += FUNC_5(VAR_14, 1, 1, VAR_23->mjpeg_ctx->bits_ac_chrominance,
                                  VAR_23->mjpeg_ctx->val_ac_chrominance);
    } else {
        VAR_21 += FUNC_5(VAR_14, 0, 0, VAR_9,
                                  VAR_12);
        VAR_21 += FUNC_5(VAR_14, 0, 1, VAR_8,
                                  VAR_12);

        VAR_21 += FUNC_5(VAR_14, 1, 0, VAR_7,
                                  VAR_11);
        VAR_21 += FUNC_5(VAR_14, 1, 1, VAR_6,
                                  VAR_10);
    }
    FUNC_0(VAR_22, VAR_21);
}

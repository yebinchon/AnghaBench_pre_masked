
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_28__ {int err_recognition; TYPE_1__* priv_data; } ;
struct TYPE_27__ {int key_frame; int * data; int pict_type; } ;
struct TYPE_26__ {int size; int * data; } ;
struct TYPE_25__ {int got_picture; TYPE_4__* picture_ptr; int gb; int first_picture; int interlaced; } ;
struct TYPE_24__ {int got_sof_data; int picture_index; int has_complete_frame; scalar_t__ got_mxm_bitmask; TYPE_4__** picture; int bitmask_size; int * mxm_bitmask; TYPE_2__ jpg; } ;
typedef TYPE_1__ MXpegDecodeContext ;
typedef TYPE_2__ MJpegDecodeContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;




 int FUNC_1 (void*,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,int ,char*) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *,int ,TYPE_4__*) ;
 int FUNC_9 (TYPE_2__*,int const**,int const*,int const**,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int const*,int) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*,TYPE_4__*) ;
 int FUNC_13 (TYPE_1__*,int const*,int) ;
 int FUNC_14 (TYPE_1__*,int const*,int) ;

__attribute__((used)) static int FUNC_15(AVCodecContext *VAR_9,
                          void *VAR_10, int *VAR_11,
                          AVPacket *VAR_12)
{
    const uint8_t *VAR_13 = VAR_12->data;
    int VAR_14 = VAR_12->size;
    MXpegDecodeContext *VAR_15 = VAR_9->priv_data;
    MJpegDecodeContext *VAR_16 = &VAR_15->jpg;
    const uint8_t *VAR_17, *VAR_18;
    const uint8_t *VAR_19;
    int VAR_20;
    int VAR_21;
    int VAR_22;

    VAR_18 = VAR_13;
    VAR_17 = VAR_13 + VAR_14;
    VAR_16->got_picture = 0;
    VAR_15->got_mxm_bitmask = 0;
    while (VAR_18 < VAR_17) {
        VAR_21 = FUNC_9(VAR_16, &VAR_18, VAR_17,
                                          &VAR_19, &VAR_20);
        if (VAR_21 < 0)
            goto the_end;
        {
            FUNC_11(&VAR_16->gb, VAR_19, VAR_20*8);

            if (VAR_21 >= VAR_0 && VAR_21 <= VAR_1) {
                FUNC_13(VAR_15, VAR_19, VAR_20);
            }

            switch (VAR_21) {
            case 129:
                if (VAR_16->got_picture)
                    goto the_end;
                break;
            case 131:
                goto the_end;
            case 132:
                VAR_22 = FUNC_6(VAR_16);
                if (VAR_22 < 0) {
                    FUNC_3(VAR_9, VAR_4,
                           "quantization table decode error\n");
                    return VAR_22;
                }
                break;
            case 133:
                VAR_22 = FUNC_5(VAR_16);
                if (VAR_22 < 0) {
                    FUNC_3(VAR_9, VAR_4,
                           "huffman table decode error\n");
                    return VAR_22;
                }
                break;
            case 134:
                VAR_22 = FUNC_14(VAR_15, VAR_19,
                                       VAR_20);
                if (VAR_22 < 0)
                    return VAR_22;
                break;
            case 130:
                VAR_15->got_sof_data = 0;
                VAR_22 = FUNC_7(VAR_16);
                if (VAR_22 < 0) {
                    FUNC_3(VAR_9, VAR_4,
                           "SOF data decode error\n");
                    return VAR_22;
                }
                if (VAR_16->interlaced) {
                    FUNC_3(VAR_9, VAR_4,
                           "Interlaced mode not supported in MxPEG\n");
                    return FUNC_0(VAR_8);
                }
                VAR_15->got_sof_data = 1;
                break;
            case 128:
                if (!VAR_15->got_sof_data) {
                    FUNC_3(VAR_9, VAR_5,
                           "Can not process SOS without SOF data, skipping\n");
                    break;
                }
                if (!VAR_16->got_picture) {
                    if (VAR_16->first_picture) {
                        FUNC_3(VAR_9, VAR_5,
                               "First picture has no SOF, skipping\n");
                        break;
                    }
                    if (!VAR_15->got_mxm_bitmask){
                        FUNC_3(VAR_9, VAR_5,
                               "Non-key frame has no MXM, skipping\n");
                        break;
                    }

                    FUNC_2(VAR_16->picture_ptr);
                    if ((VAR_22 = FUNC_4(VAR_9, VAR_16->picture_ptr,
                                             VAR_3)) < 0)
                        return VAR_22;
                    VAR_16->picture_ptr->pict_type = VAR_7;
                    VAR_16->picture_ptr->key_frame = 0;
                    VAR_16->got_picture = 1;
                } else {
                    VAR_16->picture_ptr->pict_type = VAR_6;
                    VAR_16->picture_ptr->key_frame = 1;
                }

                if (VAR_15->got_mxm_bitmask) {
                    AVFrame *VAR_23 = VAR_15->picture[VAR_15->picture_index ^ 1];
                    if (FUNC_12(VAR_15, VAR_16, VAR_23) < 0)
                        break;


                    if (!VAR_23->data[0] &&
                        (VAR_22 = FUNC_4(VAR_9, VAR_23,
                                             VAR_3)) < 0)
                        return VAR_22;

                    VAR_22 = FUNC_8(VAR_16, VAR_15->mxm_bitmask, VAR_15->bitmask_size, VAR_23);
                    if (VAR_22 < 0 && (VAR_9->err_recognition & VAR_2))
                        return VAR_22;
                } else {
                    VAR_22 = FUNC_8(VAR_16, ((void*)0), 0, ((void*)0));
                    if (VAR_22 < 0 && (VAR_9->err_recognition & VAR_2))
                        return VAR_22;
                }

                break;
            }

            VAR_18 += (FUNC_10(&VAR_16->gb)+7) >> 3;
        }

    }

the_end:
    if (VAR_16->got_picture) {
        int VAR_24 = FUNC_1(VAR_10, VAR_16->picture_ptr);
        if (VAR_24 < 0)
            return VAR_24;
        *VAR_11 = 1;

        VAR_15->picture_index ^= 1;
        VAR_16->picture_ptr = VAR_15->picture[VAR_15->picture_index];

        if (!VAR_15->has_complete_frame) {
            if (!VAR_15->got_mxm_bitmask)
                VAR_15->has_complete_frame = 1;
            else
                *VAR_11 = 0;
        }
    }

    return VAR_18 - VAR_13;
}

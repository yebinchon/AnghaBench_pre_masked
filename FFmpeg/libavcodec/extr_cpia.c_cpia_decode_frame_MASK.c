
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_15__ {int height; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int key_frame; int height; scalar_t__** data; int* linesize; void* decode_error_flags; int pict_type; } ;
struct TYPE_13__ {scalar_t__* data; scalar_t__ size; } ;
struct TYPE_12__ {TYPE_3__* frame; } ;
typedef TYPE_1__ CpiaContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (void*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_19,
                             void *VAR_20, int *VAR_21, AVPacket* VAR_22)
{
    CpiaContext* const VAR_23 = VAR_19->priv_data;
    int VAR_24,VAR_25,VAR_26;

    uint8_t* const VAR_27 = VAR_22->data;
    uint8_t* VAR_28;
    int VAR_29;
    uint16_t VAR_30;
    uint8_t VAR_31;

    AVFrame *VAR_32 = VAR_23->frame;
    uint8_t *VAR_33, *VAR_34, *VAR_35, *VAR_36, *VAR_37, *VAR_38;


    if ( VAR_22->size < VAR_10 + VAR_19->height * 3
      || VAR_27[0] != VAR_11 || VAR_27[1] != VAR_12
      || (VAR_27[17] != VAR_15 && VAR_27[17] != VAR_16)
      || (VAR_27[18] != VAR_18 && VAR_27[18] != VAR_17)
      || (VAR_27[28] != VAR_13 && VAR_27[28] != VAR_6)
      || (VAR_27[29] != VAR_14 && VAR_27[29] != VAR_7)
    ) {
        FUNC_2(VAR_19, VAR_2, "Invalid header!\n");
        return VAR_0;
    }


    if (VAR_27[17] == VAR_16) {
        FUNC_3(VAR_19, "4:2:2 subsampling");
        return VAR_1;
    }
    if (VAR_27[18] == VAR_17) {
        FUNC_3(VAR_19, "YUV byte order UYVY");
        return VAR_1;
    }
    if (VAR_27[29] == VAR_7) {
        FUNC_3(VAR_19, "Decimation");
        return VAR_1;
    }

    VAR_28 = VAR_27 + VAR_10;
    VAR_29 = VAR_22->size - VAR_10;

    if (VAR_27[28] == VAR_13) {
        VAR_32->pict_type = VAR_4;
        VAR_32->key_frame = 1;
    } else {
        VAR_32->pict_type = VAR_5;
        VAR_32->key_frame = 0;
    }


    if ((VAR_26 = FUNC_4(VAR_19, VAR_32, 0)) < 0)
        return VAR_26;


    for ( VAR_24 = 0;
          VAR_24 < VAR_32->height;
          VAR_24++, VAR_28 += VAR_30, VAR_29 -= VAR_30
    ) {

        VAR_30 = FUNC_0(VAR_28);
        VAR_28 += 2;

        if (VAR_29 < VAR_30) {
            VAR_32->decode_error_flags = VAR_9;
            FUNC_2(VAR_19, VAR_3, "Frame ended unexpectedly!\n");
            break;
        }
        if (VAR_28[VAR_30 - 1] != VAR_8) {
            VAR_32->decode_error_flags = VAR_9;
            FUNC_2(VAR_19, VAR_3, "Wrong line length %d or line not terminated properly (found 0x%02x)!\n", VAR_30, VAR_28[VAR_30 - 1]);
            break;
        }




        VAR_33 = &VAR_32->data[0][VAR_24 * VAR_32->linesize[0]];
        VAR_34 = &VAR_32->data[1][(VAR_24 >> 1) * VAR_32->linesize[1]];
        VAR_35 = &VAR_32->data[2][(VAR_24 >> 1) * VAR_32->linesize[2]];
        VAR_36 = VAR_33 + VAR_32->linesize[0] - 1;
        VAR_37 = VAR_34 + VAR_32->linesize[1] - 1;
        VAR_38 = VAR_35 + VAR_32->linesize[2] - 1;

        if ((VAR_24 & 1) && VAR_27[17] == VAR_15) {



            for (VAR_25 = 0; VAR_25 < VAR_30 - 1; VAR_25++) {
                if (VAR_33 > VAR_36) {
                    VAR_32->decode_error_flags = VAR_9;
                    FUNC_2(VAR_19, VAR_3, "Decoded data exceeded linesize!\n");
                    break;
                }
                if ((VAR_28[VAR_25] & 1) && VAR_27[28] == VAR_6) {



                    VAR_31 = VAR_28[VAR_25] >> 1;
                    VAR_33 += VAR_31;
                } else {
                    *(VAR_33++) = VAR_28[VAR_25];
                }
            }
        } else if (VAR_27[17] == VAR_15) {



            for (VAR_25 = 0; VAR_25 < VAR_30 - 4; ) {
                if (VAR_33 + 1 > VAR_36 || VAR_34 > VAR_37 || VAR_35 > VAR_38) {
                    VAR_32->decode_error_flags = VAR_9;
                    FUNC_2(VAR_19, VAR_3, "Decoded data exceeded linesize!\n");
                    break;
                }
                if ((VAR_28[VAR_25] & 1) && VAR_27[28] == VAR_6) {

                    VAR_31 = VAR_28[VAR_25] >> 1;
                    VAR_33 += VAR_31;
                    VAR_34 += VAR_31 >> 1;
                    VAR_35 += VAR_31 >> 1;
                    VAR_25++;
                } else {

                    *(VAR_33++) = VAR_28[VAR_25];
                    *(VAR_34++) = VAR_28[VAR_25+1];
                    *(VAR_33++) = VAR_28[VAR_25+2];
                    *(VAR_35++) = VAR_28[VAR_25+3];
                    VAR_25 += 4;
                }
            }
        }
    }

    *VAR_21 = 1;
    if ((VAR_26 = FUNC_1(VAR_20, VAR_23->frame)) < 0)
        return VAR_26;

    return VAR_22->size;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_21__ {int debug; int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_20__ {int* data; int size; } ;
struct TYPE_19__ {int pts; } ;
struct TYPE_18__ {int composition_id; int ancillary_id; int compute_edt; int prev_start; } ;
typedef TYPE_1__ DVBSubContext ;
typedef TYPE_2__ AVSubtitle ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;






 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,int const*,int,TYPE_2__*,int*) ;
 int FUNC_5 (TYPE_4__*,int const*,int) ;
 int FUNC_6 (TYPE_4__*,int const*,int) ;
 int FUNC_7 (TYPE_4__*,int const*,int) ;
 int FUNC_8 (TYPE_4__*,int const*,int,TYPE_2__*,int*) ;
 int FUNC_9 (TYPE_4__*,int const*,int) ;
 int FUNC_10 (TYPE_4__*,char*,...) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_4,
                         void *VAR_5, int *VAR_6,
                         AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    int VAR_9 = VAR_7->size;
    DVBSubContext *VAR_10 = VAR_4->priv_data;
    AVSubtitle *VAR_11 = VAR_5;
    const uint8_t *VAR_12, *VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17;
    int VAR_18 = 0;
    int VAR_19 = 0;
    int VAR_20 = 0;

    FUNC_10(VAR_4, "DVB sub packet:\n");

    for (VAR_17=0; VAR_17 < VAR_9; VAR_17++) {
        FUNC_10(VAR_4, "%02x ", VAR_8[VAR_17]);
        if (VAR_17 % 16 == 15)
            FUNC_10(VAR_4, "\n");
    }

    if (VAR_17 % 16)
        FUNC_10(VAR_4, "\n");

    if (VAR_9 <= 6 || *VAR_8 != 0x0f) {
        FUNC_10(VAR_4, "incomplete or broken packet");
        return VAR_0;
    }

    VAR_12 = VAR_8;
    VAR_13 = VAR_8 + VAR_9;

    while (VAR_13 - VAR_12 >= 6 && *VAR_12 == 0x0f) {
        VAR_12 += 1;
        VAR_14 = *VAR_12++;
        VAR_15 = FUNC_0(VAR_12);
        VAR_12 += 2;
        VAR_16 = FUNC_0(VAR_12);
        VAR_12 += 2;

        if (VAR_4->debug & VAR_2) {
            FUNC_2(VAR_4, VAR_1, "segment_type:%d page_id:%d segment_length:%d\n", VAR_14, VAR_15, VAR_16);
        }

        if (VAR_13 - VAR_12 < VAR_16) {
            FUNC_10(VAR_4, "incomplete or broken packet");
            VAR_18 = -1;
            goto end;
        }

        if (VAR_15 == VAR_10->composition_id || VAR_15 == VAR_10->ancillary_id ||
            VAR_10->composition_id == -1 || VAR_10->ancillary_id == -1) {
            int VAR_21 = 0;
            switch (VAR_14) {
            case 129:
                VAR_21 = FUNC_8(VAR_4, VAR_12, VAR_16, VAR_11, VAR_6);
                VAR_19 |= 1;
                break;
            case 128:
                VAR_21 = FUNC_9(VAR_4, VAR_12, VAR_16);
                VAR_19 |= 2;
                break;
            case 133:
                VAR_21 = FUNC_5(VAR_4, VAR_12, VAR_16);
                if (VAR_21 < 0) goto end;
                VAR_19 |= 4;
                break;
            case 130:
                VAR_21 = FUNC_7(VAR_4, VAR_12, VAR_16);
                VAR_19 |= 8;
                break;
            case 132:
                VAR_21 = FUNC_6(VAR_4, VAR_12,
                                                              VAR_16);
                VAR_20 = 1;
                break;
            case 131:
                VAR_21 = FUNC_4(VAR_4, VAR_12, VAR_16, VAR_11, VAR_6);
                if (VAR_19 == 15 && !VAR_20 && !VAR_4->width && !VAR_4->height) {

                    VAR_4->width = 720;
                    VAR_4->height = 576;
                }
                VAR_19 |= 16;
                break;
            default:
                FUNC_10(VAR_4, "Subtitling segment type 0x%x, page id %d, length %d\n",
                        VAR_14, VAR_15, VAR_16);
                break;
            }
            if (VAR_21 < 0)
                goto end;
        }

        VAR_12 += VAR_16;
    }


    if (VAR_19 == 15) {
        FUNC_2(VAR_4, VAR_1, "Missing display_end_segment, emulating\n");
        FUNC_4(VAR_4, VAR_12, 0, VAR_11, VAR_6);
    }

end:
    if(VAR_18 < 0) {
        *VAR_6 = 0;
        FUNC_3(VAR_11);
        return VAR_18;
    } else {
        if(VAR_10->compute_edt == 1 )
            FUNC_1(VAR_3, VAR_10->prev_start, VAR_11->pts);
    }

    return VAR_12 - VAR_8;
}

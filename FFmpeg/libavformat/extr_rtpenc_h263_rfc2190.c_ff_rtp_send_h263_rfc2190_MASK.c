
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct H263State {void* vmv2; void* hmv2; void* vmv1; void* hmv1; int mba; scalar_t__ gobn; scalar_t__ quant; int member_0; } ;
struct H263Info {int tr; int src; int i; int u; int s; int a; int pb; int member_0; } ;
typedef void* int8_t ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int max_payload_size; int cur_timestamp; int timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*,int ,char*,int) ;
 scalar_t__* FUNC_4 (scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,scalar_t__ const*,int) ;
 int FUNC_7 (TYPE_2__*,struct H263Info*,scalar_t__ const*,int,int,int) ;
 int FUNC_8 (TYPE_2__*,struct H263Info*,struct H263State*,scalar_t__ const*,int,int,int,int) ;
 int FUNC_9 (int *,int) ;

void FUNC_10(AVFormatContext *VAR_1, const uint8_t *VAR_2, int VAR_3,
                              const uint8_t *VAR_4, int VAR_5)
{
    RTPMuxContext *VAR_6 = VAR_1->priv_data;
    int VAR_7, VAR_8 = 0, VAR_9 = 0;
    GetBitContext VAR_10;
    struct H263Info VAR_11 = { 0 };
    struct H263State VAR_12 = { 0 };
    int VAR_13 = 0, VAR_14 = VAR_5 / 12;
    const uint8_t *VAR_15 = VAR_2;

    VAR_6->timestamp = VAR_6->cur_timestamp;

    FUNC_6(&VAR_10, VAR_2, VAR_3*8);
    if (FUNC_5(&VAR_10, 22) == 0x20) {
        VAR_11.tr = FUNC_5(&VAR_10, 8);
        FUNC_9(&VAR_10, 2);
        FUNC_9(&VAR_10, 3);
        VAR_11.src = FUNC_5(&VAR_10, 3);
        VAR_11.i = FUNC_5(&VAR_10, 1);
        VAR_11.u = FUNC_5(&VAR_10, 1);
        VAR_11.s = FUNC_5(&VAR_10, 1);
        VAR_11.a = FUNC_5(&VAR_10, 1);
        VAR_11.pb = FUNC_5(&VAR_10, 1);
    }

    while (VAR_3 > 0) {
        struct H263State VAR_16 = VAR_12;
        VAR_7 = FUNC_2(VAR_6->max_payload_size - 8, VAR_3);


        if (VAR_7 < VAR_3) {
            const uint8_t *VAR_17 = FUNC_4(VAR_2,
                                                                    VAR_2 + VAR_7);
            VAR_7 = VAR_17 - VAR_2;
            if (VAR_7 == VAR_6->max_payload_size - 8) {

                while (VAR_13 < VAR_14) {
                    uint32_t VAR_18 = FUNC_1(&VAR_4[12*VAR_13])/8;
                    if (VAR_18 >= VAR_2 - VAR_15)
                        break;
                    VAR_13++;
                }

                while (VAR_13 + 1 < VAR_14) {
                    uint32_t VAR_19 = FUNC_1(&VAR_4[12*(VAR_13 + 1)])/8;
                    if (VAR_19 >= VAR_17 - VAR_15)
                        break;
                    VAR_13++;
                }
                if (VAR_13 < VAR_14) {
                    const uint8_t *VAR_20 = &VAR_4[12*VAR_13];

                    uint32_t VAR_21 = FUNC_1(VAR_20);

                    uint32_t VAR_22 = (VAR_21 + 7)/8;

                    if (VAR_22 <= VAR_17 - VAR_15) {
                        VAR_12.quant = VAR_20[4];
                        VAR_12.gobn = VAR_20[5];
                        VAR_12.mba = FUNC_0(&VAR_20[6]);
                        VAR_12.hmv1 = (int8_t) VAR_20[8];
                        VAR_12.vmv1 = (int8_t) VAR_20[9];
                        VAR_12.hmv2 = (int8_t) VAR_20[10];
                        VAR_12.vmv2 = (int8_t) VAR_20[11];
                        VAR_9 = 8 * VAR_22 - VAR_21;
                        VAR_7 = VAR_22 - (VAR_2 - VAR_15);
                        VAR_13++;
                    }
                } else {
                    FUNC_3(VAR_1, VAR_0, "Unable to split H.263 packet, "
                           "use -mb_info %d or -ps 1.\n",
                           VAR_6->max_payload_size - 8);
                }
            }
        }

        if (VAR_3 > 2 && !VAR_2[0] && !VAR_2[1])
            FUNC_7(VAR_1, &VAR_11, VAR_2, VAR_7, VAR_9, VAR_7 == VAR_3);
        else
            FUNC_8(VAR_1, &VAR_11, &VAR_16, VAR_2, VAR_7, VAR_8,
                        VAR_9, VAR_7 == VAR_3);

        if (VAR_9) {
            VAR_8 = 8 - VAR_9;
            VAR_7--;
        } else {
            VAR_8 = 0;
        }
        VAR_2 += VAR_7;
        VAR_3 -= VAR_7;
        VAR_9 = 0;
    }
}

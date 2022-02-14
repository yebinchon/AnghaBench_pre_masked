
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {int * streams; TYPE_1__* priv_data; int * pb; } ;
struct TYPE_5__ {int continue_pes; } ;
typedef TYPE_1__ PVAContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
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
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned char*,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (unsigned char*) ;
 int FUNC_11 (TYPE_2__*,int ,char*,...) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_11, int64_t *VAR_12,
                               int *VAR_13, int *VAR_14, int VAR_15) {
    AVIOContext *VAR_16 = VAR_11->pb;
    PVAContext *VAR_17 = VAR_11->priv_data;
    int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    int64_t VAR_24 = VAR_5, VAR_25;
    int VAR_26;

recover:
    VAR_25 = FUNC_9(VAR_16);

    VAR_18 = FUNC_4(VAR_16);
    VAR_19 = FUNC_3(VAR_16);
    FUNC_3(VAR_16);
    VAR_20 = FUNC_3(VAR_16);
    VAR_21 = FUNC_3(VAR_16);
    VAR_22 = FUNC_4(VAR_16);

    VAR_23 = VAR_21 & 0x10;

    if (VAR_18 != VAR_8) {
        FUNC_11(VAR_11, VAR_3, "invalid syncword\n");
        return FUNC_0(VAR_6);
    }
    if (VAR_19 != VAR_10 && VAR_19 != VAR_7) {
        FUNC_11(VAR_11, VAR_3, "invalid streamid\n");
        return FUNC_0(VAR_6);
    }
    if (VAR_20 != 0x55) {
        FUNC_11(VAR_11, VAR_4, "expected reserved byte to be 0x55\n");
    }
    if (VAR_22 > VAR_9) {
        FUNC_11(VAR_11, VAR_3, "invalid payload length %u\n", VAR_22);
        return FUNC_0(VAR_6);
    }

    if (VAR_19 == VAR_10 && VAR_23) {
        VAR_24 = FUNC_6(VAR_16);
        VAR_22 -= 4;
    } else if (VAR_19 == VAR_7) {




        if (!VAR_17->continue_pes) {
            int VAR_27, VAR_28, VAR_29,
                VAR_30;
            unsigned char VAR_31[256];

            VAR_27 = FUNC_5(VAR_16);
            FUNC_3(VAR_16);
            VAR_29 = FUNC_4(VAR_16);
            VAR_30 = FUNC_4(VAR_16);
            VAR_28 = FUNC_3(VAR_16);

            if (FUNC_2(VAR_16)) {
                return VAR_0;
            }

            if (VAR_27 != 1 || VAR_28 == 0) {
                FUNC_11(VAR_11, VAR_4, "expected non empty signaled PES packet, "
                                          "trying to recover\n");
                FUNC_8(VAR_16, VAR_22 - 9);
                if (!VAR_15)
                    return FUNC_0(VAR_6);
                goto recover;
            }

            VAR_26 = FUNC_7(VAR_16, VAR_31, VAR_28);
            if (VAR_26 != VAR_28)
                return VAR_26 < 0 ? VAR_26 : VAR_1;
            VAR_22 -= 9 + VAR_28;

            VAR_29 -= 3 + VAR_28;

            VAR_17->continue_pes = VAR_29;

            if (VAR_30 & 0x80 && (VAR_31[0] & 0xf0) == 0x20) {
                if (VAR_28 < 5) {
                    FUNC_11(VAR_11, VAR_3, "header too short\n");
                    FUNC_8(VAR_16, VAR_22);
                    return VAR_1;
                }
                VAR_24 = FUNC_10(VAR_31);
            }
        }

        VAR_17->continue_pes -= VAR_22;

        if (VAR_17->continue_pes < 0) {
            FUNC_11(VAR_11, VAR_4, "audio data corruption\n");
            VAR_17->continue_pes = 0;
        }
    }

    if (VAR_24 != VAR_5)
        FUNC_1(VAR_11->streams[VAR_19-1], VAR_25, VAR_24, 0, 0, VAR_2);

    *VAR_12 = VAR_24;
    *VAR_13 = VAR_22;
    *VAR_14 = VAR_19;
    return 0;
}

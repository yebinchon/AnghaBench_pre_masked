
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int line2 ;
typedef int line ;
typedef int int64_t ;
struct TYPE_17__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_16__ {int pos; int pts; int duration; } ;
struct TYPE_15__ {TYPE_1__* codecpar; } ;
struct TYPE_14__ {int q; } ;
struct TYPE_13__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ SCCContext ;
typedef int FFTextReader ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 char* FUNC_2 (char*,char*,char**) ;
 TYPE_3__* FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_3__*,int,int,int) ;
 int FUNC_5 (char) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 TYPE_4__* FUNC_7 (int *,int*,int,int ) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_5__*,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char*,...) ;
 int FUNC_14 (char*,char*,int) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_3)
{
    SCCContext *VAR_4 = VAR_3->priv_data;
    AVStream *VAR_5 = FUNC_3(VAR_3, ((void*)0));
    char VAR_6[4096], VAR_7[4096];
    int VAR_8 = 0, VAR_9 = 0;
    ptrdiff_t VAR_10, VAR_11;
    uint8_t VAR_12[4096];
    FFTextReader VAR_13;

    FUNC_10(VAR_3, &VAR_13, VAR_3->pb);

    if (!VAR_5)
        return FUNC_0(VAR_2);
    FUNC_4(VAR_5, 64, 1, 1000);
    VAR_5->codecpar->codec_type = VAR_0;
    VAR_5->codecpar->codec_id = VAR_1;

    while (!FUNC_9(&VAR_13)) {
        const int64_t VAR_14 = FUNC_11(&VAR_13);
        char *VAR_15 = ((void*)0), *VAR_16;
        int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
        int VAR_22, VAR_23, VAR_24, VAR_25;
        int64_t VAR_26, VAR_27;
        AVPacket *VAR_28;

        if (VAR_8 == 0) {
            while (!FUNC_9(&VAR_13)) {
                VAR_11 = FUNC_8(&VAR_13, VAR_6, sizeof(VAR_6));
                if (VAR_11 > 13)
                    break;
            }
        }

        if (!FUNC_14(VAR_6, "Scenarist_SCC V1.0", 18))
            continue;
        if (FUNC_13(VAR_6, "%d:%d:%d%*[:;]%d", &VAR_17, &VAR_18, &VAR_19, &VAR_20) != 4)
            continue;

        VAR_26 = (VAR_17 * 3600LL + VAR_18 * 60LL + VAR_19) * 1000LL + VAR_20 * 33;

        while (!FUNC_9(&VAR_13)) {
            VAR_10 = FUNC_8(&VAR_13, VAR_7, sizeof(VAR_7));
            if (VAR_10 > 13)
                break;
        }
        if (FUNC_13(VAR_7, "%d:%d:%d%*[:;]%d", &VAR_22, &VAR_23, &VAR_24, &VAR_25) != 4)
            continue;

        VAR_27 = (VAR_22 * 3600LL + VAR_23 * 60LL + VAR_24) * 1000LL + VAR_25 * 33;
        VAR_8++;

try_again:
        VAR_16 = (char *)&VAR_6;
        VAR_16 += 12;

        for (VAR_21 = 0; VAR_21 < 4095; VAR_21 += 3) {
            char *VAR_29 = FUNC_2(VAR_16, " ", &VAR_15);
            char VAR_30, VAR_31, VAR_32, VAR_33;

            if (!VAR_29)
                break;

            if (FUNC_13(VAR_29, "%c%c%c%c", &VAR_30, &VAR_31, &VAR_32, &VAR_33) != 4)
                break;

            VAR_16 = ((void*)0);
            VAR_12[VAR_21+0] = 0xfc;
            VAR_12[VAR_21+1] = FUNC_5(VAR_31) | (FUNC_5(VAR_30) << 4);
            VAR_12[VAR_21+2] = FUNC_5(VAR_33) | (FUNC_5(VAR_32) << 4);
        }
        VAR_12[VAR_21] = 0;

        VAR_28 = FUNC_7(&VAR_4->q, VAR_12, VAR_21, 0);
        if (!VAR_28)
            return FUNC_0(VAR_2);

        VAR_28->pos = VAR_14;
        VAR_28->pts = VAR_26;
        VAR_28->duration = FUNC_1(1200, VAR_27 - VAR_26);
        FUNC_12(VAR_6, VAR_7, sizeof(VAR_6));
        VAR_7[0] = 0;
    }

    if (VAR_6[0])
        goto try_again;

    FUNC_6(VAR_3, &VAR_4->q);

    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int16_t ;
typedef int VLC ;
struct TYPE_3__ {int count; int sym; int n0; int l; int r; } ;
typedef TYPE_1__ Node ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int,int *,int,int,int*,int,int,int *,int,int,int ) ;
 int FUNC_3 (int*,int *,int *,TYPE_1__*,int,int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3, VLC *VAR_4, const uint32_t *VAR_5)
{
    Node VAR_6[512];
    uint32_t VAR_7[256];
    int16_t VAR_8[256];
    uint8_t VAR_9[256];
    int VAR_10, VAR_11, VAR_12, VAR_13 = 0;

    FUNC_1(VAR_4);

    for (VAR_11 = 0; VAR_11 < 256; VAR_11++) {
        VAR_6[VAR_11].count = VAR_5[VAR_11];
        VAR_6[VAR_11].sym = VAR_11;
        VAR_6[VAR_11].n0 = -2;
        VAR_6[VAR_11].l = VAR_11;
        VAR_6[VAR_11].r = VAR_11;
    }

    VAR_10 = 256;
    VAR_12 = 0;
    do {
        for (VAR_11 = 0; ; VAR_11++) {
            int VAR_14 = VAR_12;
            int VAR_15 = VAR_10;
            int VAR_16 = VAR_10;
            unsigned VAR_17, VAR_18;

            VAR_6[VAR_10].count = -1;

            do {
                int VAR_19 = VAR_6[VAR_14].count;
                if (VAR_19 && (VAR_19 < VAR_6[VAR_15].count)) {
                    if (VAR_19 >= VAR_6[VAR_16].count) {
                        VAR_15 = VAR_14;
                    } else {
                        VAR_15 = VAR_16;
                        VAR_16 = VAR_14;
                    }
                }
                VAR_14 += 1;
            } while (VAR_14 != VAR_10);

            if (VAR_15 == VAR_10)
                break;

            VAR_17 = VAR_6[VAR_16].count;
            VAR_18 = VAR_6[VAR_15].count;
            VAR_6[VAR_16].count = 0;
            VAR_6[VAR_15].count = 0;
            if (VAR_17 >= VAR_2 - VAR_18) {
                FUNC_0(VAR_3, VAR_1, "count overflow\n");
                return VAR_0;
            }
            VAR_6[VAR_10].count = VAR_17 + VAR_18;
            VAR_6[VAR_10].sym = -1;
            VAR_6[VAR_10].n0 = VAR_10;
            VAR_6[VAR_10].l = VAR_15;
            VAR_6[VAR_10].r = VAR_16;
            VAR_10++;
        }
        VAR_12++;
    } while (VAR_10 - 256 == VAR_12);

    FUNC_3(VAR_7, VAR_8, VAR_9, VAR_6, VAR_10 - 1, 0, 0, &VAR_13);

    return FUNC_2(VAR_4, 10, VAR_13, VAR_8, 2, 2, VAR_7, 4, 4, VAR_9, 1, 1, 0);
}

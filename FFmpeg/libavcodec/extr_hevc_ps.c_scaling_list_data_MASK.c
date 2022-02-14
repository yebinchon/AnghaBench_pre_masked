
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_6__ {int chroma_format_idc; } ;
struct TYPE_5__ {int*** sl; int** sl_dc; } ;
typedef TYPE_1__ ScalingList ;
typedef TYPE_2__ HEVCSPS ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,char*,unsigned int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int*,int*,int) ;

__attribute__((used)) static int FUNC_6(GetBitContext *VAR_6, AVCodecContext *VAR_7, ScalingList *VAR_8, HEVCSPS *VAR_9)
{
    uint8_t VAR_10;
    int32_t VAR_11[2][6];
    int VAR_12, VAR_13, VAR_14;
    int VAR_15;

    for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
        for (VAR_13 = 0; VAR_13 < 6; VAR_13 += ((VAR_12 == 3) ? 3 : 1)) {
            VAR_10 = FUNC_2(VAR_6);
            if (!VAR_10) {
                unsigned int VAR_16 = FUNC_4(VAR_6);


                if (VAR_16) {

                    VAR_16 *= (VAR_12 == 3) ? 3 : 1;
                    if (VAR_13 < VAR_16) {
                        FUNC_1(VAR_7, VAR_1,
                               "Invalid delta in scaling list data: %d.\n", VAR_16);
                        return VAR_0;
                    }

                    FUNC_5(VAR_8->sl[VAR_12][VAR_13],
                           VAR_8->sl[VAR_12][VAR_13 - VAR_16],
                           VAR_12 > 0 ? 64 : 16);
                    if (VAR_12 > 1)
                        VAR_8->sl_dc[VAR_12 - 2][VAR_13] = VAR_8->sl_dc[VAR_12 - 2][VAR_13 - VAR_16];
                }
            } else {
                int VAR_17, VAR_18;
                int32_t VAR_19;

                VAR_17 = 8;
                VAR_18 = FUNC_0(64, 1 << (4 + (VAR_12 << 1)));
                if (VAR_12 > 1) {
                    VAR_11[VAR_12 - 2][VAR_13] = FUNC_3(VAR_6) + 8;
                    VAR_17 = VAR_11[VAR_12 - 2][VAR_13];
                    VAR_8->sl_dc[VAR_12 - 2][VAR_13] = VAR_17;
                }
                for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++) {
                    if (VAR_12 == 0)
                        VAR_14 = 4 * VAR_3[VAR_15] +
                                  VAR_2[VAR_15];
                    else
                        VAR_14 = 8 * VAR_5[VAR_15] +
                                  VAR_4[VAR_15];

                    VAR_19 = FUNC_3(VAR_6);
                    VAR_17 = (VAR_17 + 256U + VAR_19) % 256;
                    VAR_8->sl[VAR_12][VAR_13][VAR_14] = VAR_17;
                }
            }
        }

    if (VAR_9->chroma_format_idc == 3) {
        for (VAR_15 = 0; VAR_15 < 64; VAR_15++) {
            VAR_8->sl[3][1][VAR_15] = VAR_8->sl[2][1][VAR_15];
            VAR_8->sl[3][2][VAR_15] = VAR_8->sl[2][2][VAR_15];
            VAR_8->sl[3][4][VAR_15] = VAR_8->sl[2][4][VAR_15];
            VAR_8->sl[3][5][VAR_15] = VAR_8->sl[2][5][VAR_15];
        }
        VAR_8->sl_dc[1][1] = VAR_8->sl_dc[0][1];
        VAR_8->sl_dc[1][2] = VAR_8->sl_dc[0][2];
        VAR_8->sl_dc[1][4] = VAR_8->sl_dc[0][4];
        VAR_8->sl_dc[1][5] = VAR_8->sl_dc[0][5];
    }


    return 0;
}

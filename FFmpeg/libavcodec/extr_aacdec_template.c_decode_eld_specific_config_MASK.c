
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ frame_length_short; scalar_t__ sbr; scalar_t__ ps; } ;
typedef TYPE_1__ MPEG4AudioConfig ;
typedef int GetBitContext ;
typedef int AVCodecContext ;
typedef int AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **,int,int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (int *,int **,int*,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(AACContext *VAR_6, AVCodecContext *VAR_7,
                                     GetBitContext *VAR_8,
                                     MPEG4AudioConfig *VAR_9,
                                     int VAR_10)
{
    int VAR_11, VAR_12, VAR_13;
    uint8_t VAR_14[VAR_3*4][3];
    int VAR_15 = 0;
    const int VAR_16 = 0;

    VAR_9->ps = 0;
    VAR_9->sbr = 0;






    VAR_9->frame_length_short = FUNC_4(VAR_8);

    VAR_13 = FUNC_3(VAR_8, 3);
    if (VAR_13) {
        FUNC_1(VAR_7,
                                      "AAC data resilience (flags %x)",
                                      VAR_13);
        return VAR_1;
    }

    if (FUNC_4(VAR_8)) {
        FUNC_1(VAR_7,
                                      "Low Delay SBR");
        return VAR_1;
    }

    while (FUNC_3(VAR_8, 4) != VAR_16) {
        int VAR_17 = FUNC_3(VAR_8, 4);
        if (VAR_17 == 15)
            VAR_17 += FUNC_3(VAR_8, 8);
        if (VAR_17 == 15 + 255)
            VAR_17 += FUNC_3(VAR_8, 16);
        if (FUNC_5(VAR_8) < VAR_17 * 8 + 4) {
            FUNC_0(VAR_7, VAR_2, VAR_5);
            return VAR_0;
        }
        FUNC_8(VAR_8, 8 * VAR_17);
    }

    if ((VAR_11 = FUNC_7(VAR_7, VAR_14,
                                          &VAR_15, VAR_10)))
        return VAR_11;

    if (VAR_6 && (VAR_11 = FUNC_6(VAR_6, VAR_14, VAR_15, VAR_4, 0)))
        return VAR_11;

    VAR_12 = FUNC_3(VAR_8, 2);
    if (VAR_12) {
        FUNC_1(VAR_7,
                                      "epConfig %d", VAR_12);
        return VAR_1;
    }
    return 0;
}

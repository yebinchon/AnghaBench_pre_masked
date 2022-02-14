
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__* data; } ;
typedef int CVPixelBufferRef ;
typedef TYPE_1__ AVFrame ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,char*,...) ;
 int FUNC_9 (int *,int *,size_t) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_2,
                                        const AVFrame *VAR_3,
                                        CVPixelBufferRef VAR_4,
                                        const size_t *VAR_5,
                                        const size_t *VAR_6)
{
    int VAR_7, VAR_8;
    size_t VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    uint8_t *VAR_14;
    uint8_t *VAR_15;
    size_t VAR_16;

    VAR_10 = FUNC_6(VAR_4, 0);
    if (VAR_10) {
        FUNC_8(
            VAR_2,
            VAR_1,
            "Error: Could not lock base address of CVPixelBuffer: %d.\n",
            VAR_10
        );
    }

    if (FUNC_5(VAR_4)) {
        VAR_9 = FUNC_4(VAR_4);
        for (VAR_7 = 0; VAR_3->data[VAR_7]; VAR_7++) {
            if (VAR_7 == VAR_9) {
                FUNC_7(VAR_4, 0);
                FUNC_8(VAR_2,
                    VAR_1,
                    "Error: different number of planes in AVFrame and CVPixelBuffer.\n"
                );

                return VAR_0;
            }

            VAR_15 = (uint8_t*)FUNC_1(VAR_4, VAR_7);
            VAR_14 = (uint8_t*)VAR_3->data[VAR_7];
            VAR_13 = FUNC_3(VAR_4, VAR_7);
            VAR_12 = VAR_5[VAR_7];
            VAR_11 = VAR_6[VAR_7];

            if (VAR_13 == VAR_12) {
                FUNC_9(VAR_15, VAR_14, VAR_12 * VAR_11);
            } else {
                VAR_16 = VAR_13 < VAR_12 ? VAR_13 : VAR_12;

                for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
                    FUNC_9(VAR_15 + VAR_8 * VAR_13, VAR_14 + VAR_8 * VAR_12, VAR_16);
                }
            }
        }
    } else {
        if (VAR_3->data[1]) {
            FUNC_7(VAR_4, 0);
            FUNC_8(VAR_2,
                VAR_1,
                "Error: different number of planes in AVFrame and non-planar CVPixelBuffer.\n"
            );

            return VAR_0;
        }

        VAR_15 = (uint8_t*)FUNC_0(VAR_4);
        VAR_14 = (uint8_t*)VAR_3->data[0];
        VAR_13 = FUNC_2(VAR_4);
        VAR_12 = VAR_5[0];
        VAR_11 = VAR_6[0];

        if (VAR_13 == VAR_12) {
            FUNC_9(VAR_15, VAR_14, VAR_12 * VAR_11);
        } else {
            VAR_16 = VAR_13 < VAR_12 ? VAR_13 : VAR_12;

            for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
                FUNC_9(VAR_15 + VAR_8 * VAR_13, VAR_14 + VAR_8 * VAR_12, VAR_16);
            }
        }
    }

    VAR_10 = FUNC_7(VAR_4, 0);
    if (VAR_10) {
        FUNC_8(VAR_2, VAR_1, "Error: Could not unlock CVPixelBuffer base address: %d.\n", VAR_10);
        return VAR_0;
    }

    return 0;
}
